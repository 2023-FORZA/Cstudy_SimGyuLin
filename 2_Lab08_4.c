#include <stdio.h>

int check_year(int year) {
	if (year < 1 || year>9999) return 1;
	else return 0;
}

int check_month(int month) {
	if (month < 1 || month>12) return 1;
	else return 0;
}

int check_day(int day) {
	if (day < 1 || day >31) return 1;
	else return 0;
}

int cal_year(int year) {
	int temp = 0;
	int i;

	temp = (year - 1) * 365;

	for (i = 1; i < year; i++) {
		if ((i % 4) == 0) temp++;
		if ((i % 100) == 0) temp--;
		if ((i % 400) == 0)temp++;
	}
	return temp;

}

int cal_month(int month, int year) {
	int temp;
	int mon_day[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };

	temp = mon_day[month - 1];
	if (month > 2 && ((year % 4) == 0 && (year % 100 != 0) || (year % 400) == 0)) {
		temp++;
	}
	return temp;
}

int main() {
	int today_year, today_month, today_day;
	int d_year, d_month, d_day;
	int cal_today = 0, cal_d = 0;


	scanf("%d %d %d %d %d %d", &today_year, &today_month, &today_day, &d_year, &d_month, &d_day);

	if (check_year(today_year)) return 0;
	if (check_year(d_year)) return 0;
	if (check_month(today_month)) return 0;
	if (check_month(d_month)) return 0;
	if (today_month == 2 && today_day == 29) {
		printf("today 2.29\n");
		return 0;
	}
	if (check_day(today_day)) return 0;
	if (check_day(d_day)) return 0;

	cal_today = cal_year(today_year) + cal_month(today_month, today_year) + today_day;
	cal_d = cal_year(d_year) + cal_month(d_month, d_year) + d_day;

	if (cal_d < cal_today) return 0;
	if ((d_year - today_year > 1000) || ((d_year - today_year) == 1000 && d_month > today_month) || ((d_year - today_year) == 1000 && (d_month == today_month) && d_day >= today_day)) {
		printf("gg");
		return 0;
	}
	printf("D-%d", cal_d - cal_today);

	return 0;
}