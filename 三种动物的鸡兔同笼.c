#include <stdio.h>
main(){
	int a,b,c,n,m;
	scanf("%d%d",&n,&m);
	for(a=0;a<n;a++)
		
		for(b=0;b<n;b++)
			for(c=0;c<n;c++)
				if(a+b+c==n&&2*a+4*b+c*8==m)
					printf("%d %d %d\n",a,b,c);
					return 0;
				}
