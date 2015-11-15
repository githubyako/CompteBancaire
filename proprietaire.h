#ifndef PROPRIETAIRE_H
#define PROPRIETAIRE_H
#include <string>
#include <vector>
#include <iostream>

class Proprietaire{ // abstraite
private:

  
public:
    virtual std::string const & get_nom()const =0;
    std::string get_type();
    virtual std::string const & get_adresse()const =0;
    virtual std::string get_adressepostale()const =0;
    virtual std::ostream& out(std::ostream& _stream)const =0;
	//Proprietaire();
	//Proprietaire(Proprietaire const & proprio);
};
std::ostream & operator<<(std::ostream & _os, Proprietaire const& _proprio);
#endif
//et d'un opérateur de sortie sur un flux utilisé pour l'affichage de
//toutes les informations concernant le propriétaire