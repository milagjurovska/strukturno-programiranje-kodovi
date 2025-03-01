#include <iostream>
#include <cstring>
using namespace std;
#define size 100


//podniza od prvo pojavuvanje do posledno pojavuvanje na karakter

int main(){
    char niza[size], a;
    cin.getline (niza, size);
    cin>>a;
    char *ptr1, *ptr2;
    ptr1=strchr(niza,a);
    ptr2= strrchr(niza, a);
    if (ptr1 != nullptr && ptr2 != nullptr){
        int start = ptr1-niza;
        int end= ptr2- niza;
        for (int i=start; i<=end; i++){
            cout<<niza[i];
        }
    }
    return 0;
}
