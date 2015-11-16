#include <iostream>
#include "banque.h"

int main(int argc, char **argv) {
	Banque cmutuel;
	Proprietaire* che = cmutuel.creerProprietaire("Ernesto Guevara", "10 rue des lilas 75015 Paris", "10/10/1234");
	Proprietaire* JDE = cmutuel.creerProprietaire("Jose Delacour", "2 chemin des biches 75015 Paris", "12/13/1544");
	Proprietaire* gina = cmutuel.creerProprietaire("Gina Guevara", "10 rue des lilas 75015 Paris", "10/10/1234");
	Proprietaire* coupleGuevara = cmutuel.creerProprietaire(che,gina);
	Proprietaire* panzani = cmutuel.creerProprietaire("Panzani", "5 rue du bifton", JDE);
	Comptebancaire* cptChe = cmutuel.creerComptebancaire("CC",che);
    return 0;
}
