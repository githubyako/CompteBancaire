#include "personnephysique.h"

Personnephysique::Personnephysique(std::string _nom, std::string _adresse, std::string _datedenaissance)
:m_nom(_nom),m_adresse(_adresse),m_datedenaissance(_datedenaissance)
{

}

Personnephysique::Personnephysique()
{

}

Personnephysique::Personnephysique(const Personnephysique& pers)
{

}

Personnephysique::~Personnephysique()
{

}


std::string const & Personnephysique::get_adresse() const
{
	return m_adresse;
}

std::string Personnephysique::get_adressepostale() const
{
	return m_nom + ", " + m_adresse;
}

std::string const & Personnephysique::get_nom() const
{
	return m_nom;
}

std::ostream& Personnephysique::out(std::ostream& _stream) const
{
	_stream << "Nom = " << m_nom << ", Adresse = " << m_adresse << ", Date de naissance = " << m_datedenaissance;
	return _stream;
}

std::string const& Personnephysique::get_datedenaissance() const
{
	return m_datedenaissance;
}

