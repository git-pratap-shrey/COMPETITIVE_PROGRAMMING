#include <stdio.h>

void main(){

    int n;
    scanf("%d", &n);

    if (n == 2 || n == 3){
        printf("NO SOLUTION");
        return;
    }
    
    for(int i = 2; i <= n; i+=2){
        printf("%d ", i);
    }
    for(int i = 1; i <= n; i+=2){
        printf("%d ", i);
    }
}