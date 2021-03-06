#include "comptebancaire.h"
#include "comptecourant.h"
#include "ldd.h"
#include "lep.h"
int Comptebancaire::s_idc;

Comptebancaire::Comptebancaire(Proprietaire* _proprio):m_id(s_idc++),m_proprio(_proprio)
{

}

Comptebancaire::Comptebancaire(const Comptebancaire& cptb)
{

}

Comptebancaire::~Comptebancaire()
{
	
}


float Comptebancaire::getsolde() const
{
	return m_solde;
}

void Comptebancaire::changesolde(float _diff)
{
	m_solde+=_diff;
}


Proprietaire const* Comptebancaire::getProprio() const
{
	return m_proprio;
}




bool Comptebancaire::retirerEspeces(float _cash)
{
	Comptecourant * tempc = dynamic_cast<Comptecourant*>(this);
	Ldd * templ = dynamic_cast<Ldd*>(this);
	Lep * templep = dynamic_cast<Lep*>(this);
	if(tempc!=nullptr && _cash>0 && (tempc->getsolde() - _cash > -(tempc->getDecAut()))){
		
		m_solde-=_cash;
	}else if(templ!=nullptr && _cash>0 && (templ->getsolde() - _cash > 15)){
		
		m_solde-=_cash;
	}else if(templep!=nullptr && _cash>0 && (templep->getsolde() - _cash > 30)){
		m_solde-=_cash;
	}else{
		return 0;	
	}
}

bool Comptebancaire::verserEspeces(float _cash)
{
	Comptecourant * tempc = dynamic_cast<Comptecourant*>(this);
	Ldd * templ = dynamic_cast<Ldd*>(this);
	Lep * templep = dynamic_cast<Lep*>(this);
	if(_cash > 0 && tempc!=nullptr){ // possibilité de tout regrouper en un seul if / else illisible
		m_solde+=_cash;
		return 1;
	}else if(_cash > 0 && templ!=nullptr && (templ->getsolde() + _cash < 12000)){
		m_solde += _cash;
		return 1;
	}else if(_cash > 0 && templep!=nullptr && (templep->getsolde() + _cash < 7700)){
		m_solde += _cash;
		return 1;
	}else{
		return 0;
	}
}

bool Comptebancaire::Virement(Comptebancaire* _debiteur, Comptebancaire* _crediteur, float _montant)
{
	Comptecourant * tempc = dynamic_cast<Comptecourant*>(_debiteur);
	Ldd * templ = dynamic_cast<Ldd*>(_debiteur);
	Lep * templep = dynamic_cast<Lep*>(_debiteur);
	if(tempc!=nullptr && _montant>0 && (tempc->getsolde() - _montant > -(tempc->getDecAut()))){
		if(_debiteur->getProprio()->get_nom() != _crediteur->getProprio()->get_nom()){
			_debiteur->changesolde(-1);
		}
		_debiteur->changesolde(-_montant);
		_crediteur->changesolde(_montant);
		return 1;
	}else if(templ!=nullptr && _montant>0 && (templ->getsolde() - _montant > 15)){
		_debiteur->changesolde(-_montant);
		_crediteur->changesolde(_montant);
		return 1;
	}else if(templep!=nullptr && _montant>0 && (templep->getsolde() - _montant > 30)){
		_debiteur->changesolde(-_montant);
		_crediteur->changesolde(_montant);	
	}else{
		return 0;	
	}
}
