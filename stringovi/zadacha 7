#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
#define size 100

void proverka(char *lozinka){
    int j=0;
    for (int i=0; i<strlen(lozinka); i++) {
        if (isalpha (lozinka[i])) {
            if (isupper(lozinka[i]))
                lozinka[j] = tolower(lozinka[i]);
            else if (islower(lozinka[i]))
                lozinka[j] = toupper(lozinka[i]);
            j++;
        }
    }
    for (int i=0; i<j; i++){
        cout<<lozinka[i];
    }

}

int main() {
    char lozinka[size];
    cin.getline (lozinka, size);
    proverka (lozinka);
    return 0;
}
