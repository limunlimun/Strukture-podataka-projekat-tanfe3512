#ifndef _OSOBA_H
#define _OSOBA_H

#include <string>
#include <iostream>
class Osoba{
	private: 
	std::string _ime;
	std::string _prezime;
	unsigned long int _jmbg=0; //za glumce,producente i scenariste ovo polje ce imati vrijednost 0
	
	public:
	
	Osoba()=default;
	
	Osoba(std::string ime,std::string prezime,unsigned long int jmbg):_ime(ime),_prezime(prezime),_jmbg(jmbg){};
	
	~Osoba()=default;
	
	Osoba(Osoba &o){_ime=o._ime;_prezime=o._prezime;}
	
	Osoba(const Osoba & o){
  _ime=o._ime;
  _prezime=o._prezime;
  _jmbg=o._jmbg;
	}
	void operator=(const Osoba & o){
  _ime=o._ime;
  _prezime=o._prezime;
  _jmbg=o._jmbg;
	}
	void operator=(Osoba&& o)
	{
	
  _ime=std::move(o._ime);
  _prezime=std::move(o._prezime);
  _jmbg=std::move(o._jmbg);
	}

	std::string getIme(){return _ime;};
	
	std::string getPrezime(){return _prezime;}
	
	unsigned long int getJMBG(){return _jmbg;}
	
	void setIme(std::string x) { _ime=x;	}
	
	void setPrezime(std::string x) {_prezime=x;	}
	
	void setJMBG(int x)	{_jmbg=x;	}
	
	void printOsoba(){
  std::cout<<_ime<<" "<<_prezime;
}
};

#endif
