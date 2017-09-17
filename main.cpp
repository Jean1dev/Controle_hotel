<<<<<<< HEAD
#include <cstdlib>
#include <iostream>
#include <map>
#include <fstream> 
#include "dados_pessoa.h"
#include "controle_servico.h"
#include "utilitario.h"
#include "arquivo.h"
//#include "valor_conta.h" não sera utilizado até o momento

using namespace std;
	utilitario uti;
	arquivo arq;
	pessoa p;
	service s;
	
	map<int, pessoa>mapPessoa;
	map<string, service>mapServico;
	map<int, double>mapConta; // a chave desse mapa deve ser a mesmo que o mapPessoa, para poder vincular os dados
	map<int, pessoa>:: iterator itP;
	map<string, service>:: iterator itS;
	map<int, double>::iterator itC;
	
	

void menu() {
	
	

	system("cls");
	cout << " \n\t BEM VINDO AO HOTEL NIGGA DELUXE \n\n ";
	cout << "1) Fazer reserva de quarto " << endl;
	cout << "2) Limpar sua reservas " << endl;
	cout << "3) Listar quartos ocupados " << endl;
	cout << "4) Checar reserva " << endl;
	cout << "5) Pedir servico" << endl;
	cout << "6) Listar servicos " << endl;
	cout << "7) Valor total" << endl;
	cout << "8) Gravar reservas" << endl;
	cout << "0) Sair" << endl;
	
}

int main(int argc, char *argv[])
{
	int op;
	int quarto;
	string nome;
	int diarias; 
	string servico;
	double valor_diaria= 500.00; //inicia com o valor definido para a diaria
	
	ler_arquivo(mapPessoa, itP, p);// INICIA LENDO O ARQUIVO, SE TIVER
	
	mapServico.insert(make_pair("pacote 1", service("champagne deluxe", 5000.00)));
	mapServico.insert(make_pair("pacote 2", service("jantar gourmet supreme", 1000.00)));
	mapServico.insert(make_pair("pacote 3", service("acompanhante de luxo", 2000.00)));	
	
	menu();	
	cout << "  Escolha uma opcao acima: ";
	cin >> op;
	
	
	while(op != 0) {
	
	
	switch(op) {
		
		case 1: 
				int aux ;
				
				cout << "Digite seu nome completo: ";
				cin >> nome;
				cout << "Digite a diaria: ";
				cin >> diarias;
				p.setnome(nome);
				p.setdiarias(diarias);
				aux = uti.gera_quarto(mapPessoa, itP); //O VALOR RETORNADO PELA FUNÇÃO SERA O NUMERO DO QUARTO
				mapPessoa[aux] = pessoa(nome, diarias);
				
				diarias = valor_diaria * diarias ;
				mapConta.insert(make_pair(aux, diarias)); //O MAPCONTA DEVERA SEMPRE USAR O MAKE_PAIR NA PRIMEIRA INICIALIZAÇÃO
				
				
				break;
		
		
		case 2: cout << "Digite o numero do seu quarto: ";
				cin >> quarto;
				
				if(uti.verifica_quarto(quarto, mapPessoa, itP)) {
					
					mapPessoa.erase(quarto);
					
				}
				
				else {
					
					cout << "\nSua reserva nao existe \n";
					
				}
				
				break;	
				
				
				case 3: for(itP = mapPessoa.begin(); itP != mapPessoa.end(); itP ++){
			
						cout << "Quarto: " << itP->first << endl;
						itP->second.imprimir();
			
					}
		
				break;
			
			
				case 4: cout << "Digite o numero do seu quarto: ";
						cin >> quarto;
				
						if(uti.verifica_quarto(quarto, mapPessoa, itP)) {
							
							itP = mapPessoa.find(quarto);
							itP->second.imprimir(); // VER SE VAI IMPRIMIR CERTO
							
						}
				
						else {
					
							cout << "\nSua reserva nao existe \n";
					
						}
				
				break;	
						
						
				case 5: cout <<" Identifique-se, com seu numero de quarto";
						cin  >> quarto ;
						double teste;//VARIAVEL DE TESTE
						if(uti.verifica_quarto(quarto, mapPessoa, itP)){ //VERIFICA SE O QUARTO EXISTE
							cout<<" Reserva encontrada, aguarde"<<endl;
								for(itS = mapServico.begin(); itS != mapServico.end(); itS++){ // LISTA OS SERVIÇOS
									cout<< itS->first ;
									itS->second.imprimir() ;
								}
							cout <<" escolha o serviço"<<endl ;
							cin	 >> servico ;
							itS = mapServico.find(servico) ;
							
							itC = mapConta.find(quarto) ; 
							teste =itC->second + itS->second.getvalor() ;//SOMA O VALOR DO SERVIÇO PRA SER ADICIONADO NA CONTA
							//teste =uti.calcula_valor(quarto,itS->second, mapConta, itC);
							
							
							mapConta[quarto] =  teste; 
						}
						else{
							cout<<" Sua reserva não existe"<<endl;
						}
				break;
				
					
				case 6: cout<<" serviços disponiveis"<< endl;
						for(itS = mapServico.begin(); itS != mapServico.end(); itS++){ // LISTA OS SERVIÇOS
									cout<< itS->first ;
									itS->second.imprimir() ;
								}
				break;
				
				case 7: cout<<" identifique-se com o numero do quarto"<< endl;
						cin>>quarto ;
						if(uti.verifica_quarto(quarto, mapPessoa, itP)){
							itC = mapConta.find(quarto) ;
							cout<< itC->second ;
						}
						else
							cout<<" voce não tem reservas"<<endl;
				break;
				
				case 8:	gravar_arquivo(mapPessoa, itP);
					
				
				break;
			
				default: cout << "Opcao invalida!" ;
				
	
		
	}
	cout << "  Escolha uma opcao acima: ";
	cin >> op;
	
		
	}
	
		
	
	
	system("pause");
	return 0;
}


