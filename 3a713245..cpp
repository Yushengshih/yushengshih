#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n ,a ;
	printf("想知道哪裡到哪裡範圍的質數"); 
	scanf("%d",&a);
	   for(int m=2;m<=a;m++)
{
	 n = 0;
    for(int j=1;j<=a;j++) 
        if(m%j==0)
            n++;
            if(n==2)
		        printf("%d\t",m);
}
    printf("\n");
    system("pause");
    return 0;
}

