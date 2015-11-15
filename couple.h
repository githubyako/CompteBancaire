#ifndef COUPLE_H
#define COUPLE_H
#include "proprietaire.h"
#include "personnephysique.h"
#include "fabriquecouple.h"

class Couple:public Proprietaire
{
private:
	friend fabriqueCouple;
	Personnephysique const & m_p1;
	Personnephysique const & m_p2;
	Couple(Couple const & _couple);
	Couple(Personnephysique const & _p1, Personnephysique const & _p2);
public:
	~Couple();
	std::string const & get_adresse() const;
	std::string get_adressepostale() const;
	std::string const & get_nom() const;
	std::ostream& out(std::ostream& _stream)const;
};

#endif