#include <iostream>
#include <cstring>
using namespace std;
#define size 100

void trim (char *niza){
    int br=0;
    for(int i=1; i<strlen(niza)-1; i++){
        cout<<niza[i];
    }
}

int main() {
    char niza[size];
    cin.getline (niza, size);
    trim (niza);
    return 0;
}
