#include <cstdlib>
#include <iostream>
#include <map>
#include <fstream>

class arquivo {

	public:		
		void ler_arquivo(map<int, pessoa>mapPessoa,map<int, pessoa>:: iterator itP, pessoa p);
		void gravar_arquivo(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP);
		
	
};

void ler_arquivo(map<int, pessoa>mapPessoa,map<int, pessoa>:: iterator itP, pessoa p){
	
	string mensagem;
	int quarto;
	string nome;
	int diarias;
	
	fstream arq("arquivo.txt",ios::in);
    if(arq.fail() == 1){
      cout << "O arquivo a ser lido nao esta gravado em disco" << endl;
      return;
    }
    

   		while(!arq.eof()){
       
	   		arq >> quarto >> nome >> diarias;   		
	     
      		mapPessoa[quarto] = pessoa(nome,diarias);
    	
		
        }
     arq.close();
    }

void gravar_arquivo(map<int, pessoa>mapPessoa, map<int, pessoa>:: iterator itP){
	
	ofstream arq;
	arq.open("arquivo.txt", ios::trunc);
	cout << "Gravando..." << endl;
	
    for(itP = mapPessoa.begin() ; itP != mapPessoa.end(); itP++) {
		
			arq << itP->first 
				<< "\t" << itP->second.getnome()
				<< "\t" << itP->second.getdiarias() << "\n";
	}
	
	cout << "Dados gravados com sucesso..." << endl;
    
    arq.close();
}
