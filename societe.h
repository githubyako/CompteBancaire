#ifndef SOCIETE_H
#define SOCIETE_H
#include "proprietaire.h"
#include "personnephysique.h"

class Banque;

class Societe:public Proprietaire
{
private:
	friend Banque;
	std::string m_nom;
	std::string m_adresse;
	Personnephysique * m_gerant;
	Societe(Societe const & _soc);
	Societe(std::string _nom, std::string _adresse, Personnephysique * _gerant);
	~Societe();
public:
	std::string const & get_adresse() const;
	std::string get_adressepostale() const;
	std::string const & get_nom() const;
	std::ostream& out(std::ostream& _stream)const;

  
};



#endif