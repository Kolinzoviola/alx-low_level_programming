The task before us today is singly link list, from task 0 to 4 as mandatory and with two advance questions added for possible solution
A "lists.h" file is created first, it has most of the library used to write most of the functions
Task 0

I am supposed to write a function that prints all the elements of the  list_t list.
I will be using : 
The prototype: size_t print_list(const list_t *h);
I am supposed to Return: the number of nodes
I am also to format as the example given 
The function should print [0]  (nil) if str is NULL, 
I am allowed to use printf


Task 1
Writing  a function that returns the number of elements in a linked list_t list.
The prototype: size_t list_len(const list_t *h); to be used 
Task 2
Writing a function that adds a new node at the beginning of a list_t list
The Prototype: list_t *add_node(list_t **head, const char *str);
The function is to Return: the address of the new element, or NULL if it failed
str needs to be duplicated and i can use strdup
Task 3
To Write a function that adds a new node at the end of a list_t list.
My Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated as usual i am allowed to use strdup


Task 4
Write a function that frees a list_t list.
My Prototype: void free_list(list_t *head);
Task 100 the first of advance
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
 printf function is allowed


Task 101 the 2nd part of the advance 


I am writing a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
I am only allowed to use the printf function
I am not allowed to use interrupts
My program will be compiled using nasm and gcc to give the desired output
