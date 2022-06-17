#include <stdio.h>

int main()
{
int T,X,Y;

scanf("%d",&T);

for(int i=1;i<=T;i++)
{
    scanf("%d%d",&X,&Y);
    
    if(X==Y)
    printf("0\n");
    else if(X>Y)
    printf("%d\n",X-Y);
    else
    printf("0\n");
}

	return 0;
}

