#include <iostream>
using namespace std;

class sefa{
public:
sefa(){
cout<<"Sistem calismaya basladi"<<endl;
}
~sefa(){
cout<<"Sistem basarili bir sekilde calismayi bitirdi "<<endl;
}
double boy;
double kilo;
friend class hesaplayici;
};
class hesaplayici{
public:
hesaplayici(){

cout<<"Hesaplaniyor"<<endl;
}
~hesaplayici(){

cout<<endl<<"Hesaplama bitti"<<endl;
}
void hesaplama(double x,double y){
sonuc=(x*x)/y;

}
double dondur(){
return sonuc;
}
private:
double sonuc;
};

int main(){

sefa kisi1;
cout<<"Lutfen ilk once boy sonra kilo giriniz"<<endl;
cin>>kisi1.boy>>kisi1.kilo;
hesaplayici kisi2;
kisi2.hesaplama(kisi1.boy,kisi1.kilo);
cout<<kisi2.dondur();


return 0;
}
