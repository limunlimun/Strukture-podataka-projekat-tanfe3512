#include "admin.h"
#include "lista_filmova.h"

#include <iostream>
using namespace std;

int main(){
  Admin admin;
  cout<<"Unesite korisnicko ime i password za administratora: ";
  string ime;
  string lozinka;
  cin>>ime>>lozinka;
  if (!admin.login(ime,lozinka)) {cout<<"Pogresan unos.Program se terminira!"<<endl;
  return 0;
}
  int izlaz=0;
  int odabir=0;
  while(izlaz!=1){
    
    cout<<"Ponudjenje opcije:"<<endl;
    cout<<" 1. Pregled sadrzaja videoteke"<<endl;
    cout<<" 2. Pretraga videoteke po nazivu filma"<<endl;
    cout<<" 3. Ispis svih podataka za odabrani film"<<endl;
    cout<<" 4. Dodavanje novog filma"<<endl;
    cout<<" 5. Brisanje filma iz videoteke"<<endl;
    cout<<" 6. Azuriraj postojeci film"<<endl;
    cout<<" 7. Pregled korisnika"<<endl;
    cout<<" 8. Pretraga korisnika"<<endl;
    cout<<" 9. Dodavanje korisnika"<<endl;
    cout<<"10. Brisanje korisnika"<<endl;
    cout<<"11. Azuriranje korisnika"<<endl;
    cout<<"12. Pregled posudjenih filmova za odredjenog korisnika"<<endl;
    cout<<"13. Pregled historije posudjivanja za odredjenog korisnika"<<endl;
    cout<<"14. Izlaz iz programa"<<endl;
    cout<<endl<<"Unesite broj odabrane opcije: ";
    cin.clear();
    cin>>odabir;
    


  }

}