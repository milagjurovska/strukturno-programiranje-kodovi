#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100

int main(){
    int n,br=0;
    float procent;
    cin>>n;
    for (int i=0; i<n; i++){
        int niza[SIZE], m;
        cin>>m;
        float temp=m;
        for (int j=0; j<m; j++){
            cin>>niza[j];
        }
        if (m%2==0) {
            for (int j = 0; j < m; j++) {
                if (niza[j]==niza[m-1]){
                    br+=2; m--;
                }
            }
        }
        else{
            for (int j = 0; j < m; j++) {
                if (niza[j]==niza[m-1]){
                    br+=2; m--;
                }
            }
            br++;
        }
        procent=(float)br*100/temp;
        cout<<fixed<<setprecision(2)<<procent<<"%"<<endl;
    }

    return 0;
}
