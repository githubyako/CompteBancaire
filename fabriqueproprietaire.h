#ifndef FABRIQUEPROPRIETAIRE_H
#define FABRIQUEPROPRIETAIRE_H
#include <string>
#include "proprietaire.h"
class fabriqueProprietaire
{
private:
	
public:
	virtual ~fabriqueProprietaire();
	virtual Proprietaire* creerProprietaire()=0;
};

#endif