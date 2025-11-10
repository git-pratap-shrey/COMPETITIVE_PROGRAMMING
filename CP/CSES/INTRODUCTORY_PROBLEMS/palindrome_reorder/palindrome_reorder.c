#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char* input_str(){

    char c = getchar();
    int size = 100;
    int counter = 0;
    char* str = malloc(sizeof(char) * size);

    while(c != '\n'){
        if(counter == size){
            size*=2;
            str = realloc(str, sizeof(char) * size);
        }
        str[counter++] = c;
        
        c = getchar();
    }
    str[counter] = '\0';

    // printf("%s\n", str);

    // for(int i = 0; i < counter; i++){
    //     printf("%c", str[i]);
    // }

    return str;
}

int main(){
    
    char str[1000005];
    fgets(str, sizeof(str), stdin);

    int size = strlen(str);
    int* hash = calloc(26, sizeof(int));
    
    for(int i = 0; i < size; i++){
        hash[str[i] - 65]++; 
    }

    int counter = 0;
    int odd = -1;

    for(int i = 0; i < 26; i++){
        if(hash[i]){
            if(hash[i] % 2 == 0){
                hash[i] /= 2;
                for(int k = 0; k < hash[i]; k++){
                    str[counter++] = (char)i+'A';
                    // printf("%c", str[counter-1]);
                }
            }
            else{
                if(odd != -1){
                    printf("NO SOLUTION");
                    return 0;
                }
                odd = i;           
            }
        }
    }

    if(odd != -1){
        for(int k = 0; k < hash[odd]; k++){
            str[counter++] = (char)odd + 'A';
            // printf("%c", str[counter-1]);
        }
    }
    
    
    for(int i = 25; i >= 0; i--){
        if(hash[i] && i != odd){
                for(int k = 0; k < hash[i]; k++){
                    str[counter++] = (char)i + 'A';
                    // printf("%c", str[counter-1]);
                }
        }
    }

    fputs(str, stdout);
    return 0;
}