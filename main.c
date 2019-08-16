#include <stdio.h>

void swap(int *px,int *py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
int main(){
    int a=10;
    int b=7;
    swap(&a,&b);
    printf("%d\t%d",a,b);
    return 0;
}