#include "myMath.h"
#define E 2.718281828

//power(x,y) return (x^y)
double Power(double x, int y)
{
    double ans = 1;
    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            ans *= x;
        }
    }
    if (y < 0)
    {
        y = ((-1) * y);
        for (int i = 0; i < y; i++)
        {
            ans *= x;
        }
        ans = 1 / ans;
    }

    
    return ans;
}

// exponent(x) return (e^x)
double Exponent(int x)
{
    return Power(E, x);
}
