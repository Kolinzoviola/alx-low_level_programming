This task talks about the struct in C programming 
and typdef
we have in total of about 6 task here and we will attempt to profer solutions for them 

Task 0 
we are to define a new type struct dog with the following below
name, type = char *
age, type = float
owner, type = char *

Task 1 

A dog is the only thing on earth that loves you more than you love yourself
mandatory
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Task 2
A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

Task 3

Define a new type dog_t as a new name for the type struct dog.

task 4

Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

task 5 

Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);
