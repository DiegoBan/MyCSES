#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;

long long exponential(long long base, long long exp){
    long long res = 1;
    base %= MOD;
    while(exp > 0){
        if(exp & 1) res = res * base % MOD;
        base = base * base % MOD;
        exp >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    cout<<exponential(2, n)<<'\n';
    return 0;
}
