#ifndef COUPLE_H
#define COUPLE_H
#include "proprietaire.h"
#include "personnephysique.h"

class Banque;

class Couple:public Proprietaire
{
private:
	friend Banque;
	Personnephysique * m_p1;
	Personnephysique * m_p2;
	Couple(Couple * _couple);
	Couple(Personnephysique * _p1, Personnephysique * _p2);
	~Couple();
public:
	std::string const & get_adresse() const;
	std::string get_adressepostale() const;
	std::string const & get_nom() const;
	std::ostream& out(std::ostream& _stream)const;
};

#endif