#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int size = n;
        int hash[1001] = {0};
        while(n--){
            int temp;
            cin>>temp;
            
            hash[temp]++;
        }
        
        int sum = 0;
        for(int i = 1; i <= 1000; i++){
            if(!hash[i]){
                continue;
            }
            // cout<<i<<"->"<<hash[i]<<"->";
            if(hash[i] - 1 > size/2){
                sum += ((size - hash[i] + 2) * i);
            }
            else{
                sum += (i * hash[i]);
            }
        }
        cout<<sum<<"\n";
    }
    
    return 0;
}
// int count = 1;
// int prev;
// cin>>prev;
// n--;

// int sum = prev;
// bool shield = false;