#include <iostream>
#include <cstdbool>
#include <cmath>

using namespace std;

int main()
{

	int number, counter = 0;
	double sum = 0;

	while (!(cin >> number).eof())
	{

		int i;
		bool isPrime = true, canDivideby10 = false;

		if (number % 10 == 0)
			canDivideby10 = true;
		else
			if (number < 2)
				isPrime = false;
			else
				for (i = 2; i <= (float)number / 2; i++)
				{

					if (number % i == 0) {
						isPrime = false;
						break;
					}
				}

		if (!canDivideby10 && !isPrime)
			sum += pow(number, 2);

		counter++;
		//cout << "number:" << number
		//	<< " counter:" << counter
		//	<< " sum:" << sum << endl;
	}

	cout << counter << " " << sum;
}
