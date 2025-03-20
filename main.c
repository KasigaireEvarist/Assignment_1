#include <stdio.h>
#include <stdlib.h>

int ass, coursework, midterm, endofterm;

int math(){
    printf("\t Math \n");
    printf("Enter marks got the Math Assignment: ");
    scanf("%d",&ass);
    printf("Enter marks got the Math course work: ");
    scanf("%d",&coursework);
    printf("Enter marks got the Math midterm: ");
    scanf("%d",&midterm);
    printf("Enter marks got the Math end of term: ");
    scanf("%d",&endofterm);

    return (ass+coursework+midterm+endofterm)/4;
}
int chem(){
    printf("\t Chemistry \n");
    printf("Enter marks got the Chemistry Assignment: ");
    scanf("%d",&ass);
    printf("Enter marks got the Chemistry course work: ");
    scanf("%d",&coursework);
    printf("Enter marks got the Chemistry midterm: ");
    scanf("%d",&midterm);
    printf("Enter marks got the Chemistry end of term: ");
    scanf("%d",&endofterm);

    return (ass+coursework+midterm+endofterm)/4;
}
int phy(){
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
    int mathavg = math();
    printf("Average mark is %d\n===============================================\n",mathavg);
    int phyavg = phy();
    printf("Average mark is %d\n===============================================\n",phyavg);
    int chemavg = chem();
    printf("Average mark is %d\n===============================================\n",chemavg);

    return 0;
}
