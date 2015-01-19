/* Even Fibonaci Numbers */
// Jordan Cameron
// a C Program that prints the sum of the even fibonacci numbers whose values do not exceed 4 million
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,... | 4,000,000

#include <stdio.h>

int main(void)
{	
	int currentFib = 2;
	int nextFib;
	int prevFib = 1;
	int sum = 0;

 while(currentFib < 4000000)
{	
		if (currentFib % 2 == 0)		// even check
	{
			sum = sum + currentFib;
	}

// increment all variables through sequence
	
	nextFib = currentFib + prevFib;
	prevFib = currentFib;
	currentFib = nextFib;
}


 printf("The sum is %d.\n", sum);	

	return 0;
}
