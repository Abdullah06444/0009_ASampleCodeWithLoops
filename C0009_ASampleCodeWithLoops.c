#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{

	int number, counter = 0;
	double sum = 0;

	while ((scanf("%d", &number)) != EOF)
	{

		int i;
		bool isPrime = true, canDivideby10 = false;

		if (number % 10 == 0)
			canDivideby10 = true;
		else
			if (number < 2)
				isPrime = false;
			else
				for (i = 2; i <= (float) number / 2; i++)
				{

					if (number % i == 0) {
						isPrime = false;
						break;
					}
				}

		if (canDivideby10 == false && isPrime == false)
			sum += pow(number, 2);

		counter++;
		// printf("number:%d counter:%d sum:%.0lf\n", number, counter, sum);
	}

	printf("%d %.0lf", counter, sum);
}
