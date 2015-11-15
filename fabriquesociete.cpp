#include "fabriquesociete.h"
#include "societe.h"

fabriqueSociete::~fabriqueSociete()
{

}

Proprietaire* fabriqueSociete::creerProprietaire(std::string _nom, std::string _adresse, const Personnephysique& _gerant)
{
	Societe* soc = new Societe(_nom,_adresse,_gerant);
	return soc;
}
