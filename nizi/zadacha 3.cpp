#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100

bool prost (int m){
    for (int i=2; i<m/2 ;i++){
        if (m%i==0) return false;
    }
    return true;
}

int main (){
    int n,broj;
    cin>>n;
    int niza[n];
    for (int i=0; i<n; i++){
        cin>>niza[i];
    }
    for (int i=0; i<n; i+=2){
        broj=niza[i]*10+niza[i+1];
        if (prost (broj))
            cout << "brojot " << broj << " e prost" << endl;
        else
            cout << "brojot " << broj << " ne e prost" << endl;
    }

    return 0;
}
