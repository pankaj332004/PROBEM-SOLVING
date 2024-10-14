#include<stdio.h>
int sum(int n){
    if(n==1) return 1; //base case
    return n+sum(n-1);// recursive case
    // int fact=1;
    // for(int i=2;i<=n;i++){
    //     fact=fact*i;
    // }
    // return fact;
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;
}