#include<stdio.h>
int main()
{
	int i, j,gcd=1;
	printf("Enter first number : ");
	scanf("%d", &i);
	printf("Enter second number : ");
	scanf("%d", &j);
	printf("Greatest common divisor = ");
	while (j != 0) {
		int t = j;
		j = i % j;
		i = t;
	}
	gcd = i;
	printf("%d", gcd);
	
}