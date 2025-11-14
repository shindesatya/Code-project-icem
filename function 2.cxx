#include<stdio.h>
int square(int no){
    int result;
    result=no*no;
    return (result);
}

    int main(){
        int sq,n;
        scanf("%d", &n);
        sq=square(n);
        printf("\n sum is = %d", sq);
        return 0;
    }