#include <stdio.h>

unsigned int input_int(){
    unsigned int x = 0;
    int c = getchar();
    while (c < '0' || c > '9') {  
        c = getchar();
    }
    while (c >= '0' && c <= '9') { 
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x;

}

int main(){
    unsigned int n = input_int();
    unsigned int prev = input_int();
    unsigned int curr;
    n--;

    long long int steps = 1LL*0;

    while(n != 0){
        curr = input_int();
        if(curr < prev){
            steps += 1LL*(prev-curr);
            curr = prev;
        }
        prev = curr;
        n--;
    }

    printf("%lld", steps);
    return 0;
}