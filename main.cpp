#include <iostream>
using namespace std;

float nilaiSatu, nilaiDua;
char operasi;

void calc(float a=0.0, char b='+', float c=0.0){
    float hasil;
    if(b == '+'){hasil = a+c;cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;}
    else if(b == '-'){hasil = a-c;cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;}
    else if(b == '*'){hasil = a*c;cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;}
    else if(b == '/'){
        if(c == 0){cout<<a<<" "<<b<<" "<<c<<" = "<<"Tidak terdefinisi";}
        else{hasil = a/c;cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;}
    }
    else if(b == '^'){
        if(c == 0){hasil = 1;cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;}
        if(c > 0){
            hasil = 1;
            for(int i = 1;i<=(int)c;i++){
                hasil *= a;
            }
            cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;
        }
        else{
            c = c*(-1);
            hasil = 1;
            for(int i = 1;i<=(int)c;i++){
                hasil *= a;
            }
            if(hasil == 0){cout<<a<<" "<<b<<" -"<<c<<" = "<<"Tidak terdefinisi";}
            else {cout<<a<<" "<<b<<" -"<<c<<" = 1/"<<hasil<<" atau "<<1/hasil;}
        }
    }
    else if(b == '%'){
        if(c == 0){cout<<a<<" "<<b<<" "<<c<<" = 0";}
        else if(c > 0){
            if(a < 0){
                hasil = a*-1;
                for(int i = (int)a*-1 ; i>=(int)c ; i-=(int)c){
                    hasil -= c;
                }
                cout<<a<<" "<<b<<" "<<c<<" = "<<hasil*-1;
            }
            else if(a > 0){
                hasil = a;
                for(int i = (int)a ; i>=(int)c ; i-=(int)c){
                    hasil -= c;
                }
                cout<<a<<" "<<b<<" "<<c<<" = "<<hasil;
            }
        }
        else{
            c *= -1;
            if(a < 0){
                hasil = a*-1;
                for(int i = (int)a*-1 ; i>=(int)c ; i-=(int)c){
                    hasil -= c;
                }
                cout<<a<<" "<<b<<" -"<<c<<" = "<<hasil*-1;
            }
            else if(a > 0){
                hasil = a;
                for(int i = (int)a ; i>=(int)c ; i-=(int)c){
                    hasil -= c;
                }
                cout<<a<<" "<<b<<" -"<<c<<" = "<<hasil;
            }
        }
    }
    else{cout<<"Error, operator tidak dikenal";}
}

int main() {
    cout<<"Masukan angka pertama"<<endl;
    cin>>nilaiSatu;
    cout<<"Masukan operasi yang akan dilakukan"<<endl;
    cin>>operasi;
    cout<<"Masukan angka kedua"<<endl;
    cin>>nilaiDua;
    calc(nilaiSatu,operasi,nilaiDua);
}