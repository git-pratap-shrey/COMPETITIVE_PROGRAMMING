#include <stdio.h>
#include <limits.h>

int main(){
    char prev = '\0';
    char curr = getchar();
    int count = 1;
    int max = INT_MIN;

    while(curr != '\n'){
        if(curr != prev){
            count = 1;
        }
        else{
            count++;
        }
        if(count>max){
            max = count;
        }
        prev = curr;
        curr = getchar();
    }
    printf("%d",max);
}