#include <stdio.h>

int main(){
   double x, y;
   printf("Enter first number: ");
   scanf("%lf",&x);
   printf("Enter second number: ");
   scanf("%lf",&y);
   double ans = x + y ;
   printf("a + b = %7.2lf\n",ans);
   return 0;
}
