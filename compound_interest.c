#include <stdio.h>

double calculateAmount(double principal, double rate, int years)
{
    double amount = principal;
    int i;

    for (i = 1; i <= years; i++)
        amount = amount + (amount * rate / 100);

    return amount;
}

int main()
{
    double principal, rate, amount, interest;
    int years;

    printf("Enter principal, rate and years: ");
    scanf("%lf %lf %d", &principal, &rate, &years);

    amount = calculateAmount(principal, rate, years);
    interest = amount - principal;

    printf("Compound Interest = %.2lf\n", interest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}
