#include <stdio.h>

#define MOD 1000000007
// #define MOD 10

// int calculate(int n){
//     int power = 1;
//     while(n!=0){
//         power = ((power % MOD)*2) % MOD;
//         n--;
//     }
//     return power;
// }

int faster(int exp){
    long long int ans = 1LL * 1;
    long long int base = 1LL * 2;

    while(exp!=0){
        if(exp % 2 == 1){
            ans *= base;
            ans %= MOD;
        }
        base = (base*base) % MOD;
        exp /=2;
    }
    return (int)ans;
}

int main(){
    int number;
    scanf("%d", &number);

    int ans = faster(number);
    printf("%d", ans);

    return 0;
}