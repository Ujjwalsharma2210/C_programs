#include<stdio.h>

void sort(int n, int* ptr){
    int i, j, t;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(*(ptr+j)>*(ptr+i)){
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    printf("Sorted array is:\n");

    for(i=0; i<n; i++){
        printf("%d\n", *(ptr+i));
    }
}

void main(){
    int i, n, a[20];
    printf("Enter limit:\n");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    sort(n, a);
}