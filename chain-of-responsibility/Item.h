#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item{
	private: 
		// Atributos
		string name;
		bool especial;
		int estoque;
		int valor;
		
	public: 
		// Construtor 
		Item(string N, bool E, int Es, int V);
		
		// Getters e Setters Name
		void setName (string N);
		string getName ();
		// Getters e Setters Especial
		void setEspecial( bool E);
		bool getEspecial ();
		// Getters e Setters Quantidade
		void setEstoque (int Q);
		int getEstoque();
		// Getters e Setters Estoque
		void setValor (int V);
		int getValor();
};

#endif // ITEM_H
