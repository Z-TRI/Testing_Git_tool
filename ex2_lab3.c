#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int n, x, i, j;
    int ele[11], temp, times=0;
    printf("enter your size array n: ");
    scanf("%d", &n);
    printf("enter your number x: ");
    scanf("%d", &x);

    srand(time(0));
    for (i=0; i<n; i++){
        ele[i]=(rand()%11);
    }
    printf("original array: ");
    for (i=0; i<n; i++){
        printf("%d\t", ele[i]);
    }
    printf("\n");

    for (i=0; i<n; i++){
    for (j=i+1; j<n; j++){
            if (ele[j]<ele[i]){
               temp=ele[i];
               ele[i]=ele[j];
               ele[j]=temp; 
            }
        }
    }
    printf("Ascending order: ");
    for (i=0; i<n; i++){
        printf("%d\t", ele[i]);
    }
    printf("\n");

    for (i=0; i<n; i++){
    for (j=i+1; j<n; j++){
            if (ele[j]>ele[i]){
               temp=ele[i];
               ele[i]=ele[j];
               ele[j]=temp; 
            }
        }
    }
    printf("Descending order: ");
    for (i=0; i<n; i++){
        printf("%d\t", ele[i]);
    }
    printf("\n");

    for (i=0; i<n; i++){
        if(ele[i]==x){
           times+= 1; 
        }
    }
    printf("number %d appearances in array is %d times", x, times);

    return 0;   
}