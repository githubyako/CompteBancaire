#ifndef LEP_H
#define LEP_H
#include "comptebancaire.h"

class Banque;
class Lep:public Comptebancaire{
private:
	friend Banque;
	static float s_interestRate;
	Lep(Proprietaire* _proprio);
	Lep(Lep const & _lep);
public:
	static void changeInterestRate(float _newRate);
	void appliquerInterets();
};

#endif