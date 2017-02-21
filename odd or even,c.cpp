#include<stdio.h>
int main()
{
int T,X;
scanf("%d",&T);
while(T--)
{
scanf("%d",&X);
if(X<0 && X%2==0)
{
printf("EVEN NEGATIVE\n");
}
else if(X>0 && X%2==0)
{
printf("EVEN POSITIVE\n");
}
else if(X<0 && X%2!=0)
{
printf("ODD NEGATIVE\n");
}
else if(X>0 && X%2!=0)
{
printf("ODD POSITIVE\n");
}
else
{
printf("NULL\n");
}
}
return 0;
}
