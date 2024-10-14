#include<stdio.h>
int powerlog(int a,int b){
    if(b==0) return 1;
    //if(b==1) return a;
    int n= powerlog(a,b/2);
    if(b%2==0) return n*n;
    else return n*n*a;
}

int main(){
    int a;
    printf("enter the number a:");
    scanf("%d",&a);
    int b;
    printf("enter the number b:");
    scanf("%d",&b);
    printf("%d",powerlog(a,b));
    return 0;
}