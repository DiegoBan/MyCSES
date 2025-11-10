#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int max = 1, count = 1;
    for(int i = 1 ; i < s.size() ; i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            count = 1;
        }
        max = count > max ? count : max;
    }
    cout<<max<<"\n";
    return 0;
}