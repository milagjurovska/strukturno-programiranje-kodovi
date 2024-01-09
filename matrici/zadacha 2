#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
    int n, a[SIZE][SIZE];
    bool sime=true;
    cin>>n;

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (a[i][j]!=a[j][i]){
                sime=false;
                break;
            }
        }
    }
    if (sime)
        cout<<"simetrichna e"<<endl;
    else
        cout<<"ne e simetrichna"<<endl;
return 0;
}
