//this is a test for somthing truely special
//this is  a program to realllocate memory
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int *ptr;
	int size = 5;
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	int i, j;

	for (i = 0; i < size; i++)
	{
		ptr[i] = i;
	}

	for (j = 0; j < size; j++)
	{
		printf("%d\n", ptr[j]);
	
	}
	printf("\n");
// this is where i use realloc in the code
	
	int new_size = 15;
	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
		return (NULL);


	for (; i < new_size; i++)
	{
		ptr[i] = i;
	}

	for (j = 0; j < new_size; j++)
	{
		printf("%d\n", ptr[j]);
	}





	return (0);
}
