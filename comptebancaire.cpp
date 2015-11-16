#include "comptebancaire.h"
int Comptebancaire::s_idc;

Comptebancaire::Comptebancaire(const Proprietaire& _proprio,float _premierdepot):m_id(++s_idc),m_proprio(_proprio),m_solde(_premierdepot)
{

}

void Comptebancaire::retirerEspeces(float _cash)
{
  if(_cash > 0)
    m_solde -= _cash;
}

void Comptebancaire::verserEspeces(float _cash)
{
  if(_cash > 0)
      m_solde += _cash;
}
Comptebancaire::~Comptebancaire()
{

}

bool Comptebancaire::Virement(Comptebancaire& _debiteur, Comptebancaire& _crediteur, float _montant)
{
  if(_montant > 0){
    if(_debiteur.m_proprio.get_nom() != _crediteur.m_proprio.get_nom()){
      _debiteur.m_solde-=1;
    }
    _debiteur.m_solde-=_montant;
    _crediteur.m_solde+=_montant;
  }
}
