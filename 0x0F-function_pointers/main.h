#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H
int _putchar(char c)
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);


#endif
