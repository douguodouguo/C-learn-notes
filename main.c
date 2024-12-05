#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {




}

int plus(x, y){

	int a, b;

	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

}

	int foot = 0;
	int inch = 0;

	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示 5 英尺 7 英寸:");
	scanf("%d %d", &foot, &inch);
	printf("身高是 %f 米。\n", ((foot + inch / 12) * 0.3048));

	return 0;

}

int timeDifference(void) {

	int hour1, minute1;
	int hour2, minute2;

	printf("请输入两个时间，精确到分钟。小时和分钟用\":\"连接，两个时间用空格隔开，例如：5:7 6:8\n");
	scanf("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);

	if (hour1 >= hour2) {

		printf("%d:%d 和 %d:%d 之间相差 %d 分钟", hour1, minute1, hour2, minute2, ((hour1 - hour2 - 1) * 60 + (minute1 + 60 - minute2)));

	}
	else {

		printf("%d:%d 和 %d:%d 之间相差 %d 分钟", hour1, minute1, hour2, minute2, ((hour1 - hour2 - 1) * -60 + (minute1 + 60 - minute2)));

	}

	return 0;

}

int timeDifferenceTransMin(void) {

	int hour1, minute1;
	int hour2, minute2;

	printf("请输入两个时间，精确到分钟。小时和分钟用\":\"连接，两个时间用空格隔开，例如：5:7 6:8\n");
	scanf("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);

	int transMin1 = hour1 * 60 + minute1;
	int transMin2 = hour2 * 60 + minute2;
	int timeDiff = 0, timeDiffHour = 0, timeDiffMin = 0;

	if (transMin1 >= transMin2) {

		timeDiff = transMin1 - transMin2;

	}
	else {

		timeDiff = transMin2 - transMin1;

	}

	timeDiffHour = timeDiff / 60;
	timeDiffMin = timeDiff % 60;

	printf("%d:%d 和 %d:%d 之间相差 %d 分钟，即 %d 小时 %d 分钟。", hour1, minute1, hour2, minute2, timeDiff, timeDiffHour, timeDiffMin);

	return 0;

}

int smpTimeCount() {

	int hour1 = 0;
	int minute1 = 0;
	int hour2 = 0;

}

double average() {

	int a = 0, b = 0;

	printf("请输出两个整数，整数用空格隔开：");
	scanf("%d %d", &a, &b);

	int sum = a + b;
	double c = sum / 2.0;

	printf("%d 和 %d 的平均值是 %f。\n", a, b, c);

	return 0;

}

int meterSwitch() {

	int cm = 0;
	double swthweight = 30.478;

	printf("请输出长度，单位厘米：\n");
	scanf("%d", &cm);

	//(foot + inch / 12)*0.3048 = cm
	int foot = cm / 30.48;
	int inch = ((cm / 30.48) - foot) * 12;

	printf("对应的英尺和英寸分别为：%d %d", foot, inch);

	return 0;

}

int timeCount() {

	int startTime = 0;
	int lostMinute = 0;

	printf("请输入起始时间和流逝时间，用空格隔开：\n");
	scanf("%d %d", &startTime, &lostMinute);

	int hour = startTime / 100;
	int minute = startTime % 100;

	printf("%d %d\n", hour, minute);

	int endHour = (hour * 60 + minute + lostMinute) / 60;
	int endMinute = (hour * 60 + minute + lostMinute) % 60;

	printf("%d %d\n", endHour, endMinute);

	int endTime = endHour * 100 + endMinute;
	//(endHour + endMinute / 100) * 100 为啥会把10给抹去呢？

	printf("%d", endTime);

	return 0;

}

int against() {

	int count = 0;

	printf("请输入一个三位数：\n");
	scanf("%d", &count);

	int hundred = count / 100;
	int ten = count % 100 / 10;
	int individual = count % 10;

	printf("%d %d %d\n", hundred, ten, individual);

	int against = individual * 100 + ten * 10 + hundred;

	printf("%d", against);

	return 0;

}

int BCD() {

	

}