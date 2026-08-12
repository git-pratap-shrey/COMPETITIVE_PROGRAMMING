#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> freq;
    int size = n * (n-1);
    size /= 2;

    // cout<<size;
    while(size--){
        int temp;
        cin >> temp;

        freq[temp]++;
    }

    vector<int> answer;
    int curr = n - 1;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        while(it->second > 0){
            // cout << it->first << " " << it->second << '\n';
            it->second -= curr;
            answer.push_back(it->first);

            curr --;
        }
    }

    answer.push_back(answer[answer.size()-1]);

    for(int i : answer){
        cout<<i<<" ";
    }
    cout<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}