#include<stdio.h>
void greeting(int n){
    if(n==0) return ; //base case
    printf("%d\n",n);//code
    greeting(n-1);//recursive case
    printf("%d\n",n);//code
    return ;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    greeting(n);
    return 0;
}