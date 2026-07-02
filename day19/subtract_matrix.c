#include<stdio.h>
int main(){
    int i,j,n1,n2;
    int a[n1][n2],b[n1][n2],c[n1][n2];
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&n1,&n2);
    printf("enter the elements of first matrix: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("the difference of the matrices is: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}