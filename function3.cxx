#include<stdio.h>

int cube(int no){
    int answer;
    answer=no*no*no;
    return (answer);
    
}
    int main(){
        int cb,n;
        scanf("%d", &n);
        cb=cube(n);
        printf("cube=%d\n", cb);
        return 0;
    }