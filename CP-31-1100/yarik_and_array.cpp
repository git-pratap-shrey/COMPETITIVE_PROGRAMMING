#include<bits/stdc++.h>

using namespace std;

bool same_parity(int x, int y){
    if(x % 2 == 0){
        if(y % 2 == 0){
            return true;
        }
        return false;
    }
    else{
        if(y % 2 == 0){
            return false;
        }
        return true;
    }
}
pair<int, int> init(vector<int> &array, int start_index){
    int max_num = INT_MIN;

    for(int i = start_index; i < array.size(); i++){
        max_num = max(max_num, array[i]);
        if(array[i] > 0){
            return {array[i], i};
        }
    }
    return {max_num, -1};
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> array;
        array.reserve(n);
        
        while(n--){
            int temp;
            cin>>temp;
            
            array.push_back(temp);
        }
        
        pair<int, int> init_pair = init(array, 0);
        int max_sum = INT_MIN, sum = init_pair.first, pos_sum = sum;
        int i = init_pair.second,  j = i+1;
        
        max_sum = sum;

        if(i == -1){
            cout<<init_pair.first<<"\n";
            continue;
        }

        while(j < array.size()){
            if(array[j] < 0){
                pos_sum = max(pos_sum, sum);
            }
            if(!same_parity(array[j-1], array[j])){
                sum = max(array[j], sum + array[j]);
            }

            else{
                init_pair = init(array, j);
                i = init_pair.second;
                j = i;
                if(i == -1){
                    break;
                }
                sum = init_pair.first;
                pos_sum = sum;
            }

            if(pos_sum > sum){
                max_sum = max(max_sum, pos_sum);
            }
            max_sum = max(max_sum, sum);
            j++;
        }

        cout<<max_sum<<"\n";
    }

    return 0;
}