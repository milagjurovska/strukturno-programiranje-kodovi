#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 100

int main (){
    int n,zbir=0;
    cin>>n;
    int p[n];
    for (int i=0; i<n; i++) {
        cin >> p[i];
        zbir+=p[i];
    }
    float prosek=(float)zbir/n;
    for (int i=0; i<n; i++ ){
        if (p[i]>=prosek)
            p[i]=1;
        else
            p[i]=0;
        cout<<p[i]<<" ";
    }


    return 0;
}
