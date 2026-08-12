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

        vector<int> array;
        
        while(n--){
            int temp;
            cin>>temp;

            array.push_back(temp);
        }

        vector<int> idx(array.size());
        iota(idx.begin(), idx.end(), 0);

        sort(idx.begin(), idx.end(), [&](int i, int j){
            return array[i] < array[j];
        });

        vector<long long> prefix(array.size());
        prefix[0] = array[idx[0]];
        for(int i = 1; i < array.size(); i++){
            prefix[i] = prefix[i-1] + array[idx[i]];
        }

        vector<int> answer(array.size());

        int m = array.size();
        answer[m - 1] = m - 1;

        for (int i = m - 2; i >= 0; i--) {
            if (prefix[i] >= array[idx[i + 1]]) {
                answer[i] = answer[i + 1];
            } else {
                answer[i] = i;
            }
        }

        vector<int> original_answer(array.size());

        for (int i = 0; i < array.size(); i++) {
            original_answer[idx[i]] = answer[i];
        }

        for (int x : original_answer) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}