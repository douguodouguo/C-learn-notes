#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {

	int foot = 0;
	int inch = 0;

	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5 7\"��ʾ 5 Ӣ�� 7 Ӣ��:");
	scanf("%d %d", &foot, &inch);
	printf("����� %f �ס�\n", ((foot + inch / 12) * 0.3048));

	return 0;

}
int plus(x, y){

	int a, b;

	printf("����������������");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

}
float  Highter(void){

	int foot = 0;
	int inch = 0;

	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5 7\"��ʾ 5 Ӣ�� 7 Ӣ��:");
	scanf("%d %d", &foot, &inch);
	printf("����� %f �ס�\n", ((foot + inch / 12) * 0.3048));

	return 0;

}