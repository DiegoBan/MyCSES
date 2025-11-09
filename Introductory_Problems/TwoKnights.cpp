#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int positions, attack;
    for(int i = 1 ; i <= n ; i++){
        positions = i*i*(i-1);
        attack = 4*(i-1)*(i-2);
        cout<<positions - attack<<endl;
    }
}