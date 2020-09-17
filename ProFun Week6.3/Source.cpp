#include<stdio.h>
int main()
{
	int m,h;
	scanf_s("%d %d", &h, &m);
	if (h == 0||(h==1&&m==0)) printf("Free");
	else if (h >= 1 && m == 0) printf("%d", h * 30-30);
	else printf("%d", h * 30);
	return 0;
}