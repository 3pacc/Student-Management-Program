#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "personne.h"
class etudiant:public personne
{
	private:
		const string ne;
		int niveau;
		static int nbre;
		float note;
	public:
		etudiant(string,string);
		~etudiant();
		void setniveau(int);
		void setnote(float);
		int getniveau();
		string getne();
		float getnote();
		static int nbretudiant();
		
	protected:
	
};

#endif
