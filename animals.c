#include <stdio.h>
#include <stdlib.h>

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
