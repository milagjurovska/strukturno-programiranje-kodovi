#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
    int n,m, a[SIZE][SIZE],br=0;
    bool iks=false;
    cin>>n>>m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin>>a[i][j];
    }
    for (int i=0; i<n-2; i++){
        for (int j=0; j<m-2; j++)
            if (a[i][j] == 1 && a[i][j + 1] == 1 && a[i][j + 2] == 1 &&
                a[i + 1][j] == 1 && a[i + 2][j] == 1){
                    iks = true;
                    br++;
            }
        else
            break;
    }
    if (iks){
        cout<<"nema"<<endl;
    }
    else{
        cout<<br<<endl;
    }
return 0;
}
