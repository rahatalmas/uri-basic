#include<stdio.h>
#include<math.h> 
int main()
{
    double A,B,C,R1,R2,d;
    scanf("%lf %lf %lf",&A, &B, &C);

   
     if (A==0 || (((B*B)-(4*A*C)))<0)
    {
        printf("Impossivel calcular\n");
    }

    else{
         d=((B*B)-(4*A*C));
         R1=((-B+d)/(2*A));
         R2=((-B-d)/(2*A));
         printf("R1 = %.5lf\n",R1);
         printf("R2 = %.5lf\n",R2);
        }
    return 0;
    
    
}