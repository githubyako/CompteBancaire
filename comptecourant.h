#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
#include "comptebancaire.h"
class Banque;
class Comptecourant:public Comptebancaire
{
private:
	friend Banque;
	float m_decouvertautorise;
	Comptecourant(Comptecourant const & _compte);
	Comptecourant(Proprietaire * _proprio);
public:
	void modifierDecAut(float _newDecAut);
	float getDecAut() const;
};
#endif