#include <stdio.h>
#include "power.c"
#include "basicMath.c"


int main(){
printf("Please insert a real number:");
double x;
scanf("%lf",&x);

double ans1=0;
ans1= add(Exponent((int)x),Power(x,3));
ans1= sub(ans1,2);
printf("The value of f(x)=e^x+x^3-2=%.4f \n", ans1);

double ans2=0;
ans2 = add(mul(x,3),mul(Power(x,2),2));
printf("The value of f(x)=3x+2x^2=%.4f \n", ans2);

double ans3=0;
ans3 = sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("The value of f(x)=(4x^3)/5-2x=%.4f \n", ans3);

return 0;
} 