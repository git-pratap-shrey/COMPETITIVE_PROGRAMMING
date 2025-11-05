#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 0;
    int count = 0;
    while(x != 1){
        count++;
        scanf("%d", &x);
    }

    count = abs(count-13);
    int ans = count / 5;
    if(count % 5 <= 3){
        ans += count % 5;
    }
    else{
        ans += 2;
    }
    printf("%d", ans);
    return 0;
}

