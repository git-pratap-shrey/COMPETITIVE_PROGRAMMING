#include<bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int temp;
    int n;
    while(t!=0){
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>temp;
        }
        if(n == 1){
            cout<<1;
            
        }
        else{
            for(int i = 0; i < n; i++){
                cout<<2<<" ";
            }
        }


        cout<<endl;
        t--;
    }

    return 0;
}