#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int C;
	int arr[1000];
	int a;
	int n;
	double per;
	int count=0;
	int sum = 0;
	int avg=0;
	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		scanf("%d", &n);
		for (int k = 0; k < n; k++) {
			scanf("%d", &a);
			arr[k]= a;
			sum += a;
		}
		avg = sum / n;
		for (int k = 0; k < n; k++) {
			if (arr[k] > avg)
				count++;
		}
		per = ((double)count*100 / (double)n);
		printf("%.3lf%%\n", per);
		sum = 0; avg = 0; n = 0;
		count = 0;
	}

	getchar(); getchar();
	return 0;
}
