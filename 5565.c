#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int price,total;
	scanf("%d", &total);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &price);
		total -= price;
	}
	printf("%d", total);
	getchar(); getchar();
	return 0;
}