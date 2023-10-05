#ifndef PERSONNE_H
#define PERSONNE_H
#include<iostream>
using namespace std;

struct date
{
	int a,m,j;
};
class personne
{
	private:
		string nom,prenom;
		const string Cin;
		int age;
		date d;
	public:
		personne(string);
		~personne();
		void setdate(date);
		void setnom(string);
		void setprenom(string);
		void setage(int);
		date getdate();
		string getnom();
		string getprenom();
		int getage();
		string getcin();
};

#endif
