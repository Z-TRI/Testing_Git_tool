#include <stdio.h>
int main(){
    float ele[50], max, min, ave, sum=0;
	int size, i;
    printf("enter your value size: ");
    scanf("%d", &size);
    for (i=0; i<size; i++){
        printf("enter value of element: ");
        scanf("%f", &ele[i]);
    }
    max= ele[0];
    min= ele[0];
    for (i=0; i<size; i++){
        if (ele[i]>max){
            max= ele[i];
        }
    }
    for (i=0; i<size; i++){
        if (min>ele[i]){
            min= ele[i];
        }
    }
    printf("Max = %.2f and Min = %.2f\n", max, min);
    for (i=0; i<size; i++){
        sum+= ele[i];
    }
    printf("Average = %.2f\n ", sum/size);
    printf("forward: ");
    for (i=0; i<size; i++){
        printf("%.2f\t", ele[i]);
    }
    printf("\n");
    printf("backward: ");
    for (i=(size-1); i>=0; i--){
        printf("%.2f\t", ele[i]);
    }
return 0;
}