#include <stdio.h>
int main()
{
	typedef struct{
		char name[10];
		int NO;
		int score;
	}STU;
	STU a[5];
	printf("请依次输入5个学生的姓名、学号、成绩");
	int i;
	for(i=0;i<5;i++)
		scanf("%s %d %d",&a[i].name,&a[i].NO,&a[i].score);
	FILE *fp;
	fp=fopen("file.dat","rb+");
	for(i=0;i<5;i++)
		fwrite(&a[i],18,5,fp);
	fclose(fp);
}

