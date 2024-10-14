#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){//only rightways call
        rightways =rightways+ maze(cr,cc+1,er,ec);
    }
    if(cc==ec){//only downways calls
        downways = downways+ maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter th no of rows of the maze:");
    scanf("%d",&n);
    int m;
    printf("Enter the no of columns of the maze:");
    scanf("%d",&m);
    int noofways= maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}