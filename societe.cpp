#include "societe.h"

Societe::Societe(const Societe& _soc):m_nom(_soc.m_nom),m_adresse(_soc.m_adresse),m_gerant(_soc.m_gerant)
{

}

Societe::Societe(std::string _nom, std::string _adresse, Personnephysique* _gerant)
:m_nom(_nom),m_adresse(_adresse),m_gerant(_gerant)
{
	
}

Societe::~Societe()
{

}

std::string const& Societe::get_adresse() const
{
	return m_adresse;
}

std::string Societe::get_adressepostale() const
{
	return m_nom + ", " + m_adresse;
}

std::string const& Societe::get_nom() const
{
	return m_nom;
}

std::ostream& Societe::out(std::ostream& _stream) const
{
	_stream << "Nom = " << m_nom << ", Adresse = " << m_adresse << ", Gerant = " << m_gerant;
}
