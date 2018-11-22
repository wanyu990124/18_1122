#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10,b=20,c=0;
	c = a;
	a = b;
	b = c;
   printf("%d,%d\n", a, b);
	system("pause");

}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10, b = 20;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d,%d\n", a, b);
	system("pause");
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	printf("请输入十个整数：");
	for (i = 0; i < 10; i++) {
	scanf("%d", &arr[i]);
	max = arr[0];
	}
	for (i = 0; i < 10; i++) {
	if (arr[i]>max) {
	max = arr[i];
	}
	}
	printf("十个数中的最大值为：%d\n", max);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, t = 0;
	printf("请输入三个数字:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (b > a) {
		t = b;
		b = a;
		a = t;
	}
	if (c > a) {
		t = c;
		c = a;
		a = t;
	}
	if (c > b) {
		t = c;
		c = b;
		b = t;
	}
	printf("三个数字从大到小排序为：%d,%d,%d\n", a, b, c);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
# include <stdio.h>
int  main()
{ 
	int x, y, num1, num2, t;
    printf("请输入两个正整数：\n");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2) {
    t = num1;
    num1 = num2;
    num2 = t;
}
    x = num1;
    y = num2;
    while (y != 0) {
    t = x%y;
    x = y;
    y = t;
}
    printf("它们的最大公约数为：%d\n", x);
	system("pause");
    return 0;
}