#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include "proprietaire.h"
class Comptebancaire{
private:
  Proprietaire const & m_proprio;
  static int s_idc;
  int m_id;
  float m_solde;
  Comptebancaire();
  Comptebancaire(Comptebancaire const & _compte);
  Comptebancaire(Proprietaire const & _proprio, float _premierdepot);
public:
  virtual ~Comptebancaire();
  
  void verserEspeces(float _cash);
  void retirerEspeces(float _cash);
  static bool Virement(Comptebancaire & _debiteur, Comptebancaire & _crediteur, float _montant);
};




#endif