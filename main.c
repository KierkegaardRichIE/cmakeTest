#include <stdio.h>

void swap(int *px,int *py){
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}
int strlen(char *s){
    int n;
    for (n = 0; *s != '\0';s++)
        n++;
    return n;
}
int main(){
    int a=10;
    int b=7;
    swap(&a,&b);
    printf("%d\t%d\n",a,b);
    printf("%d", strlen("hello, world"));
    return 0;
}