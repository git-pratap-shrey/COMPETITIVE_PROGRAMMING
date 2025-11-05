#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    
    int count = num / 5;
    count += num/25;
    count += num/125;
    count += num/625;
    count += num/3125;
    count += num/15625;
    count += num/78125;
    count += num/390625;
    count += num/1953125;
    count += num/9765625;
    count += num/48828125;
    count += num/244140625;
// 78125
// 390625
// 1953125
// 9765625
// 48828125
// 244140625
// 1,22,07,03,125
// 6,10,35,15,625
// 30,51,75,78,125
// 1,52,58,78,90,625

    printf("%d",count);
    return 0;
}