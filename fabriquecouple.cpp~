#include "fabriquecouple.h"
#include "couple.h"

fabriqueCouple::~fabriqueCouple()
{

}

Proprietaire* fabriqueCouple::creerProprietaire(const Personnephysique& _p1, const Personnephysique& _p2)
{
	if(_p1.get_adresse() == _p2.get_adresse()){
		Couple * cpl = new Couple(_p1,_p2);
		return cpl;
	}
}
