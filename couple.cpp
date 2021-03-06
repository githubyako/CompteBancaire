#include "couple.h"

Couple::Couple(Couple* _couple)
{

}

Couple::Couple(Personnephysique* _p1, Personnephysique* _p2):m_p1(_p1),m_p2(_p2)
{

}


Couple::~Couple()
{

}

std::string const& Couple::get_adresse() const
{
	return m_p1->get_adresse();
}

std::string Couple::get_adressepostale() const
{
	return m_p1->get_nom() + " et " + m_p2->get_nom() + ", " + m_p1->get_adresse();
}

std::string const& Couple::get_nom() const
{
	return m_p1->get_nom() + " et " + m_p2->get_nom();
}

std::ostream& Couple::out(std::ostream& _stream) const
{
	_stream << m_p1 << " et " << m_p2;
}


