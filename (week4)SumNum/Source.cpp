#include<stdio.h>
int main()
{
	long long Num,n,sum=0,i,sum2=0,p,sum3=0;
	scanf_s("%lld", &Num);
	for (n = Num; n % 10 >= 0 && n >= 1 ;)
	{
		sum += n % 10;
		n /= 10;
	}
	printf("%lld", sum);
	if (sum >= 10)
	{
		for (i = sum; i % 10 >= 0 && i >= 1;)
		{
			sum2 += i % 10;
			i /= 10;
		}
		printf(" -> %lld", sum2);
		if (sum2 >= 10)
		{
			for (p = sum2; p % 10 >= 0 && p >= 1;)
			{
				sum3 += p % 10;
				p /= 10;
			}
			printf(" -> %lld", sum3);
		}
	}
	return 0;
}