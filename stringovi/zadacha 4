#include <iostream>
#include <cstring>
using namespace std;
#define size 100

int podniza (char *niza, char *podniza){
    int a=strlen(niza), b=strlen(podniza);
    if (a<b) return 0;
    for (int i=0; i<= a-b; i++){
        if (strncmp (podniza, niza + i, b)==0) return 1;
    }
    return 0;

}

int main(){
    char z[size*2], p[size];
    cin.getline (z, size*2);
    cin.getline (p,size);
    if (podniza(z,p))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
