#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void) {




}

int plus(x, y){

	int a, b;

	printf("����������������");
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);

}

	int foot = 0;
	int inch = 0;

	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5 7\"��ʾ 5 Ӣ�� 7 Ӣ��:");
	scanf("%d %d", &foot, &inch);
	printf("����� %f �ס�\n", ((foot + inch / 12) * 0.3048));

	return 0;

}

int timeDifference(void) {

	int hour1, minute1;
	int hour2, minute2;

	printf("����������ʱ�䣬��ȷ�����ӡ�Сʱ�ͷ�����\":\"���ӣ�����ʱ���ÿո���������磺5:7 6:8\n");
	scanf("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);

	if (hour1 >= hour2) {

		printf("%d:%d �� %d:%d ֮����� %d ����", hour1, minute1, hour2, minute2, ((hour1 - hour2 - 1) * 60 + (minute1 + 60 - minute2)));

	}
	else {

		printf("%d:%d �� %d:%d ֮����� %d ����", hour1, minute1, hour2, minute2, ((hour1 - hour2 - 1) * -60 + (minute1 + 60 - minute2)));

	}

	return 0;

}

int timeDifferenceTransMin(void) {

	int hour1, minute1;
	int hour2, minute2;

	printf("����������ʱ�䣬��ȷ�����ӡ�Сʱ�ͷ�����\":\"���ӣ�����ʱ���ÿո���������磺5:7 6:8\n");
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

	printf("%d:%d �� %d:%d ֮����� %d ���ӣ��� %d Сʱ %d ���ӡ�", hour1, minute1, hour2, minute2, timeDiff, timeDiffHour, timeDiffMin);

	return 0;

}

int smpTimeCount() {

	int hour1 = 0;
	int minute1 = 0;
	int hour2 = 0;

}

double average() {

	int a = 0, b = 0;

	printf("��������������������ÿո������");
	scanf("%d %d", &a, &b);

	int sum = a + b;
	double c = sum / 2.0;

	printf("%d �� %d ��ƽ��ֵ�� %f��\n", a, b, c);

	return 0;

}

int meterSwitch() {

	int cm = 0;
	double swthweight = 30.478;

	printf("��������ȣ���λ���ף�\n");
	scanf("%d", &cm);

	//(foot + inch / 12)*0.3048 = cm
	int foot = cm / 30.48;
	int inch = ((cm / 30.48) - foot) * 12;

	printf("��Ӧ��Ӣ�ߺ�Ӣ��ֱ�Ϊ��%d %d", foot, inch);

	return 0;

}

int timeCount() {

	int startTime = 0;
	int lostMinute = 0;

	printf("��������ʼʱ�������ʱ�䣬�ÿո������\n");
	scanf("%d %d", &startTime, &lostMinute);

	int hour = startTime / 100;
	int minute = startTime % 100;

	printf("%d %d\n", hour, minute);

	int endHour = (hour * 60 + minute + lostMinute) / 60;
	int endMinute = (hour * 60 + minute + lostMinute) % 60;

	printf("%d %d\n", endHour, endMinute);

	int endTime = endHour * 100 + endMinute;
	//(endHour + endMinute / 100) * 100 Ϊɶ���10��Ĩȥ�أ�

	printf("%d", endTime);

	return 0;

}

int against() {

	int count = 0;

	printf("������һ����λ����\n");
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