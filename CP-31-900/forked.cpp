#include<bits/stdc++.h>
using namespace std;    

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        int Kx, Ky;
        cin>>Kx>>Ky;

        int Qx, Qy;
        cin>>Qx>>Qy;

        set<pair<int, int>> moves;

        moves.insert({Kx + a, Ky + b});
        moves.insert({Kx - a, Ky + b});
        moves.insert({Kx + a, Ky - b});
        moves.insert({Kx - a, Ky - b});
        moves.insert({Kx + b, Ky + a});
        moves.insert({Kx - b, Ky + a});
        moves.insert({Kx + b, Ky - a});
        moves.insert({Kx - b, Ky - a});

        int count = 0;

        if(moves.find({Qx - a, Qy + b}) != moves.end()) {moves.erase({Qx - a, Qy + b});count ++;}
        if(moves.find({Qx + a, Qy + b}) != moves.end()) {moves.erase({Qx + a, Qy + b});count ++;}
        if(moves.find({Qx + a, Qy - b}) != moves.end()) {moves.erase({Qx + a, Qy - b});count ++;}
        if(moves.find({Qx - a, Qy - b}) != moves.end()) {moves.erase({Qx - a, Qy - b});count ++;}
        if(moves.find({Qx + b, Qy + a}) != moves.end()) {moves.erase({Qx + b, Qy + a});count ++;}
        if(moves.find({Qx - b, Qy + a}) != moves.end()) {moves.erase({Qx - b, Qy + a});count ++;}
        if(moves.find({Qx + b, Qy - a}) != moves.end()) {moves.erase({Qx + b, Qy - a});count ++;}
        if(moves.find({Qx - b, Qy - a}) != moves.end()) {moves.erase({Qx - b, Qy - a});count ++;}

        cout<<count<<"\n";
    }
}