#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long z = lcm(x, y);
    x = n / x;
    y = n / y;
    z = n / z;
    // cout<<x<<" "<<y<<" "<<z<<"->";

    x -= z;
    y -= z;

    // cout<<x<<" "<<y<<" "<<z<<"->";
    long long answer = n * x;
    answer -= ((x * (x - 1)) / 2);
    answer -= ((y * (y + 1)) / 2);

    cout<<answer<<"\n";
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