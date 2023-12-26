#include <iostream>
#include <cstring>
using namespace std;
#define size 100

int brojach (char *zbor, char s){
    int br=0;
    for (int i=0; i<strlen(zbor); i++){
        if (zbor[i] == s) br++;
    }
    return br;

}

int main(){
    char zbor[size];
    cin.getline(zbor, size);
    char s;
    cin>>s;
    cout<<"znakot se pojavuva "<< brojach (zbor, s)<<" pati"<<endl;
    return 0;
