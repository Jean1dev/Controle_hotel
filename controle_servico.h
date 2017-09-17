#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;

class service {
	
	private:
		string servico;
		double valor;
		
	public:
		service();
		service(string servico, double valor);
		~service();
		void setservice(string servico);
		void setvalor (double valor);
		string getservice();
		double getvalor();
		void imprimir();
	
};

service::service() {

}

service::service(string servico, double valor) {
	
	this->servico = servico;
	this->valor = valor;
	
}

service::~service() {
	
}

void service::setservice(string servico) {
	
	this-> servico = servico;
	
}

void service::setvalor(double valor) {
	
	this-> valor = valor;
	
}

string service::getservice() {
	
	return servico;
}

double service::getvalor() {
	
	return valor;
}

void service::imprimir() {
	
	cout << "Serviço: " << servico << "Valor: R$ " << valor ;
	
}
