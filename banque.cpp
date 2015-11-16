#include "banque.h"

Proprietaire* Banque::creerProprietaire(Personnephysique* _p1, Personnephysique* _p2)
{
      if(_p1->get_adresse() == _p2->get_adresse()){
	      Couple * cpl = new Couple(_p1,_p2);
	      m_proprios.push_back(cpl);
	      return cpl;
      }else{
	return nullptr;
      }
}

Proprietaire* Banque::creerProprietaire(std::string _nom, std::string _adresse, Personnephysique* _gerant)
{
      Societe* soc = new Societe(_nom,_adresse,_gerant);
      m_proprios.push_back(soc);
      return soc;
}


Proprietaire* Banque::creerProprietaire(std::string _nom, std::string _adresse, std::string _datedenaissance)
{
      Personnephysique* pers = new Personnephysique(_nom,_adresse,_datedenaissance);
      m_proprios.push_back(pers);
      return pers;
}
