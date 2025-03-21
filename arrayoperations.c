#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    //prints all elements of an array
    int traverse[3]={1,2,3};
    int i=0;

    for (i=0;i<3;i++){
        printf("the element is:%d\n",traverse[i]);
    }


//insert a new element into an array
    int insert[3]={4,5};
int i=0;
printf("before insertion\n");
for (i=0;i<3;i++){

    printf("%d\n",insert[i]);
}
insert[2]=6;
printf("after insertion\n");
for(i=0;i<3;i++){

    printf("%d\n",insert[i]);
}
*/
//searching for an element
int search[3]={7,8,9};

int i;
int target=9;
for (i=0;i<3;i++){
        printf("%d\n",search[i]);
}
for(i=0;i<3;i++){
    if (search[i]==target){
            printf("index is %d\n",i);
break;
    }
}
    return 0;
}

