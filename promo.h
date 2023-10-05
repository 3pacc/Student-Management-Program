#ifndef PROMO_H
#define PROMO_H
#include "etudiant.h"
#include<vector>
#include <fstream>
using namespace std;
class promo
{
	private:
		vector<etudiant*> t;
	public:
		promo();
		~promo();
		void ajouter(etudiant*);
		void supprimer(string);
		void lister();
		void modifier(string);
		int Findne(string);
		void load();
		void save();
	protected:
};

#endif
