#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int n;
    int medianIdx;
    vector<int> arr;
    int non_median_num;

    while(t!=0){
        cin>>n;
        arr = vector<int>(3*n);

        non_median_num = 3*n;
        medianIdx = 2;

        for(int i = 0; i < 3*n; i++){
            if(i == medianIdx){
                arr[i] = (medianIdx+1)/3;
                medianIdx += 3;
                continue;
            }
            arr[i] = non_median_num;
            non_median_num--;
        }

        for(int _ : arr){
            cout<<_<<" ";
        }

        cout<<endl;
        t--;
    }

    return 0;
}