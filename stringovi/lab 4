#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define size 100

bool neparen(int broj){
    return broj%2==1;
}

void smena (char *niza){
    int bro=0;
    for (int i=0; i<strlen(niza); i++) {
        while (niza[i] != '\0' && isalpha(niza[i])){
            bro++; i++;
        }
        if (bro>0){
            char zbor[size];
            strncpy(zbor, niza+ i - bro, bro);
            zbor[bro]='\0';
            if (neparen(bro)){
                for (int j=bro-1; j>=0; j--){
                    cout<<zbor[j];
                }
                cout<<" ";
            }
            else
                cout<<zbor<<" ";
            bro=0;
        }
    }
}

int main(){
    char niza[size];
    cin.getline (niza, size);
    smena(niza);
    return 0;
}
