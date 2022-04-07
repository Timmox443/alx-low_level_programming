### Task 0: Write a function that allocates memory using malloc.
<p align = "center">
Prototype: void *malloc_checked(unsigned int b);</br>
Returns a pointer to the allocated memory</br>
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.</br>
</p>

### Task 1: Write a function that concatenates two strings.
<p align = "center">
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);</br>
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated</br>
If the function fails, it should return NULL</br>
If n is greater or equal to the length of s2 then use the entire string s2</br>
if NULL is passed, treat it as an empty string</br>
</p>

### Task 2. Write a function that allocates memory for an array, using malloc.

<p align = "center">
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);</br>
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.</br>
The memory is set to zero </br>
If nmemb or size is 0, then _calloc returns NULL </br>
If malloc fails, then _calloc returns NULL </br>
FYI: The standard library provides a different function: calloc. Run man calloc to learn more. </br>
</p>

### Task 3. Write a function that creates an array of integers.

<p align = "center">
Prototype: int *array_range(int min, int max); </br>
The array created should contain all the values from min (included) to max (included), ordered from min to max </br>
Return: the pointer to the newly created array </br>
If min > max, return NULL </br>
If malloc fails, return NULL </br>
</p>

### Task 4 . Write a function that reallocates a memory block using malloc and free
<p align = "center">
Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size); </br>
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size) </br>
old_size is the size, in bytes, of the allocated space for ptr </br>
and new_size is the new size, in bytes of the new memory block </br>
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes </br>
If new_size > old_size, the “added” memory should not be initialized </br>
If new_size == old_size do not do anything and return ptr </br>
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size </br>
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL </br>
Don’t forget to free ptr when it makes sense </br>
FYI: The standard library provides a different function: realloc. Run man realloc to learn more. </br>
</p>

### Task 5. Write a program that multiplies two positive numbers.

<p align = "center" >
Usage: mul num1 num2 </br>
num1 and num2 will be passed in base 10 </br>
Print the result, followed by a new line </br>
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98 </br>
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98 </br>
You are allowed to use more than 5 functions in your file </br>
You can use bc (man bc) to check your results. </br>
</p>


