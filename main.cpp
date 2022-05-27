#include <iostream>
#include <string>
#include <windows.h>

// M. Taufan Ma'ruf
// 1461900089
// Sistem Keamanan Komputer (S)

using namespace std;

void enk(string text,int key){
    cout<<"Teks Asli = "<<text<<endl;
    for(int i=0;i<text.length();i++){
//        text[i] = tolower(text[i]);
//        if(text[i]+key+i>122){
//            text[i] = text[i]+i+key-26;
//        }else{
            text[i] = text[i]+i+key;
//        }
    }
    cout<<"Hasil Enkripsi = "<<text<<endl;
}

void dek(string text,int key){
    cout<<"Teks Asli = "<<text<<endl;
    for(int i=0;i<text.length();i++){
//        if(text[i]-key-i<97){
//            text[i] = text[i]-key-i+26;
//        }else{
            text[i] = text[i]-key-i;
//        }
    }
    cout<<"Hasil Enkripsi = "<<text<<endl;
}

int main(){
    bool menu=true,ze=false;
    while(menu){
        string plain;
        int key,pil;
        char done;
        bool pils=true,zero=false;
        cout<<"Masukkan Kata Yang Ingin Di Olah : ";
        cin.clear();cin.sync();
        getline (cin, plain);
        while(true){
            (ze==true)?cout<<"Nomor harus berada di 1 - 25! \n":cout<<"";
            cout<<"Masukkan Key Enkripsi (1-25): ";
            cin>>key;
            if(key<1||key>25){
                ze=true;
                system("cls");
            }else{
                break;
            }
        }
        system("cls");
        while(pils){
            cout<<"Pilih Method : \n";
            cout<<"1. Enkripsi : \n";
            cout<<"2. Dekripsi: \n";
            (zero==true)?cout<<"Nomor tidak Tertera Pilih 1 atau 2 \n":cout<<"";
            cout<<"Jawab : ";
            cin>>pil;
            if(pil==1){
                system("cls");
                enk(plain,key);
                system("pause");
                system("cls");
                break;
            }else if(pil==2){
                system("cls");
                dek(plain,key);
                system("pause");
                system("cls");
                break;
            }else{
                zero=true;
            }
            system("cls");
        }
        cout<<"Mengulangi? y/n \n";
        cout<<"Jawab : ";
        cin>>done;
        if(done=='n'||done=='N'){
            break;
        }
        system("cls");
    }
}
