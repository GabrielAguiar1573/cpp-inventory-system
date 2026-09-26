#include "Inventario.h"
#include <iostream>
#include "Item.h"

void Inventario::MostrarItens() {
	for (Item* item : itens) {
		std::cout << item -> NomeItem() 
				  << " | Quantidade: " << item -> QuantidadeItem() 
				  << " | Peso total: " << item -> PesoTotalItem() 
				  << std::endl;
	}
}

void Inventario::AdicionarItem(Item* item) {
	itens.push_back(item);
}

float Inventario::PesoTotalInventario() {
	float pesoTotal = 0;
	for (Item* item : itens) {
		pesoTotal += item->PesoTotalItem();
	}
	return pesoTotal;
}