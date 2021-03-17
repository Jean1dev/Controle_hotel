<<<<<<< HEAD
#include <cstdlib>
#include <iostream>
#include <map>



class utilitario {
	
	private:
		int numero;
		int randomNumber;
	
	public:
		bool verifica_quarto(int numero, map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP);
		int gera_quarto(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP);
		double  calcula_valor(int quarto,double valor, map<int, double>, map<int, double>:: iterator itC);
		void setnumero(int numero);
		void setrandomNumber(int randomNumber);
		int getnumero();
		int getrandomNumber();
	
};

bool utilitario::verifica_quarto(int numero, map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP) {
	
	itP = mapPessoa.find(numero);
	if(itP != mapPessoa.end()) {
		 
		 return true;
		
	}
	
	else {
		
		return false;
		
	}
	
	
}

int utilitario::gera_quarto(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP) {
	
			
	randomNumber = rand() % 100 + 1;
	
	while (verifica_quarto(randomNumber, mapPessoa, itP)) {
	
		randomNumber = rand() % 100 + 1;
	
	}
	
	return randomNumber;
};

/*double utilitario::calcula_valor(int quarto,double valor, map<int, double>mapConta, map<int, double>:: iterator itC){
	double valor_a_ser_retornado ;
	
	itC = mapConta.find(quarto) ;                               NÃO UTILIZADO ATÉ O MOMENTO
	valor_a_ser_retornado = itC->second + valor ;
	
	return valor_a_ser_retornado ;
}*/

void utilitario::setnumero(int numero){
	
	this->numero = numero;
}

void utilitario::setrandomNumber(int randomNumber) {
	
	this->randomNumber = randomNumber;
}

int utilitario::getnumero() {
	
	return numero;
}

int utilitario::getrandomNumber() {
	
	return randomNumber;
}
=======
#include <cstdlib>
#include <iostream>
#include <map>



class utilitario {
	
	private:
		int numero;
		int randomNumber;
	
	public:
		bool verifica_quarto(int numero, map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP);
		int gera_quarto(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP);
		double  calcula_valor(int quarto,double valor, map<int, double>, map<int, double>:: iterator itC);
		void setnumero(int numero);
		void setrandomNumber(int randomNumber);
		int getnumero();
		int getrandomNumber();
	
};

bool utilitario::verifica_quarto(int numero, map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP) {
	
	itP = mapPessoa.find(numero);
	if(itP != mapPessoa.end()) {
		 
		 return true;
		
	}
	
	else {
		
		return false;
		
	}
	
	
}

int utilitario::gera_quarto(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP) {
	
			
	randomNumber = rand() % 100 + 1;
	
	while (verifica_quarto(randomNumber, mapPessoa, itP)) {
	
		randomNumber = rand() % 100 + 1;
	
	}
	
	return randomNumber;
};

/*double utilitario::calcula_valor(int quarto,double valor, map<int, double>mapConta, map<int, double>:: iterator itC){
	double valor_a_ser_retornado ;
	
	itC = mapConta.find(quarto) ;                               NÃO UTILIZADO ATÉ O MOMENTO
	valor_a_ser_retornado = itC->second + valor ;
	
	return valor_a_ser_retornado ;
}*/

void utilitario::setnumero(int numero){
	
	this->numero = numero;
}

void utilitario::setrandomNumber(int randomNumber) {
	
	this->randomNumber = randomNumber;
}

int utilitario::getnumero() {
	
	return numero;
}

int utilitario::getrandomNumber() {
	
	return randomNumber;
}
>>>>>>> origin/master
