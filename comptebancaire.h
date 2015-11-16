#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include "proprietaire.h"
class Banque;
class Comptebancaire{
private:
	friend Banque;
	Proprietaire * m_proprio;
	static int s_idc;
	int m_id;
	float m_solde;
	
protected:
	void changesolde(float _diff);
	Comptebancaire(Comptebancaire const & cptb);
	Comptebancaire(Proprietaire * _proprio);
public:
	virtual ~Comptebancaire();
	bool verserEspeces(float _cash);
	bool retirerEspeces(float _cash);
	static bool Virement(Comptebancaire * _debiteur, Comptebancaire * _crediteur, float _montant);
	float getsolde() const;
	Proprietaire const * getProprio() const;
};




#endif