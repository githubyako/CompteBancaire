#include "lep.h"
float Lep::s_interestRate = 1.5;

Lep::Lep(Proprietaire* _proprio): Comptebancaire(_proprio)
{

}

Lep::Lep(const Lep& _lep):Comptebancaire(_lep)
{}

void Lep::appliquerInterets()
{
	this->changesolde(this->getsolde()*s_interestRate/100);
}

void Lep::changeInterestRate(float _newRate)
{
	s_interestRate=_newRate;
}
