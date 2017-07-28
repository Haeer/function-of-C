#include <stdio.h>
#include <math.h>
int main()
{
	printf("%.2f\t%.3f",ceil(98.1),ceil(99.9));	
	printf("%.2f\t%.3f",ceil(98.1),ceil(99.9));
	printf("%.2f\t%.3f",double(98.1),double(99.9));
	printf("%.2f\t%.3f",ceil(-98.1),ceil(-99.9));
//ceil和floo取整函数
	printf("%.2f\t",sqrt(4));
	printf("%.2f\t",sqrt(-4));
//sqrt传入数字的平方根
	printf("%.2f\t",pow(4,5));
//某个数的n次幂
	printf("%.2f\t",abs(-4));
//返回绝对值
}
