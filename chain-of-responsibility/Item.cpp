#include "Item.h"

// Construtor 
Item::Item(string N, bool E, int Es, int V){
	name = N;
	especial = E;
	estoque = Es;
	valor = V;
}

void Item::setName (string N){
	name = N;
}
string Item::getName (){
	return name;
}

void Item::setEspecial( bool E){
	especial = E;
}
bool Item::getEspecial (){
	return especial;
}

void Item::setEstoque (int Es){
	estoque = Es;
}
int Item::getEstoque(){
	return estoque;
}

void Item::setValor (int V){
	valor = V;
}
int Item::getValor(){
	return valor;
}
