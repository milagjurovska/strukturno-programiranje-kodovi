#include <iostream>
using namespace std;

int countOccurance (int number, int digit){
    int brojach=0;
    while (number>0){
        if (number%10 == digit){
            brojach++;
        }
        number/=10;
    }
    return brojach;
}

int main(){
    int m,n,p,br=0;
    cin>>m>>n>>p;
    for (int i=m+1;br<10;i++)
    {
        if (countOccurance (i,n)==p){
            cout<<i<<endl;
            br++;
        }
    }

    return 0;
}
