#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
#include <stdio.h>
 
void print(int* arr, int n) {
    static char buf[1 << 20]; // 1 MB buffer (adjust size if needed)
    char *p = buf;
 
    for (int i = n - 1; i >= 0; i--) {
        p += sprintf(p, "%d", arr[i]);
    }
    *p++ = '\n';
    *p = '\0';
    fputs(buf, stdout);
}
 
    
int main(){
    
    int n;
    scanf("%d", &n);
    
    bool* state = calloc(n, sizeof(bool));
    int* arr = calloc(n, sizeof(int));
        
    int i = 0;
    int j = 0;
    
    print(arr, n);
    
    while(i != n){
        if(!state[i]){
             
            arr[i] = !arr[i];
            state[i] = !state[i];
            print(arr, n);
            
            for(int j = 0; j < i; j++){
                state[j] = !state[j];
            }
            i=0;
            //flip and print the arr
            //all before i is flipped
            //reset i to 0
        }
        else{i++;}
    }
    return 0;
}
