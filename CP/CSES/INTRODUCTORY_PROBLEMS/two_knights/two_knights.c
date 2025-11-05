// #include <stdio.h>
// #include <stdbool.h>

// typedef struct point{
//     int x;
//     int y;
// }point;

// bool exists(point A, int n){
//     if(A.x < 0 || A.y < 0){
//         return false;
//     }
//     if(A.x >= n || A.y >= n){
//         return false;
//     }
//     return true;
// }

// int attacks(point A, int n){
//     int k = 0;
//     point B;

//     B.y = A.y-2;
//     B.x = A.x+1;
//     if(exists(B, n)){
//         k++;
//     }

//     B.y = A.y-2;
//     B.x = A.x-1;
//     if(exists(B, n)){
//         k++;
//     }

//     B.y = A.y-1;
//     B.x = A.x+2;
//     if(exists(B, n)){
//         k++;
//     }

//     B.y = A.y-1;
//     B.x = A.x-2;
//     if(exists(B, n)){
//         k++;
//     }
//     return k;
// }

// long long int calculate(int attack, int n){
//     //n*n C 2 - attack
//     int m = n*n;

//     long long int ans = 1LL*m*(m-1);
//     ans /= 2;
    
//     ans -= attack;

//     return ans;
// }

// int main(){
//     int m;
//     scanf("%d", &m);

//     int n = 1;
//     int attack;
//     point A;

//     while(n != m+1){
//         attack = 0;
//         for(int i = 0; i < n; i++){
//             for(int j = 0; j < n; j++){
//                 // printf("%d %d", i, j);
//                 A.x = i;
//                 A.y = j;
//                 attack += attacks(A, n); 
//                 // printf("|%d\n", attack);
//             }
//         }
//         printf("%lld\n", calculate(attack, n));
//         n++;
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    for (long long k = 1; k <= n; k++) {
        long long total = k * k * (k * k - 1) / 2;
        long long attacks = 4 * (k - 1) * (k - 2);
        printf("%lld\n", total - attacks);
    }
    return 0;
}
