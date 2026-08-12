#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    int x;
    int temp;
    int available;
    bool flag;

    while(t>0){
        cin>>x;

        available = 0;
        flag = false;

        for(int i = 1; i <= x; i++){
            cin>>temp;

            if(temp - i >= 0){
                available += (temp - i);
            }
            else{
                if(available - i + temp >= 0){
                    available -= (i - temp);
                }
                else{
                    flag = true;
                }
            }
            
            // cout<<available;

        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        t--;
    }

    return 0;
}