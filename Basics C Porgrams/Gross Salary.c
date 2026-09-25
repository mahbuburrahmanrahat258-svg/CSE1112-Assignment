#include <stdio.h>

int main()
{
    float bS, hR, mA, gS;
    //basicSalary, houseRent, medicalAllowance, grossSalary;

    printf("Enter bS,hR,mA: ");
    scanf("%f %f %f", &bS,&hR,&mA);



    gS = bS + hR + mA ;

    printf("Gross Salary = %.2f", gS);

    return 0;
}
