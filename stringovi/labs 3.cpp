#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define size 100

float letterFrequency (char *niza, char bukva){
    float brojach1=0, brojach2=0;
    char bukva1;
    if (isupper(bukva))
        bukva1=tolower(bukva);
    else
        bukva1=toupper(bukva);
    for (int i=0; i<strlen(niza); i++){
        if (isalpha(niza[i]))
            brojach1++;
        if (bukva==niza[i] || bukva1==niza[i])
            brojach2++;
    }
    return brojach2/brojach1;
}

int main(){
    char niza[size], a;
    cin.getline (niza, size);
    cin>>a;
    cout<<letterFrequency(niza,a);

    return 0;
}
