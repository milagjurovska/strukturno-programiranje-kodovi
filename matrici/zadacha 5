#include <iostream>
#include <iomanip>
#define SIZE 100
using namespace std;

int main(){
int n, b[SIZE][SIZE],zbir1,zbir2,zbir3, zbir4;
    bool proverka=true;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cin>>b[i][j];
    }
    zbir1=0;
    for (int j=0; j<n; j++){
        zbir1+=b[0][j];
    }
    for (int i=1; i<n; i++){
        zbir2=0;
        for (int j=0; j<n; j++){
            zbir2+=b[i][j];
        }
        if (zbir1!=zbir2) {
            proverka = false;
            break;
        }
    }
    zbir3=0;
        for (int i=0; i<n; i++){
            zbir3+=b[i][0];
        }
    for (int j=1; j<n; j++){
        zbir4=0;
        for (int i=0; i<n; i++){
            zbir4+=b[i][j];
        }
        if (zbir3!=zbir4) {
            proverka = false;
            break;
        }
    }
    if (proverka){
        cout<<"True"<<endl;
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i==j) {
                    b[i][j] = zbir1;
                }
                cout<<b[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
return 0;
}
