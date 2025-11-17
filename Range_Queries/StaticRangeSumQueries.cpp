#include <iostream>
#include <vector>
using namespace std;

vector<long> sums;

long querie(int a, int b){
    if(a <= 1){
        return sums[b-1];
    }else{
        return sums[b-1] - sums[a-2];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, a, b;
    long aux;
    cin>>n>>q;
    sums.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin>>aux;
        if(i == 0){
            sums[i] = aux;
        }else{
            sums[i] = aux + sums[i-1];
        }
    }
    for(int i = 0 ; i < q ; i++){
        cin>>a>>b;
        cout<<querie(a, b)<<"\n";
    }
    return 0;
}