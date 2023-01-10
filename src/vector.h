#ifndef VECTOR
#define VECTOR

#include <stdlib.h>

typedef struct
{
	char** data;
	size_t length;
	size_t capacity;
} Vector;

Vector create();
void vector_free(Vector* v);

void push_back(Vector* v, char* data);
void pop_back(Vector* v, int index);

char** begin(Vector* vector);
char** end(Vector* vector);

#endif