include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define size 100

bool proverka (char *lozinka){
    int bukva=0, cifra=0, znak=0;
    for (int i=0; i<strlen(lozinka); i++)
    {
        if (isdigit(lozinka[i]))
            cifra++;
        else if (isalpha(lozinka[i]))
            bukva++;
        else if (ispunct(lozinka[i]))
            znak++;
    }
     if (cifra>0 && bukva>0 && znak>0)
         return true;
     else
         return false;
}

int main() {
    char lozinka[size];
    cin.getline (lozinka, size);
    if (proverka(lozinka)==true)
        cout<<"e validna lozinka"<<endl;
    else
        cout<<"ne e validna lozinka"<<endl;
    return 0;
}
