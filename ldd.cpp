#include "ldd.h"
float Ldd::s_interestRate = 1.0;

Ldd::Ldd(Proprietaire* _proprio): Comptebancaire(_proprio)
{

}

Ldd::Ldd(const Ldd& _ldd):Comptebancaire(_ldd)
{}

void Ldd::appliquerInterets()
{
	this->changesolde(this->getsolde()*s_interestRate/100);
}

void Ldd::changeInterestRate(float _newRate)
{
	s_interestRate=_newRate;
}
