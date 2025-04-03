#include <stdio.h>
#include <stdlib.h>
char* exams[4]={"Assessment","Coursework","Midterm","End Of term"};
double GetAvg(char*subject){//average function with subjects as the parameter
    double arr[4];//array to store user entries
    double sum=0;//initialisation of the sum
    printf("Enter %s results:\n",subject);//tells user to enter results
    for(int i=0; i<4; i++){//loop to iterate through the array storing user entries
        while(1){//checks the user input for validity
        printf("%s:",exams[i]);//prints out what the user entered
        if(!scanf("%lf",&arr[i])){
            scanf("%*[^\n]");//frees space to enable new user entry
            printf("Invalid input\n");
        }else if( arr[i]>=0 &&arr[i]<=100){//checks if input is between 0 and 100
                break;//if it is right it breaks
            }else{
            printf("Entered Invalid Input.\n");
            }
        }
    }
    for(int i=0; i<4; i++){//adds the users input stored in the array
        sum=sum+arr[i];
    }
    return sum/4;
}
int main(){
    char subject[][10] = {"Math","Physics","Chemistry"};//array storing subjects
    double avg,overallAvg = 0;
    for(int i = 0; i<3; i++){
        avg =GetAvg(subject[i]);
        overallAvg =overallAvg+avg;
        printf("\n%s avg: %.1lf%\n===============================\n",subject[i],avg);
    }
    double overall_avg =overallAvg /3;
    printf("\nThe overall average: %.2lf%\n===============================\n",overall_avg);
    return 0;
}
