#include<stdio.h>
void greeting(int n){
    if(n==0) return 1;
    printf("%d\n",n);
    return greeting(n-1);
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    greeting(n);
    return 0;
}