#include<stdio.h>
int t,p1,p2,max_p1=0,max_p2=0,sum_p1=0,sum_p2=0 ,diff=0;;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&p1);
		scanf("%d",&p2);
		sum_p1 = sum_p1 + p1;
		sum_p2 = sum_p2 + p2;	
			
		if(sum_p1>sum_p2)
		{
			diff = sum_p1-sum_p2;
			if(diff > max_p1)
			{
				max_p1 = diff;
			}
			printf("1 %d\n",diff);
		}
		else
		{
		
			diff = sum_p2-sum_p1;
			if(diff > max_p2)
			{
				max_p2 = diff;
			}
			printf("2 %d\n",diff);
		}
	}
	
	if(max_p1 > max_p2)
	{
		printf("1 %d",max_p1);
	}
	else
	{
		printf("2 %d",max_p2);
	}	
return 0;
}
