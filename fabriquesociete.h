#ifndef FABRIQUESOCIETE_H
#define FABRIQUESOCIETE_H
#include "fabriqueproprietaire.h"
#include "personnephysique.h"
class fabriqueSociete:public fabriqueProprietaire
{
public:
	Proprietaire* creerProprietaire(std::string _nom, std::string _adresse, Personnephysique const & _gerant);
	~fabriqueSociete();
	
};
#endif