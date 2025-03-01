#include <iostream>
#include <cstring>
using namespace std;
#define size 100

int main(){
    char z[size];
    cin.getline (z, size);
    int p, d;
    cin>>p>>d;
    for (int i=p;i< d+p;i++){
        cout<<z[i];
    }
    return 0;
}
