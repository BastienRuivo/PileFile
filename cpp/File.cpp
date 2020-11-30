#include "../header/File.h"
#include <iostream>

using namespace std;

File::File()
{
	Liste l;
}

void File::enfiler(ElementF e)
{
	l.ajouterEnTete(e);
}

void File::defiler()
{
	l.supprimerTete();
}

bool File::estVide() const
{
	l.estVide();
}

unsigned int File::nbElements() const
{
	return l.nbElements();
}

File& File::operator=(const File & F)
{
	File R;
	R.l = F.l;
	return R;
}

ElementF File::premierDeLaFile() const
{
	return l.iemeElement(0);
}

File::~File()
{
	l.~Liste();
}

