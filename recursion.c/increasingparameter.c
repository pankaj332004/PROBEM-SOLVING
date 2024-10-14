//parameterised way
#include<stdio.h>
void inc(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    inc(x+1,n);
    return ;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    inc(1,n);
    return 0;
}