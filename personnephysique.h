#ifndef PERSONNEPHYSIQUE_H
#define PERSONNEPHYSIQUE_H
#include "proprietaire.h"

class Banque;

class Personnephysique:public Proprietaire
{
private:
	std::string m_nom;
	std::string m_adresse;
	std::string m_datedenaissance;
	friend Banque;
	Personnephysique(std::string _nom, std::string _adresse, std::string _datedenaissance);
	Personnephysique(Personnephysique const & pers);
public:
	std::string const & get_adresse() const;
	std::string get_adressepostale() const;
	std::string const & get_nom() const;
	std::ostream& out(std::ostream& _stream)const;
	std::string const & get_datedenaissance() const;
	~Personnephysique();
	
};

#endif