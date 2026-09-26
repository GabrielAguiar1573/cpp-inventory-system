#pragma once
#include <string>

class Item {
private:
	std::string nome;
	int quantidade = 0;
	float pesoUnidade;
public:
	void AdicionarUnidade(int);
	Item(std::string, float);
	int QuantidadeItem();
	float PesoTotalItem();
	std::string NomeItem();
};