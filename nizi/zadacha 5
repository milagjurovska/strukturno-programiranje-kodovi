#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100

int main (){
    int n,k,c[SIZE],temp;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin >> c[i];
    }
    cin>>k;
    for (int i=0; i<n; i++){
        if (k==i){
            temp=c[i];
            c[i]=c[i-1];
            c[i-1]=temp;
        }
    }
    for (int i=0; i<n; i++) {
        cout<<c[i]<<" ";
    }

    return 0;
}