=======
#include <cstdlib>
#include <iostream>
#include <map>
#include <fstream> 
#include "dados_pessoa.h"
#include "controle_servico.h"
#include "utilitario.h"
#include "arquivo.h"
//#include "valor_conta.h" não sera utilizado até o momento

using namespace std;
	utilitario uti;
	arquivo arq;
	pessoa p;
	service s;
	
	map<int, pessoa>mapPessoa;
	map<string, service>mapServico;
	map<int, double>mapConta; // a chave desse mapa deve ser a mesmo que o mapPessoa, para poder vincular os dados
	map<int, pessoa>:: iterator itP;
	map<string, service>:: iterator itS;
	map<int, double>::iterator itC;
	
	

void menu() {
	
	

	system("cls");
	cout << " \n\t BEM VINDO AO HOTEL NIGGA DELUXE \n\n ";
	cout << "1) Fazer reserva de quarto " << endl;
	cout << "2) Limpar sua reservas " << endl;
	cout << "3) Listar quartos ocupados " << endl;
	cout << "4) Checar reserva " << endl;
	cout << "5) Pedir servico" << endl;
	cout << "6) Listar servicos " << endl;
	cout << "7) Valor total" << endl;
	cout << "8) Gravar reservas" << endl;
	cout << "0) Sair" << endl;
	
}

