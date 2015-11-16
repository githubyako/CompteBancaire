#ifndef BANQUE_H
#define BANQUE_H
#include <vector>
#include <string>
#include "personnephysique.h"
#include "couple.h"
#include "societe.h"
#include "proprietaire.h"
#include "comptebancaire.h"
class Banque{
private:
  std::vector<Proprietaire*> m_proprios;
  std::vector<Comptebancaire*> m_comptes;
  
public:
  Proprietaire* creerProprietaire(Proprietaire* _p1, Proprietaire* _p2); // couple
  Proprietaire* creerProprietaire(std::string _nom, std::string _adresse, Proprietaire * _gerant); // societe
  Proprietaire* creerProprietaire(std::string _nom, std::string _adresse, std::string _datedenaissance); // personnephysique
  Comptebancaire* creerComptebancaire(std::string & _ctype, Proprietaire * _proprio);
  
};

#endif
