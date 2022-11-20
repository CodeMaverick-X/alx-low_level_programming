#include <stdio.h>

/**
 * main - prnts fibonacci to 50
 * Return: 0
 */
void printFibonacci(unsigned long int n){    
	static unsigned long int n1=0,n2=1,n3;

	if(n>0)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		printf("%ld ",n3);
		printFibonacci(n-1);
	}
}
int main(){
	unsigned int long n = 50;
	printFibonacci(n);
 	return 0;
 }    
