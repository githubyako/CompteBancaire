#ifndef FABRIQUEPERSONNEPHYSIQUE_H
#define FABRIQUEPERSONNEPHYSIQUE_H
#include "fabriqueproprietaire.h"

class fabriquePersonnephysique:public fabriqueProprietaire{
public:
	Proprietaire* creerProprietaire(std::string _nom, std::string _adresse, std::string _datedenaissance);
	~fabriquePersonnephysique();
};

#endif