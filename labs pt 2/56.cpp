#include <iostream>
using namespace std;
#define size 100

int main(){
    int n, a[size][size],y,temp;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    }
    cin>>y;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
    {
    if (i==j){
        temp=a[i][j];
        a[i][j]=a[i][y];
        a[y][j]=temp;
        a[i][y]=temp;
    }
    }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
           cout<<a[i][j]<<" ";
           cout<<endl;
    }
    
    return 0;
}
