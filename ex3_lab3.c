#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int i, j, k, l, m, n;
   
	int temp;
    printf("enter value M rows: ");
    scanf("%d", &m);
    printf("enter value N coloumns: ");
    scanf("%d", &n);
    int a[m][n];

    srand(time(NULL));
    for (i=0; i<m; i++){
    for (j=0; j<n; j++){
        a[i][j]=(rand()%101);
    }
    }

    printf("original matrix: \n");
    for (i=0; i<m; i++){
    for (j=0; j<n; j++){
        printf("%d\t", a[i][j]);
    }
    printf("\n");
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
        for (k=j+1; k<n; k++)
            if (a[i][j]>a[i][k]){
               temp=a[i][j];
               a[i][j]=a[i][k];
               a[i][k]=temp; 
            }
        }
    }
    printf("Ascending order: \n");
    for (i=0; i<m; i++){
    for (j=0; j<n; j++){
        printf("%d\t", a[i][j]);
    }
    printf("\n");
    }
    printf("\n");

    for (j=0; j<n; j++){
        for (i=0; i<m; i++){
        for (l=i+1; l<m; l++)
            if (a[i][j]<a[l][j]){
               temp=a[i][j];
               a[i][j]=a[l][j];
               a[l][j]=temp; 
            }
        }
    }
    printf("Descending order: \n");
    for (i=0; i<m; i++){
    for (j=0; j<n; j++){
        printf("%d\t", a[i][j]);
    }
    printf("\n");
    }

    return 0;
}