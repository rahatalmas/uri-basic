#include <stdio.h>
 
int main() {
 
    int x,y;
    int min,max;
    int i,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    for(i=min+1;i<max;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
       
    }
     printf("%d\n",sum);
    return 0;
}