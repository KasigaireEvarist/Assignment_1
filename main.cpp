#include <iostream>



int main(){
/*float phy[4],chem[4],mtc[4];
float phy_avg,  chem_avg,  mtc_avg , overall_avg;
int i;
printf("enter marks for phy(assignment,coursework,midterm,endterm)\n");
for (i=0;i<4;i++){
    scanf("%f",&phy[i]);
}
printf("enter marks for chem(assignment,coursework,midterm,endterm)\n");
for (i=0;i<4;i++){
    scanf("%f",&chem[i]);
}
printf("enter marks for mtc(assignment,coursework,midterm,endterm)\n");
for (i=0;i<4;i++){
    scanf("%f",&mtc[i]);
}
phy_avg=(phy[0]+phy[1]+phy[2]+phy[3])/4;
chem_avg=(chem[0]+chem[1]+chem[2]+chem[3])/4;
mtc_avg=(mtc[0]+mtc[1]+mtc[2]+mtc[3])/4;

overall_avg=( phy_avg+ chem_avg+  mtc_avg )/3;
printf("\naverage marks\n");
printf("physics%.2f\n",phy_avg);
printf("chemistry%.2f\n",chem_avg);
printf("mathematics%.2f\n",mtc_avg);
printf("overall average%.2f\n",overall_avg);*/


int N,x, i;
printf("enter number of domestic animals\n");
scanf("%d",&N);
char domestic[N][50];
printf("enter names of domestic animals\n");
for(i=0;i<N;i++){
    scanf("%s",domestic[i]);
}
printf("enter number of wild animals\n");
scanf("%d",&x);
char wild[N][50];
printf("enter names of wild animals\n");
for(i=0;i<N;i++){
    scanf("%s",wild[i]);
}
printf("\nlist of all animals\n");
    for(i=0;i<N;i++){
        printf("%s\n",domestic[i]);
    }
    for(i=0;i<N;i++){
        printf("%s\n",wild[i]);
    }
    return 0;
}
