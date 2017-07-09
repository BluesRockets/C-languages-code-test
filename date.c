#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
int ayear;
int daysofmonth(int amonth);
int main()
{
	struct date today;
	struct date tmorrow;
	printf("请输入今天的日期（day/month/year)");
	scanf("%d %d %d",&today.day , &today.month , &today.year);
	ayear=today.year;
	if(today.day != daysofmonth(today.month)){
		tmorrow.day=today.day+1;
		tmorrow.month=today.month;
		tmorrow.year=today.year;
	}
	else if(today.month == 12&&today.day==daysofmonth(today.month)){
		tmorrow.day=1;
		tmorrow.month=1;
		tmorrow.year=today.year+1;
	}
	else{
		tmorrow.day=1;
		tmorrow.month=today.month+1;
		tmorrow.year=today.year;
	}
	printf("明天的日期是%d/%d/%d",tmorrow.day,tmorrow.month,tmorrow.year);
	return 0;
}
int daysofmonth(int amonth)
{
	int days[12]={31,27,31,30,31,30,31,31,30,31,30,31};
	if(ayear%4 == 0){
		days[1]=28;}
	else;
	return days[amonth-1];
}
