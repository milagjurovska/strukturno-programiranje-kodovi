#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
 int n, b[SIZE][SIZE];
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cin>>b[i][j];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if (i>j && i+j>n-1){
                if (b[i][j]>0){
                    b[i][j]=b[i][j]-2*b[i][j];
                }
                else if (b[i][j]<0){
                    b[i][j]=b[i][j]-2*b[i][j];
                }
            }
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cout<<b[i][j]<<"\t";
        cout<<endl;
    }
return 0;
}
