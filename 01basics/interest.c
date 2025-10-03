#include <stdio.h>
#include <math.h>

int main() {
    int principalAmt;
    printf("Enter the principal amount: ");
    scanf("%d", &principalAmt);

    int rate;
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);

    float time;
    printf("Enter the time duration");
    scanf("%f", &time);

    float simpleInterest = (principalAmt*rate*time)/100;

    printf("The simple interest is: %f", simpleInterest);

    float sumRate = 1+(rate/100);

    float powerRaised = pow(sumRate, time);

    float compoundInterest = principalAmt*powerRaised - principalAmt;

    printf("The compound interest is: %f", compoundInterest);

    return 0;
}