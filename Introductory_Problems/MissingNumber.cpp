#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, aux;
    cin>>n;
    priority_queue<int> q;
    for(int i = 0 ; i < n-1 ; i++){
        cin>>aux;
        q.push(aux);
    }
    aux = n;
    while(!q.empty()){
        if(q.top() == aux){
            aux--;
            q.pop();
        }
        else{
            break;
        }
    }
    cout<<aux<<"\n";
    return 0;
}