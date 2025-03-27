#include <stdio.h>
#include <stdlib.h>
char* exams[4]={"Assessment","Coursework","Midterm","End Of term"};

double GetAvg_math(){

    double math[4];
    double sum=0;

    printf("Enter Math results:\n");
    for(int i=0; i<4; i++){
        while(1){
        printf("%s:",exams[i]);
        scanf("%lf",&math[i]);
            if(math[i]>=0 &&math[i]<=100){
                break;
            }else{
            printf("Entered Invalid Input.\n");
            }
        }
    }
    for(int i=0; i<4; i++){
        sum=sum+math[i];
    }
    return sum/4;
}
double GetAvg_phy(){
    double phy[4];
    double sum=0;
    printf("Enter Physics results:\n");
    for(int i=0; i<4; i++){
        while(1){
        printf("%s:",exams[i]);
        scanf("%lf",&phy[i]);
            if(phy[i]>=0 &&phy[i]<=100){
                break;
            }else{
            printf("Entered Invalid Input.\n");
            }
        }
    }
    for(int i=0; i<4; i++){
        sum=sum+phy[i];
    }
    return sum/4;
}
double GetAvg_chem(){
    double chem[4];
    double sum=0;
    printf("Enter Math results:\n");
    for(int i=0; i<4; i++){
        while(1){
        printf("%s: ",exams[i]);
        scanf("%lf",&chem[i]);
            if(chem[i]>=0 &&chem[i]<=100){
                break;
            }else{
            printf("Entered Invalid Input.\n");
            }
        }
    }
    for(int i=0; i<4; i++){
        sum=sum+chem[i];
    }
    return sum/4;
}

int main()
{
    double avg_math = GetAvg_math();
    printf("\nMath avg: %.1lf%\n===============================\n",avg_math);

    double avg_phy = GetAvg_phy();
    printf("\nPhysics avg: %.1lf%\n===============================\n",avg_phy);

    double avg_chem = GetAvg_chem();
    printf("\nChemistry avg: %.1lf%\n===============================\n",avg_chem);

    double overall_avg = (avg_math+avg_phy+avg_chem)/3;
    printf("\nThe overall average: %.2lf%\n===============================\n",overall_avg);

    return 0;
}
