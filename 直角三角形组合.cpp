#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=10-i;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(j=1;j<=10-i;j++)/*���j�����Ҳ�����ѧ����*/  
		printf("*");
		printf("\n");
	}
 } 
