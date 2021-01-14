#include<stdio.h>

int main()
{
    int birthdate, birthmonth, birthyear, curdate, curmonth, curyear, r1 = 0, r2 = 0, r3 = 0;
    printf("\nLet me know about your birthday :>");
    printf("\nEnter Birthday day: ");
    scanf("%d", &birthdate);
    printf("\n\nEnter Birthday Month: ");
    scanf("%d", &birthmonth);
    printf("\nEnter Birthday Year: ");
    scanf("%d", &birthyear);
    printf("\nEnter Current Day: ");
    scanf("%d", &curdate);
    printf("\nEnter Current Month: ");
    scanf("%d", &curmonth);
    printf("\nEnter Current Year: ");
    scanf("%d", &curyear);

    if((birthdate < 1 || birthdate > 31) || (curdate < 1 || curdate > 31) || (birthmonth < 1 || birthmonth > 12) || (curmonth < 1 || curmonth > 12) || (birthyear < 0 && curyear <0))
    {
        printf("\nInvalid date!, Please try agian");
    }
    else
    {
        r3 = curyear - birthyear;
        if(curdate >= birthdate)
        {
            r1 = curdate - birthdate;
        }
        else
        {
            curmonth = curmonth - 1;
            curdate = curdate + 30;
            r1 = curdate - birthdate;
        }
        if(curmonth >= birthmonth)
        {
            r1 = curmonth - birthmonth;
        }
        else
        {
            r3 = r3 - 1;
            curmonth = curmonth + 12;
            r2 = curmonth - birthmonth;
        }
    }
    printf("\n\n\nYour current age is %d day %d month and %d year", r1, r2, r3);
    return 0;
}