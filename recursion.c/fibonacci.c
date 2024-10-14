#include<stdio.h>
int fib(int n){
    if(n==1 || n==2) return 1;
    //else if(n==1) return 1;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("fibonacci=%d",fib(n));
    return 0;
}