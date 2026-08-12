#include<bits/stdc++.h>
using namespace std;

vector<pair<unsigned, unsigned>> find_factors(unsigned k){
    vector<pair<unsigned, unsigned>> factors;

    for(int i = 2; i <= sqrt(k); i++){
        if(k % i == 0){
            pair<unsigned, unsigned> factor = {i, k / i};
            factors.push_back(factor);
        }
    }

    return factors;
}

unsigned dp(vector<unsigned>& numbers, unsigned k, unsigned to_add, signed exclude, signed& used){
    if(k == 1){
        used = -1;
        return 0;
    }
    
    unsigned min_add = k;
    signed best_idx = -1;

    for(unsigned i = 0; i < numbers.size(); i++){
        if((signed)i == exclude) continue;
        unsigned add = k - (numbers[i] % k);
        if(add == k){
            add = 0;
        }
        if(add < min_add){
            min_add = add;
            best_idx = i;
        }
    }

    to_add = min(min_add, to_add);
    used = best_idx;

    for(auto x : find_factors(k)){
        signed used1 = -1, used2 = -1;
        unsigned add = dp(numbers, x.first, to_add, exclude, used1);
        add += dp(numbers, x.second, to_add, used1, used2);

        if(add < to_add){
            to_add = add;
            used = -1;
        }
    }

    return to_add;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned t;
    cin>>t;

    while(t--){
        unsigned n, k;
        cin>>n>>k;
        
        vector<unsigned> numbers;
        while(n--){
            unsigned temp;
            cin>>temp;
            numbers.push_back(temp);
        }
        
        signed used = -1;
        cout<<dp(numbers, k, k, -1, used)<<"\n";
    }
    
    return 0;
}