#include <stdio.h>
 
int fast_read() {   // no inline
    int n = 0;
    char c = getchar();
    while(c < '0' || c > '9') c = getchar();
    while(c >= '0' && c <= '9') {
        n = n * 10 + (c - '0');
        c = getchar();
    }
    return n;
}
 
int main() {
    int n = fast_read();
 
    long long sum = 1LL * n * (n + 1) / 2;
 
    for(int i = 1; i < n; i++) {
        int temp = fast_read();
        sum -= temp;
    }
 
    printf("%lld\n", sum);
    return 0;
}