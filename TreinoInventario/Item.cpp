#include"Item.h"

Item::Item(std::string nomeItem, float pesoItem) {
	nome = nomeItem;
	pesoUnidade = pesoItem;
}

void Item::AdicionarUnidade(int quantidadeItem) {
	if (quantidadeItem <= 0) {
		return;
	}
	quantidade += quantidadeItem;
}

std::string Item::NomeItem() {
	return nome;
}

int Item::QuantidadeItem() {
	return quantidade;
}

float Item::PesoTotalItem() {
	return quantidade * pesoUnidade;
}