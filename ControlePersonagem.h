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

bool Fugir(bool axl[3], bool defeat[5], int SA) {
	int chance_de_passar = 25;
	int D100 = 0;

	D100 = rand() % 100 + 1;
	
	if (axl[0] == true && axl[1] == false) {
		chance_de_passar = 40;
	}
	if (axl[0] == true && axl[1] == true) {
		chance_de_passar = 70;
		for (int i = 0; i < 5; i++) {
			if (defeat[i] == true) {
				chance_de_passar += SA;
			}
		}
	}
	if (D100 <= chance_de_passar)
		return true;

	else
		return false;

bool Atacar(bool axl[3], bool defeat[5], int SA) {
	int chance_de_passar = 25;
	int D100 = 0;

	D100 = rand() % 100 + 1;

	if (axl[0] == true && axl[1] == false) {
		chance_de_passar = 60;
	}
	if (axl[0] == true && axl[1] == true) {
		chance_de_passar = 70;
		for (int i = 0; i < 5; i++) {
			if (defeat[i] == true) {
				chance_de_passar += SA;
			}
		}
	}

	if (D100 <= chance_de_passar) {

		switch (SA)
		{
		Sala_3: SA == 3;
			defeat[0] = true;
			break;
		Sala_5: SA == 5;
			defeat[1] = true;
			break;
		Sala_7: SA == 7;
			defeat[2] = true;
			break;
		Sala_11: SA == 11;
			defeat[3] = true;
			break;
		Sala_13: SA == 13;
			defeat[4] = true;
			break;
		}

		return true;
	}

	else
		return false;

#endif
