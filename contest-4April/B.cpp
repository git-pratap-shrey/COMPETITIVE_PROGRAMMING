#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int x;
    int maximum;

    int sum;

    while(t!=0){
        sum = 0;
        maximum;
        cin>>maximum;

        for(int i = 1; i < 7; i++){
            cin>>x;
            if(x > maximum){
                sum += maximum;
                maximum = x;
            }
            else{
                sum+=x;
            }
        }
        cout << maximum - sum <<endl;
        t--;

    }

    return 0;
}