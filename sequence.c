#include <stdio.h>
int main()
{
	int i,n,p,c;
	printf("一共有几个数？");
	scanf("%d",&i);
	int array[i];
	printf("请依次输入这些数字");
	for(p=0;p<i;p++)
		scanf("%d",&array[p]);
	int max=array[0];
	p=1;
	n=i-1;
	int d;
	for(d=i;d>1;d--){
	while(p<i){
		if(array[p]>max)
			max=array[p];
		}
	c=array[n];
	array[n]=max;
	array[p]=c;
	p++;
	n--;
	}
	for(n=0;n<i;n++){
		printf("%d",array[n]);
	}
}
