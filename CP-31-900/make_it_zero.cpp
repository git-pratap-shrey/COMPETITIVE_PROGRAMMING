#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%2 == 0){
            cout<<2<<"\n"<<1<<" "<<n<<"\n"<<1<<" "<<n<<"\n";
        }
        else{
            cout<<4<<"\n"<<1<<" "<<n<<"\n"<<2<<" "<<n<<"\n"<<1<<" "<<2<<"\n"<<1<<" "<<2<<"\n";
        }
        while(n--){
            int temp;
            cin>>temp;
        }

    }
}