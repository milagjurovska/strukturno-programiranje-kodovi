#include <iostream>
using namespace std;

int obratenBroj (int broj){
    int ob=0;
    while (broj>0){
        ob=ob*10+broj%10;
        broj/=10;
    }
    return ob;
}

int sumaNaCifri(int broj){
    int suma_cifri=0,cifra;
    while (broj>0){
        cifra=broj%10;
        suma_cifri+=cifra;
        broj/=10;
    }
    return suma_cifri;
}

void pecatiVoInterval (int a, int b){
    int obraten,zbir;
    for (int i=a; i<=b; i++){
        zbir=sumaNaCifri (i);
        obraten=obratenBroj(zbir);
        if (i%obraten==0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    pecatiVoInterval (x,y);

    return 0;
}
