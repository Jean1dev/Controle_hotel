#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;

class pessoa {
	
	private:
		string nome;
		int diarias;
	
		
	public: 
		pessoa();
		pessoa(string nome, int diarias);
		~pessoa();
		void setnome(string nome);
		void setdiarias(int diarias);
		void setvlconta(double vlconta);
		string getnome();
		int getdiarias();
		double getvlconta();
		void imprimir();
	
};

pessoa::pessoa() {
}

pessoa::~pessoa() {
	
}

pessoa::pessoa(string nome, int diarias) {
	
	this->nome = nome;
	this->diarias = diarias;
	
}

void pessoa::setnome(string nome) {
	
	this->nome = nome;
	
}

void pessoa::setdiarias(int diarias) {
	
	this->diarias = diarias;
	
}


string pessoa::getnome() {
	
	return nome;
	
}

int pessoa::getdiarias() {
	
	return diarias;
	
}


void pessoa::imprimir() {
	
	cout << "O nome do cliente e: " << nome << "\nE a quantidade de diarias e: " << diarias << endl;

}
