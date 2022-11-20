#include <stdio.h>

/**
 * main - prnts fibonacci to 50
 * Return: 0
 */
void printFibonacci(unsigned int n){    
	static unsigned int n1=0,n2=1,n3;

	if(n>0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%d ",n3);
		printFibonacci(n-1);
	}
}
int main(){
	unsigned int n = 50;
	printf("%d %d ",0,1);
	printFibonacci(n-2);
 	return 0;
 }    
