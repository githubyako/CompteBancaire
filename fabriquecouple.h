#ifndef FABRIQUECOUPLE_H
#define FABRIQUECOUPLE_H
#include "fabriqueproprietaire.h"
#include "personnephysique.h"

class fabriqueCouple:public fabriqueProprietaire
{
public:
	Proprietaire* creerProprietaire(Personnephysique const & _p1, Personnephysique const & _p2);
	~fabriqueCouple();
};
#endif