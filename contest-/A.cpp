#include<bits/stdc++.h>

using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        if(a == b || b == c || c == a){
            cout<<0<<"\n";
            continue;
        }
        int high, med, low;
        if(a > b && a > c){
            high = a;
            if(b > c){
                med = b;
                low = c;
            }
            else{
                med = c;
                low = b;
            }
        }
        else if(b > a && b > c){
            high = b;
            if(a > c){
                med = a;
                low = c;
            }
            else{
                med = c;
                low = a;
            }
        }
        else{
            high = c;
            if(b > a){
                med = b;
                low = a;
            }
            else{
                med = a;
                low = b;
            }
        }

        cout<<min(high-med, med-low)<<"\n";
    }

    return 0;
}