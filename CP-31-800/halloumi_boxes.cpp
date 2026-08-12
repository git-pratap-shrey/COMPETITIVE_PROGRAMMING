#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;

    int n, k;
    int curr;
    int prev;
    bool flag;

    while(t--){
        flag = false;
        prev = 0;
        cin>>n>>k;

        if(k >= 2){
            while(n--){
                cin>>curr;
            }
        }
        else{
            while(n--){
                cin>>curr;
                if(curr < prev){
                    flag = true;
                }
                prev = curr;
            }
        }
        
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}