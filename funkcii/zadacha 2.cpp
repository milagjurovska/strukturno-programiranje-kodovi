#include <iostream>
using namespace std;

int najmal (int d, int min){
    if (min>d){
        return d;
    }
    return min;
}

int vrednost_d(int a, int b, int c){
    return abs(a-b) + abs(b-c);
}

int main(){
    int N,a,b,c;
    int min=INT_MAX;
    cin>>N;
    for (int i=0; i<N;i++){
        cin>>a>>b>>c;
        int d= vrednost_d(a, b, c);
        min = najmal (d, min);
    }
    cout<<min<<endl;

    return 0;
}
