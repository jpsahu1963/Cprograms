#include<stdio.h>
#include<malloc.h>
#include<conio.h>
main()
{int *p,n,i;
printf("%d",&n);
scanf("%d",&n);
p=(int*) malloc (n*sizeof (int *));
printf("enter element");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);

}
for(i=0;i<n;i++)
{
printf("%d",p[i]);

}
return 0;
}
