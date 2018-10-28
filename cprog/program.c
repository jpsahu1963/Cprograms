#include<stdio.h>

int inst(int n)
	{	int flag=1,rem;
		int temp;
		
		temp=n;
		
		while(flag)
		{
		
			while(n>0)
				{
					rem = n%10;
					printf("rem : %d \n",rem);
					if(rem % 4 == 0 || rem % 7 ==0 )
					{
						flag=1;
						break;
					}
					else
					{
						flag = 0;
					}
					
					n=n/10;
					
				}
				temp++;
				n = temp;
		}
		return temp;
			
	}




int main()
{
	int t,num;
	scanf("%d",&t);
	
	num=inst(t);
	
	printf("%d",num);
	return 0;
	
	
	
	
	
	
}
