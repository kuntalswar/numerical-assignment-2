#include<stdio.h>
#include<time.h>

long int factorial(int n)
{
	int i;
	long int fact=1;
	for(i=0;i<n;i++)
	{
		fact=fact*(i+1);
	}
	return(fact);
}
int main()
{	
	clock_t t1,t2;
	int n,i;
	long int fact;
	double time;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	t1 = clock();
	for(i=0;i<100;i++)
	{
		fact=factorial(n);
	}
	t2 = clock();
	time = ((double) ((t2 - t1)) / CLOCKS_PER_SEC)/100;
	printf("Time = %.10e sec\n",time);
	printf("Factorial of %d is %ld\n",n,fact);
	printf("this is the fastest\n");
}
