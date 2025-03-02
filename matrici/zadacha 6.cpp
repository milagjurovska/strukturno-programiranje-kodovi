#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
    
    int n,m, b[SIZE][SIZE];
    cin>>n>>m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin>>b[i][j];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i+j==n-1)
                cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
