#include <iostream>
using namespace std;

int N = 8;
bool blocked[8][8];
bool col[8];
bool diagA[15];
bool diagB[15];

// Backtracking
int recursiveSolutions(int i){
    if(i == N) return 1;
    int count = 0;
    for(int j = 0 ; j < N ; j++){
        if(blocked[i][j]) continue;
        int a = i + j;
        int b = i - j + N - 1;
        if(col[j] || diagA[a] || diagB[b]) continue;

        col[j] = diagA[a] = diagB[b] = true;
        count += recursiveSolutions(i + 1);
        col[j] = diagA[a] = diagB[b] = false;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string row;
    for(int i = 0 ; i < N ; i++){
        cin >> row;
        for(int j = 0 ; j < N ; j++){
            blocked[i][j] = (row[j] == '*');
        }
    }

    cout << recursiveSolutions(0) << '\n';
}
