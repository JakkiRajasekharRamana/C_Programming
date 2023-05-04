#include <stdio.h>

int main()
{
    float P,r,t;
    printf("Enter Principle value,intrest rate,time:");
    scanf("%f%f%f",&P,&r,&t);
    printf("%f",P*(1+r*t));
    return 0;
}
