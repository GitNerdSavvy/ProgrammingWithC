// WAP to verify the eligibility of a student to get admission in college

#include <stdio.h>
int main()
{
    int maths, chem, phy;
    printf("Enter the marks of maths, chemistry and physics: ");
    scanf("%d%d%d", &maths, &chem, &phy);
    int total = maths + phy + chem;
    if (maths >= 65 && chem >= 50 && phy >= 55 && total >= 190)
    {

        printf("The Student is Eligible to get Admission");
    }
    else if (maths + phy >= 140)
    {
        printf("The Student is Eligible to get Admission");
    }
    else
    {
        printf("The Student is not Eligible to get Admission");
    }

    return 0;
}