#include "vector.h"

#include <stdio.h>

#define INITIAL_CAPACITY 1
#define ELEMENT_SIZE (sizeof(char*))

Vector create()
{
	Vector v = {};
	v.length = 0;
	v.capacity = INITIAL_CAPACITY;
	v.data = malloc(v.capacity * ELEMENT_SIZE);
	if(v.data == NULL)
	{
		fprintf(stderr, "Memory allocation failed!\n");
		exit(5);
	}

	return v;
}

void vector_free(Vector* v)
{
	free(v->data);
}

void push_back(Vector* v, char* data)
{
	if(v->length == v->capacity)
	{
		v->capacity *= 2;
		v->data = realloc(v->data, v->capacity * ELEMENT_SIZE);
		if(v->data == NULL)
		{
			fprintf(stderr, "Memory allocation failed!\n");
			exit(5);
		}
	}

	v->data[v->length] = data;
	v->length++;
}

void pop_back(Vector* v, int index)
{
	if ((index >= 0) || (index < v->length))
    {        
        v->data[index] = NULL;
        for (int i = index; (i < v->length - 1); ++i)
        {
            v->data[i] = v->data[i + 1];
            v->data[i + 1] = NULL;
        }
        v->length--;
		if(v->length < v->capacity / 2)
		{
			v->capacity /= 2;
			v->data = realloc(v->data, v->capacity * ELEMENT_SIZE);
		}
	}
	else
	{
		fprintf(stderr, "Invalid index!\n");
	}
}

char** begin(Vector* v)
{
	return &(v->data[0]);
}

char** end(Vector* v)
{
	return &(v->data[v->length]);
}