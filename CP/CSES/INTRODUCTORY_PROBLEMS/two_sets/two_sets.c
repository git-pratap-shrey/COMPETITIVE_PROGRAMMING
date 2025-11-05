#include <stdio.h>

void main(){
    int m;
    scanf("%d", &m);

    int n = m;

    long long int sum = 1LL*n*(n+1);
    sum /= 2;

    if(sum % 2 != 0){
        printf("NO\n");
        return;
    }    

    sum /= 2;
    printf("YES\n");

    int arr1[n];
    int size1 = 0;

    while(sum > n){
        sum -= n;
        arr1[size1] = n;

        // printf("%d ", arr1[size1]);
        n--;
        size1++;
    }
    arr1[size1] = sum;
    size1++;
    printf("%d\n", size1);

    for(int i = 0; i < size1; i++){
        printf("%d ", arr1[i]);
    }

    printf("\n%d\n", m-size1);

    for(n; n > 0; n--){
        if(n != sum){
            printf("%d ", n);
        }
    }
    printf("\n");
}