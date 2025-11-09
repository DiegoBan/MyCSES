#include <iostream>
using namespace std;

void GrayCode(string in, int pos, int c){
    if(pos == in.length()){
        cout<<in<<"\n";
        return;
    }
    if(c == 0){
        GrayCode(in, pos+1, 0);
        in[pos] = '1';
        GrayCode(in, pos+1, 1);
    }else{
        in[pos] = '1';
        GrayCode(in, pos+1, 0);
        in[pos] = '0';
        GrayCode(in, pos+1, 1);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string in = "";
    for(int i = 0 ; i < n ; i++){
        in += '0';
    }
    GrayCode(in, 0, 0);
    return 0;
}