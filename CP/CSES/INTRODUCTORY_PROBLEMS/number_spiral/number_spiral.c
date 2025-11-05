#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
    if(a>=b){
        return a;
    }
    return b;
}
typedef struct point{
    int x;
    int y;
}point;

int findDiff(point A, point B){
    int D = abs(A.x - B.x) + abs(A.y - B.y);
    return D;
}

int main(){

    int numTest;
    scanf("%d", &numTest);

    point A, B;
    int diff;
    long long int ans;

    for(int i = 0; i < numTest; i++){
        scanf("%d %d", &A.y, &A.x);
        int n = max(A.y, A.x);

        if(n % 2 == 0){
            B.y = n;
            B.x = 1;
        }
        else{
            B.y = 1;
            B.x = n;
        }

        diff = findDiff(A, B);
        ans = 1LL*n*n - diff;
        printf("%lld ", ans);
    }

    return 0;
}