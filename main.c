#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
	int a;
	printf("정수 하나를 입력하시오: ");
	scanf("%d", &a);
	return a;
}

int factorial(int n)
{
	int res = 1;
	int i;
	for (i = 1; i <= n; i++)
		res = res * i;
	return res;
}

int combination(int n, int r)
{
	return (factorial(n) / factorial(n - r) / factorial(r));
}

int main(int argc, char *argv[]) {
	int n, r, result;

	n = get_integer();
	r = get_integer();

	result = combination(n, r);
	printf("%d_C_%d = %d", n, r, result);

	return 0;
}

