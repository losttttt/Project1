#include<stdio.h>
int main()
{
	const float a = 3.785;
	const float b = 1.609;
	float q,h,i;
	printf("请输入您旅行的里程的消耗的汽油量：");
	scanf_s("%f,%f", &q, &h);
	i = q / h;

	printf("您每加仑汽油行驶的英里数是：%.1f", i);
	q *= a; h *= b;
	i = q / h;
	printf("您每升汽油行驶的公里数是：%.1f",i);
	return 0;

}