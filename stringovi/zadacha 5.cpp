#include <iostream>
#include <cstring>
using namespace std;
#define size 100

bool proverka (char *niza){
    int a=strlen(niza)-1;
    for (int i=0; i<(strlen(niza)-1)/2; i++, a--){
            if (niza[i]!=niza[a])
                return false;
    }
    return true;
}

int main() {
    char niza[size];
    cin.getline (niza, size);
    if(proverka(niza)==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
