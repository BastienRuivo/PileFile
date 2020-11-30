#include "../header/Pile.h"
#include <iostream>
#include <fstream>

using namespace std;

Pile::Pile()
{
	t = TableauDynamique();
}

void Pile::afficher() const
{
	t.afficher();
}

ElementP Pile::consulterSommet() const
{
	return t.valeurIemeElement(0);
}

void Pile::depiler()
{
	t.supprimerElement(0);
}

void Pile::empiler(ElementP e)
{
	t.ajouterElement(e);
}

bool Pile::estVide() const
{
	return t.taille_utilisee == 0;
}

Pile::~Pile()
{
	t.~TableauDynamique();
}