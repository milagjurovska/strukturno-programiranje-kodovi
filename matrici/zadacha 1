#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
    int n, m, matrica [SIZE][SIZE], min, maks;
    cin>>n>>m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cin>>matrica[i][j];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if (i == 0 && j == 0)
                min = maks = matrica[i][j];
            else if (matrica[i][j]>maks)
                maks=matrica[i][j];
            else if (matrica[i][j]<min)
                min=matrica[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            if (i==j)
                matrica[i][j]=maks-min;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            cout<<matrica[i][j]<<"\t";
        cout<<endl;
    }
    return 0;
    }
