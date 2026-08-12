#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;


    int x;
    int max_line = 0;
    int curr_line = 0;

    char temp;
    while(t>0){
        cin>>x;
        max_line = 0;
        curr_line = 0;

        while(x > 0){
            cin>>temp;
            if(temp == '#'){
                curr_line++;
            }
            else{
                curr_line = 0;
            }

            max_line = max(curr_line, max_line);
            x--;
        }

        cout<<(max_line+1)/2<<endl;
        t--;
    }

    return 0;
}