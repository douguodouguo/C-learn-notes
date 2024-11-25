#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {

	int foot = 0;
	int inch = 0;

	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示 5 英尺 7 英寸:");
	scanf("%d %d", &foot, &inch);
	printf("身高是 %f 米。\n", ((foot + inch / 12) * 0.3048));

	return 0;

}
int plus(x, y){

	int a, b;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

}
float  Highter(void){

	int foot = 0;
	int inch = 0;

	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示 5 英尺 7 英寸:");
	scanf("%d %d", &foot, &inch);
	printf("身高是 %f 米。\n", ((foot + inch / 12) * 0.3048));

	return 0;

}