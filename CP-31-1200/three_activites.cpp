#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        pair<int, int> A1 = {0, 0}, A2 = {0, 0}, A3 = {0, 0}, A4 = {0, 0};
        for(int i = 0; i < n; i++){
            cin>>A4.first;
            A4.second = i;

            if(A4.first > A1.first){
                A3 = A2;
                A2 = A1;
                A1 = A4;
            }
            else if(A4.first > A2.first){
                A3 = A2;
                A2 = A4;
            }
            else if(A4.first > A3.first){
                A3 = A4;
            }
        }

        pair<int, int> B1 = {0, 0}, B2 = {0, 0}, B3 = {0, 0}, B4 = {0, 0};
        for(int i = 0; i < n; i++){
            cin>>B4.first;
            B4.second = i;

            if(B4.first > B1.first){
                B3 = B2;
                B2 = B1;
                B1 = B4;
            }
            else if(B4.first > B2.first){
                B3 = B2;
                B2 = B4;
            }
            else if(B4.first > B3.first){
                B3 = B4;
            }
        }

        pair<int, int> C1 = {0, 0}, C2 = {0, 0}, C3 = {0, 0}, C4 = {0, 0};
        for(int i = 0; i < n; i++){
            cin>>C4.first;
            C4.second = i;

            if(C4.first > C1.first){
                C3 = C2;
                C2 = C1;
                C1 = C4;
            }
            else if(C4.first > C2.first){
                C3 = C2;
                C2 = C4;
            }
            else if(C4.first > C3.first){
                C3 = C4;
            }
        }
        vector<pair<int, int>> A, B, C;
        A.push_back(A1);
        A.push_back(A2);
        A.push_back(A3);

        B.push_back(B1);
        B.push_back(B2);
        B.push_back(B3);

        C.push_back(C1);
        C.push_back(C2);
        C.push_back(C3);

        int max_friends = INT_MIN;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    if( A[i].second == B[j].second || 
                        B[j].second == C[k].second ||
                        C[k].second == A[i].second
                    ){
                        continue;
                    }
                    // cout<<A[i].first + B[j].first + C[k].first<<"\n";
                    max_friends = max(max_friends, A[i].first + B[j].first + C[k].first);
                }
            }
        }

        cout<<max_friends<<"\n";
    }

    return 0;
}