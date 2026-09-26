#include "Inventario.h"
#include "Item.h"
#include <iostream>

int main() {
	Item item1("Poção", 0.5);
	Item item2("Espada", 4.0);
	Item item3("Madeira", 2.0);

	item1.AdicionarUnidade(3);
	item2.AdicionarUnidade(1);
	item3.AdicionarUnidade(5);

	Inventario inventario;

	inventario.AdicionarItem(&item1);
	inventario.AdicionarItem(&item2);
	inventario.AdicionarItem(&item3);

	inventario.MostrarItens();

	std::cout << "Peso total do inventario: " << inventario.PesoTotalInventario() << std::endl;
}