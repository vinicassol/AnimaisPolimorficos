#include "Preguica.h"
#include "Cavalo.h"
#include "Cachorro.h"

int main()
{

	// Não consigo alocar um objeto de classe abstrata
	//Animal a;

	/*
	Posso definir um ponteiro pra classe abstrata e alocar nela um objeto da classe herdeira
	Animal *a;
	a = new Preguica;
	a->Comunicar();
	*/

	Preguica p;
	p.Comunicar();
	p.Movimentar();

	Cavalo c;
	c.Comunicar();
	c.Movimentar();

	Cachorro doguinho;
	doguinho.Comunicar();
	doguinho.Movimentar();

	system("pause");

	return 0;
}