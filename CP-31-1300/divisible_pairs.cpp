#include <bits/stdc++.h>
#include "helper.h"
using namespace std;

void print_arr(vector<int> a){
    for(int i : a){
        cout<<i<<":";
    }
    cout<<"\n";
}
void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a, b;
    a.reserve(n);
    b.reserve(n);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        a.push_back(temp % x);
        b.push_back(temp % y);
    }

    long long count = 0;
    map<pair<int, int>, long long> freq;

    for (int i = 0; i < n; i++) {
        int need = (x - a[i]) % x;

        count += freq[{need, b[i]}];
        freq[{a[i], b[i]}]++;
    }

    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;           
    while (t--) {
        solve();
    }
    return 0;
}