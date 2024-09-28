#include <stdio.h>
int main()
{
	    float income, tax = 0, netIncome;

    printf("Enter your total income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0; 
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05; 
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20; 
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30; 
    }

    netIncome = income - tax;

    printf("Total Income: %.2f\n", income);
    printf("Tax Amount: %.2f\n", tax);
    printf("Net Income after Tax: %.2f\n", netIncome);

    return 0;
}
