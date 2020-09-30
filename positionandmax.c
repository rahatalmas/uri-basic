#include <stdio.h>
int main() {

 int arr[100];
 int i,pos=1;
 int max=arr[0];
 for(i=0;i<10;i++)
 {
     scanf("%d",&arr[i]);
          if(arr[i]>arr[0])
     {
         pos++;
         max=arr[i];
     }
 }
printf("%d\n",max);
printf("%d\n",pos);
 return 0;
}
