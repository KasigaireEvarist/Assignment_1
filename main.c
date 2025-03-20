#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,x;
    printf("Enter the number of; \n");
    printf("1.Domestic animals: ");
    scanf("%d",&n);
    printf("2.Wild animals: ");
    scanf("%d",&x);

    char domestic[n][50];
    printf("Enter the Domestic animals: \n");
    for(int i=0 ; i<n; i++){
        printf("%d. ",i+1);
        scanf("%s",&domestic[i]);
    }
    char wild[x][50];
    printf("Enter the Wild animals: \n");
    for(int i=0 ; i<x; i++){
        printf("%d. ",i+1);
        scanf("%s",&wild[i]);
    }

    char mergedarray[n+x][50];

    for(int i = 0; i<n ;i++){
        strcpy(mergedarray[i],domestic[i]);
    }
    for(int i = 0; i<x ;i++){
        strcpy(mergedarray[n+i],wild[i]);
    }

    for(int i = 0; i<n+x ;i++){
        printf("%s\t",mergedarray[i]);
    }

    return 0;
}
