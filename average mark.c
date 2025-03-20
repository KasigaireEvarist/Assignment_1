#include <stdio.h>
#include <stdlib.h>

double ass, coursework, midterm, endofterm;

double math(){
    printf("\t Math \n");
    printf("Enter marks got the Math Assignment: ");
    scanf("%lf",&ass);
    printf("Enter marks got the Math course work: ");
    scanf("%lf",&coursework);
    printf("Enter marks got the Math midterm: ");
    scanf("%lf",&midterm);
    printf("Enter marks got the Math end of term: ");
    scanf("%lf",&endofterm);

    return (ass+coursework+midterm+endofterm)/4;
}
double chem(){
    printf("\t Chemistry \n");
    printf("Enter marks got the Chemistry Assignment: ");
    scanf("%lf",&ass);
    printf("Enter marks got the Chemistry course work: ");
    scanf("%lf",&coursework);
    printf("Enter marks got the Chemistry midterm: ");
    scanf("%lf",&midterm);
    printf("Enter marks got the Chemistry end of term: ");
    scanf("%lf",&endofterm);

    return (ass+coursework+midterm+endofterm)/4;
}
double phy(){
    printf("\t Physics \n");
    printf("Enter marks got the Physics Assignment: ");
    scanf("%d",&ass);
    printf("Enter marks got the Physics course work: ");
    scanf("%d",&coursework);
    printf("Enter marks got the Physics midterm: ");
    scanf("%d",&midterm);
    printf("Enter marks got the Physics end of term: ");
    scanf("%d",&endofterm);

    return (ass+coursework+midterm+endofterm)/4;
}

int main()
{
    double mathavg = math();
    printf("Average mark is %.1lf\n===============================================\n",mathavg);
    double phyavg = phy();
    printf("Average mark is %.1lf\n===============================================\n",phyavg);
    double chemavg = chem();
    printf("Average mark is %.1lf\n===============================================\n",chemavg);
    double overallAverage = (phyavg+mathavg+chemavg)/3;
    printf("The overall average in all subjects is %.2lf",overallAverage);

    return 0;
}
