#include <iostream>
#include "fabriquecouple.h"
#include "fabriquepersonnephysique.h"
#include "fabriqueproprietaire.h"
#include "fabriquesociete.h"
#include "couple.h"
#include "societe.h"

int main(int argc, char **argv) {
    fabriquePersonnephysique fabpers;
	fabriqueCouple fabcoupl;
	fabriqueSociete fabsoc;
	Personnephysique che = fabpers.creerProprietaire("Ernesto Guevara", "10 rue des lilas 75015 Paris", "10/10/1234");
	Personnephysique jose = fabpers.creerProprietaire("Jose Delacour", "2 chemin des biches 75015 Paris", "12/13/1544");
	Personnephysique alf = fabpers.creerProprietaire("Alfred Monseigneur", "5 rue des cuillers 75015 Paris", "5/15/1232");
	Personnephysique gina = fabpers.creerProprietaire("Gina Guevara", "10 rue des lilas 75015 Paris", "10/10/1234");
	Couple guevara = fabcoupl.creerProprietaire(che,gina);
	Societe panzani = fabsoc.creerProprietaire("Panzani", "5 rue du bifton", alf);
	
    return 0;
}
