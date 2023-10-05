#include "personne.h"
personne::personne(string Cin):Cin(Cin)
{
	nom="Tribak";
	prenom="anas";
	age=18;
	d.j=0;
	d.a=0;
	d.m=0;
}
personne::~personne()
{
	
}
void personne::setdate(date dn)
{
	d.j = dn.j;
	d.m = dn.m;
	d.a = dn.a;
}
void personne::setnom(string nom)
{
	this->nom=nom;
}
void personne::setprenom(string prenom)
{
	this->prenom=prenom;
}
void personne::setage(int age)
{
	this->age=age;
}
date personne::getdate()
{
	return d;
}
string personne::getnom()
{
	return nom;
}
string personne::getprenom()
{
	return prenom;
}
int personne::getage()
{
	return age;
}
string personne::getcin()
{
	return Cin;
}
