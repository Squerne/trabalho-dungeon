#ifndef ControlePersonagem_h
#define ControlePersonagem_h
#include "stdafx.h"
#include "iostream"
#include <string>

int IrParaEsquerda(int atual, bool mapa[13][13]);
int IrParaDireita(int atual, bool mapa[13][13]);
bool PegarItem(int aux);
bool Fugir();
bool Atacar();

int IrParaEsquerda(int atual, bool mapa[13][13]) {
	for (int i = 0; i < 13; i++) {
		if (mapa[atual][i] == true) {
			atual = i;
		}
	}
	return atual;

}

int IrParaDireita(int atual, bool mapa[13][13]) {
	for (int i = 12; i >= 0; i--) {
		if (mapa[atual][i] == true) {
			atual = i;
		}
	}
	return atual;
}

bool PegarItem(int aux) {
	if (aux == 1) {
		return true;
	}
	if (aux == 2) {
		return false;
	}
	
}

bool Fugir() {
	return true;
}

bool Atacar() {
	return true;
}

#endif
