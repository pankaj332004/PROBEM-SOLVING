#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);
    printf("power=%d",power(a,b));
    return 0;
}