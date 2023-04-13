#include <iostream>
#include <cstring> //untuk strlen
using namespace std;

int main(){
    char myString[] = "string";

    int panjangElemen = sizeof(myString) / sizeof(myString[0]); //mendapakan jumlah elemen
    int panjangKalimat = strlen(myString); //mendapatkan jumlah karakter sebenarnya

    cout<<"======== "<<myString<<" : ========"<<endl;

    cout<<"Panjang Elemen : "<<panjangElemen<<endl;
    cout<<"Panjang Kalimat : "<<panjangKalimat<<endl;

    cout<<endl<<"=> ASCII code"<<endl;
    for (int i = 0; i < panjangElemen; ++i){
        cout<<myString[i]<<" : "<< static_cast<int>(myString[i]) <<endl; //Melihat Kode ASCII
    }

    return 0;
}
