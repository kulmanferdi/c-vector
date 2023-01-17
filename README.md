# Vector

A dynamic array implementation in C to store strings.

Here is how you can use the Vector *class* in your program, function by function:

### create

Creates the vector, initializes the variables that are used.

``` C
    Vector vector = create();
```

### vector_free

This function frees up the used memory at the given index.

``` C
    vector_free(&vector[index]);
```

### push_back

This function puts a string into our dynamic array.
 
``` C
    push_back(vector, "string");
```

### pop_back

This function puts a string out of our dynamic array at the given index.

``` C
    pop_back(vector, 0);
```

### begin

This function returns the first character of our dynamic array.

``` C
    begin(&vector);
```

### end

This function returns the last character of our dynamic array.

``` C
    end(&vector);
```

## Credit

The program is not fully mine, but please make sure to mark the source in the documentation,if you use it.
