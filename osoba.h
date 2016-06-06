#ifndef _OSOBA_H
#define _OSOBA_H

#include <string>

class Osoba{
private: 
std::string _ime;
std::string _prezime;
unsigned long int _jmbg=0; //za glumce,producente i scenariste ovo polje ce imati vrijednost 0
public:
Osoba()=default;
Osoba(std::string ime,std::string prezime,unsigned long int jmbg):_ime(ime),_prezime(prezime),_jmbg(jmbg){};
~Osoba()=default;
Osoba(const Osoba & o){
  _ime=o._ime;
  _prezime=o._prezime;
  _jmbg=o._jmbg;
}
std::string getIme(){return _ime;};
std::string getPrezime(){return _prezime;}
unsigned long int getJMBG(){return _jmbg;}
};

#endif