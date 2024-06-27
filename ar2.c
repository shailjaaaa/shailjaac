//3 students, 5 subjects,total,per,grade by array
#include<stdio.h>
int main()
{
	int i,j;
	int x=3,y=5;
	int sum=0,grade;
	float per=0.0;
	printf("Total student:%d\n",x);
	int stu[x];
	int sub[y];
	
	for(i=0;i<x;i++)
	{
		sum=0;
		per=0.0;
	printf("Enter roll number %d:",i);
	scanf("%d",&stu[i]);
		for(j=0;j<y;j++)
		{
			printf("Enter subject marks %d:",i);
			scanf("%d",&sub[j]);
			sum+=sub[j];
		}
	    printf("Total marks:%d\n",sum);
		per=sum/5;
	    printf("Percentage:%f\n",per);
		if(80<per && per<100)
		{
			printf("Grade A\n");
		}
		else if(60<per && per<80)
		{
			printf("Grade B\n");
		}
		else if(40<per && per<60)
			{
			printf("Grade c\n");
		}
		else 
			{
			printf("Fail\n");
		}
	}
	return 0;
	}