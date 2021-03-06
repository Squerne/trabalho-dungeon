// main-dungeon.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "iostream"
#include <string>
#include "Jogo.h"
#include "ExibicaoMapaGerado.h"
#include "GeracaoMapa.h"
#include "ControlePersonagem.h"

using namespace std;	
int Escolha(int novaSala, bool mapa[13][13]) {
	int lados = 0;

	do {
		//cout de escolha
		cin >> lados;

		if (lados == 1) {
			return IrParaDireita(novaSala, mapa);
		}
		if (lados == 2) {
			return IrParaEsquerda(novaSala, mapa);
		}
		else {
			cout << "opção invalida ...\n";
		}
	} while (lados != 1 || lados != 2);
}

int main()
{
	int salaAtual = 1;
	bool monstrosDerrotados[5] = { false };
	bool Dungeon[13][13] = { false };
	bool itens[3] = { false };

	inicializarJogo();

	while (fecharJogo() == false){
		salaAtual = Escolha(salaAtual, Dungeon);
		if (salaAtual == 2 || salaAtual == 4) {
			int axl = 0;
			//cin e cout de var
			itens[salaAtual / 2 - 1 ] = PegarItem(axl);
		}
		if (salaAtual == 3 || salaAtual == 5 || salaAtual == 7 || salaAtual == 11 || salaAtual == 13) {
			int axl = 0;
			if (itens[0] == true && itens[1] == false) {
				//cout text
				axl = 1;
			}
			if (itens[0] == false && itens[1] == true) {
				//cout text
				axl = 2;
			}
			else{
			//cin e cout escolha da sala
			}
			do {
				if (axl == 1) {
					Fugir();
				}
				if (axl == 2) {
					Atacar();
				}
			} while (axl == 1 || axl == 2);
		}
	}

    return 0;
}






