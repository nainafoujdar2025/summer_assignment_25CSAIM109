#include<stdio.h>
int main(){
    int a[10][10],r,c,i,j,sum;

    printf("Enter no. of rows and columns:");
    scanf("%d%d",&r,&c);
     
    printf("Enter elements of matrix A:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
        sum+=a[i][j];}
        printf("%d\n",sum);
    }
    return 0;
}