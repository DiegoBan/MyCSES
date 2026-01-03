#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, aux;
    set<int> s;
    cin>>n;
    while(n > 0){
        cin>>aux;
        s.insert(aux);
        n--;
    }
    cout<<s.size()<<"\n";
    return 0;
}