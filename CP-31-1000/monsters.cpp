#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned t;
    cin>>t;

    while(t--){
        unsigned n, k;
        cin>>n>>k;

        vector<unsigned> array; 
        while(n--){
            unsigned a;
            cin>>a;

        array.push_back(a % k == 0 ? k : a % k);
        }

        vector<unsigned> idx(array.size());
        iota(idx.begin(), idx.end(), 0);
        
        stable_sort(idx.begin(), idx.end(), [&](unsigned i, unsigned j){
            return array[i] > array[j];
        });

        for(unsigned out : idx){
            cout<<out+1<<" ";
        }

        cout<<"\n";
    }
    return 0;
}