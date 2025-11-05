#include<stdio.h>
#include<math.h>

int main(){

    unsigned long long int pow10[19] = {
        1ULL, 10ULL, 100ULL, 1000ULL, 10000ULL,
        100000ULL, 1000000ULL, 10000000ULL, 100000000ULL, 1000000000ULL,
        10000000000ULL, 100000000000ULL, 1000000000000ULL, 10000000000000ULL,
        100000000000000ULL, 1000000000000000ULL, 10000000000000000ULL,
        100000000000000000ULL, 1000000000000000000ULL
    };
    unsigned long long int num;
    scanf("%llu", &num);

    unsigned long long int ans = 0;
    unsigned long long int temp;
    int i = 0;

    while(num/10 != 0){
        temp = num % 10;
        if(temp > 4){
            temp = 9 - temp;
        }

        ans += temp * pow10[i];
        num /= 10;
        i++;
    }
    
    if(num > 4 && num != 9){
            num = 9 - num;
    }
    ans += num * pow10[i];

    printf("%llu", ans);
    return 0;
}