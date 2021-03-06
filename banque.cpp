#include "banque.h"
#include "comptecourant.h"
#include "ldd.h"
#include "lep.h"

Proprietaire* Banque::creerProprietaire(Proprietaire* _p1, Proprietaire* _p2)
{
	Personnephysique * pp1 = dynamic_cast<Personnephysique*>(_p1);
	Personnephysique * pp2 = dynamic_cast<Personnephysique*>(_p2);
	if(pp1!=nullptr && pp2!=nullptr && (_p1->get_adresse() == _p2->get_adresse())){
		Couple * cpl = new Couple(pp1,pp2);
		m_proprios.push_back(cpl);
		return cpl;
	}else{
		return nullptr;
	}
}

Proprietaire* Banque::creerProprietaire(std::string _nom, std::string _adresse, Proprietaire* _gerant)
{
	Personnephysique * pp = dynamic_cast<Personnephysique*>(_gerant);
	if(pp!=nullptr){
		Societe* soc = new Societe(_nom,_adresse,pp);
		m_proprios.push_back(soc);
		return soc;
	}else{
			return nullptr;
	}
}


Proprietaire* Banque::creerProprietaire(std::string _nom, std::string _adresse, std::string _datedenaissance)
{
	Personnephysique* pers = new Personnephysique(_nom,_adresse,_datedenaissance);
	m_proprios.push_back(pers);
	return pers;
}

Comptebancaire* Banque::creerComptebancaire(std::string& _ctype, Proprietaire* _proprio)
{
	Personnephysique * temppp = dynamic_cast<Personnephysique*>(_proprio);
	if(_ctype == "CC"){
		Comptecourant * tempcc = new Comptecourant(_proprio);
		m_comptes.push_back(tempcc);
		return tempcc;
	}else if(_ctype == "LDD"){
		Ldd * templdd = new Ldd(_proprio);
		m_comptes.push_back(templdd);
		return templdd;
	}else if(_ctype == "LEP" && temppp!=nullptr){
		Lep * templep = new Lep(_proprio);  
	}else{
		return nullptr;
	}
}