int main(int argc, char *argv[])
{
	int op;
	int quarto;
	string nome;
	int diarias; 
	string servico;
	double valor_diaria= 500.00; //inicia com o valor definido para a diaria
	
	ler_arquivo(mapPessoa, itP, p);// INICIA LENDO O ARQUIVO, SE TIVER
	
	mapServico.insert(make_pair("pacote 1", service("champagne deluxe", 5000.00)));
	mapServico.insert(make_pair("pacote 2", service("jantar gourmet supreme", 1000.00)));
	mapServico.insert(make_pair("pacote 3", service("acompanhante de luxo", 2000.00)));	
	
	menu();	
	cout << "  Escolha uma opcao acima: ";
	cin >> op;
	
	
	while(op != 0) {
	
	
	switch(op) {
		
		case 1: 
				int aux ;
				
				cout << "Digite seu nome completo: ";
				cin >> nome;
				cout << "Digite a diaria: ";
				cin >> diarias;
				p.setnome(nome);
				p.setdiarias(diarias);
				aux = uti.gera_quarto(mapPessoa, itP); //O VALOR RETORNADO PELA FUNÇÃO SERA O NUMERO DO QUARTO
				mapPessoa[aux] = pessoa(nome, diarias);
				
				diarias = valor_diaria * diarias ;
				mapConta.insert(make_pair(aux, diarias)); //O MAPCONTA DEVERA SEMPRE USAR O MAKE_PAIR NA PRIMEIRA INICIALIZAÇÃO
				
				
				break;
		
		
		case 2: cout << "Digite o numero do seu quarto: ";
				cin >> quarto;
				
				if(uti.verifica_quarto(quarto, mapPessoa, itP)) {
					
					mapPessoa.erase(quarto);
					
				}
				
				else {
					
					cout << "\nSua reserva nao existe \n";
					
				}
				
				break;	
				
				
				case 3: for(itP = mapPessoa.begin(); itP != mapPessoa.end(); itP ++){
			
						cout << "Quarto: " << itP->first << endl;
						itP->second.imprimir();
			
					}
		
				break;
			
			
				case 4: cout << "Digite o numero do seu quarto: ";
						cin >> quarto;
				
						if(uti.verifica_quarto(quarto, mapPessoa, itP)) {
							
							itP = mapPessoa.find(quarto);
							itP->second.imprimir(); // VER SE VAI IMPRIMIR CERTO
							
						}
				
						else {
					
							cout << "\nSua reserva nao existe \n";
					
						}
				
				break;	
						
						
				case 5: cout <<" Identifique-se, com seu numero de quarto";
						cin  >> quarto ;
						double teste;//VARIAVEL DE TESTE
						if(uti.verifica_quarto(quarto, mapPessoa, itP)){ //VERIFICA SE O QUARTO EXISTE
							cout<<" Reserva encontrada, aguarde"<<endl;
								for(itS = mapServico.begin(); itS != mapServico.end(); itS++){ // LISTA OS SERVIÇOS
									cout<< itS->first ;
									itS->second.imprimir() ;
								}
							cout <<" escolha o serviço"<<endl ;
							cin	 >> servico ;
							itS = mapServico.find(servico) ;
							
							itC = mapConta.find(quarto) ; 
							teste =itC->second + itS->second.getvalor() ;//SOMA O VALOR DO SERVIÇO PRA SER ADICIONADO NA CONTA
							//teste =uti.calcula_valor(quarto,itS->second, mapConta, itC);
							
							
							mapConta[quarto] =  teste; 
						}
						else{
							cout<<" Sua reserva não existe"<<endl;
						}
				break;
				
					
				case 6: cout<<" serviços disponiveis"<< endl;
						for(itS = mapServico.begin(); itS != mapServico.end(); itS++){ // LISTA OS SERVIÇOS
									cout<< itS->first ;
									itS->second.imprimir() ;
								}
				break;
				
				case 7: cout<<" identifique-se com o numero do quarto"<< endl;
						cin>>quarto ;
						if(uti.verifica_quarto(quarto, mapPessoa, itP)){
							itC = mapConta.find(quarto) ;
							cout<< itC->second ;
						}
						else
							cout<<" voce não tem reservas"<<endl;
				break;
				
				case 8:	gravar_arquivo(mapPessoa, itP);
					
				
				break;
			
				default: cout << "Opcao invalida!" ;
				
	
		
	}
	cout << "  Escolha uma opcao acima: ";
	cin >> op;
	
		
	}
	
		
	
	
	system("pause");
	return 0;
}


>>>>>>> origin/master
