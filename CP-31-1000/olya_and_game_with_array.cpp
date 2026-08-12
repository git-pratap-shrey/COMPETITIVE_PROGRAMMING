#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        long long int sum = 0;
        long long int minimum_1 = LLONG_MAX;
        long long int minimum_2 = LLONG_MAX;

        while(n--){
            int m;
            cin>>m;
            
            long long int min_1 = LLONG_MAX;
            long long int min_2 = LLONG_MAX;
            
            while(m--){
                int temp;
                cin>>temp;
                
                if(temp < min_1){
                    min_2 = min_1;
                    min_1 = temp;
                }
                else if(temp < min_2){
                    min_2 = temp;
                }
            }

            sum += min_2;
            minimum_1 = min(minimum_1, min_1);
            if(minimum_2 > min_2){
                minimum_2 = min_2;
            }
        }

        cout<<sum - minimum_2 + minimum_1<<"\n";
    }

    return 0;
}