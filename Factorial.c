#include<stdio.h>

int main(){

    int n;
    printf("enter: n");
    scanf("%d/n", &n);

    int factorial=1;
    for(int i=1 ; i<=n; i++) {
        factorial=  factorial*i;
    }
    printf("%d",factorial);


}
