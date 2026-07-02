#include<stdio.h>
int main(){
    int i,j,n1,n2;
    int a[n1][n2];
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&n1,&n2);
    printf("enter the elements of first matrix: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("the transpose of the matrix is: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
