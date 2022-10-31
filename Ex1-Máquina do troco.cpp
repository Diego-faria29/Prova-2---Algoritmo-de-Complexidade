#include <iostream>

using namespace std;

void troco(float V_troco){
 	
    enum{moeda1,moeda050,moeda025,moeda010,moeda05,moeda001};

    int quantidade_moedas[6];

    quantidade_moedas[moeda1] = (int)(V_troco/1); // quantas moedas deste valor serão necessárias
    V_troco = V_troco - (quantidade_moedas[moeda1]*1); //


    quantidade_moedas[moeda050] = (int)(V_troco/0.50);
    V_troco = V_troco - (quantidade_moedas[moeda050]*0.50);

    quantidade_moedas[moeda025] = (int)(V_troco/0.25);
    V_troco = V_troco - (quantidade_moedas[moeda025]*0.25);

    quantidade_moedas[moeda010] = (int)(V_troco/0.10);
    V_troco = V_troco - (quantidade_moedas[moeda010]*0.10);

    quantidade_moedas[moeda05] = (int)(V_troco/0.05);
    V_troco = V_troco - (quantidade_moedas[moeda05]*0.05);

    quantidade_moedas[moeda001] = (int)(V_troco/0.01) +1;
    V_troco = V_troco - (quantidade_moedas[moeda001]*0.01);

    cout<<"\n\nMoedas de R$ 1,00: "<<quantidade_moedas[moeda1];
    cout<<"\nMoedas de R$ 0,50: "<<quantidade_moedas[moeda050];
    cout<<"\nMoedas de R$ 0,25: "<<quantidade_moedas[moeda025];
    cout<<"\nMoedas de R$ 0,10: "<<quantidade_moedas[moeda010];
    cout<<"\nMoedas de R$ 0,05: "<<quantidade_moedas[moeda05];
    cout<<"\nMoedas de R$ 0,01: "<<quantidade_moedas[moeda001];
}


int main(){
    float V_troco;
    cout << "----------- Maquina do Troco -----------\n\n";
    
    cout << "Digite o valor desejado de troco: \n" << endl;
    cin>>V_troco;
	
	cout << "\n\nVoce pode entregar as seguintes moedas, para utilizar o menor numero:";
    troco(V_troco);
	cout << "\n";
    return 0;
}