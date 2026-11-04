#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n + 1, 0);
    arr[0] = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= 6 && j <= i ; j++){
            arr[i] = (arr[i] + arr[i - j]) % (int)(1e9+7);
        }
    }
    cout<<arr[n]<<'\n';
    return 0;
}
