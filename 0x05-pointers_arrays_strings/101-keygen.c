#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * min - program that generates random valid
 * password for the program 101-crackme.
 * Return:Always 0 (success)
 */
int main(void)
{
	int pass[100];

	int i, sum, n;
	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass{i} = rand() % 70;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
		}
	}
	return (0);
}
