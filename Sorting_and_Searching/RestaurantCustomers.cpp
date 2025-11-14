#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count(vector<int> arrives, vector<int> leaves){
    int act = 0, max = 0, a = 0, l = 0;
    sort(arrives.begin(), arrives.end());
    sort(leaves.begin(), leaves.end());
    while(a < arrives.size() && leaves.size()){
        if(arrives[a] < leaves[l]){
            act++;
            a++;
        }else if(arrives[a] > leaves[l]){
            act--;
            l++;
        }else{
            a++;
            l++;
        }
        max = max < act ? act : max;
    }
    return max;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, aux;
    vector<int> arrives, leaves;
    cin>>n;
    arrives.resize(n);
    leaves.resize(n);
    for(int i = 0 ; i < n ; i++){
        cin>>aux;
        arrives[i] = aux;
        cin>>aux;
        leaves[i] = aux;
    }
    cout<<count(arrives, leaves)<<"\n";
    return 0;
}