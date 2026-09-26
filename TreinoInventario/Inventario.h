#pragma once
#include "Item.h"
#include <list>

class Inventario {
private:
	std::list <Item*> itens;
public:
	void AdicionarItem(Item*);
	void MostrarItens();
	float PesoTotalInventario();
};