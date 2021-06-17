#include <stdio.h>
int main()
{
	int a,b,c,num=0,p,n0,n1;
	scanf("%d%d%d",&n0,&n1,&a);
	for(c=a,b=2;c!=1;){
	if(c%b==0){
		
		c=c/b;
		num=num+b;}
	else
		b++;
printf("%d",num);
	}
	return 0;
	}
