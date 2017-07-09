#include <stdio.h>
void swap(int array_update[]);
int main()
{
	int array[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
	swap (array);
}
void swap(int array_update[])
{
	int c,i;;
	for(i=0;i<5;i++){
		c=array_update[i];
		array_update[i]=array_update[9-i];
		array_update[9-i]=c;}
	for(i=0;i<10;i++)
		printf("%d\n",array_update[i]);
}
