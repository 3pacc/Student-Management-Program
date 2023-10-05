#include "etudiant.h"
int etudiant::nbre=0;

etudiant::etudiant(string cin,string ne):ne(ne),personne(cin)
{	
	nbre++;
	niveau=0;
}
etudiant::~etudiant()
{
	nbre--;
}
void etudiant::setniveau(int niveau)
{
	this->niveau=niveau;
}
int etudiant::getniveau()
{
	return niveau;
}
string etudiant::getne()
{
	return ne;
}
int etudiant::nbretudiant()
{
	return nbre;
}
void etudiant::setnote(float note)
{
	this->note=note;
}
float etudiant::getnote()
{
	return note;
}

