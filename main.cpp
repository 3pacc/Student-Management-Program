#include <iostream>
#include<vector>
#include "promo.h"
#include "etudiant.h"
using namespace std;

main() 
{
	promo p;
	string ne,Cin;
	string nom,prenom;
	int age,niveau,choix,choix1;
	//int j,m,a;
	date dn;
	etudiant *t;
	p.load();
	do
    {
        cout<<" "<<endl<< "\t\t\t\t=====MENU ETUDIANT======"<<endl<< " "<<endl<<"\t\t\t\t(1)--->AJOUTER ETUDIANT  "<<endl<<"\t\t\t\t(2)--->MODIFIER ETUDIANT  "<<endl<<"\t\t\t\t(3)--->SUPPRIMER ETUDIANT  "<<endl<<"\t\t\t\t(4)--->LISTER ETUDIANT  "<<endl<<"\t\t\t\t(5)--->NBR ETUDIANT  "<<endl<<"\t\t\t\t(6)--->QUITTER  "<<endl;
        cout<<" \n\n\n\n\n\t\t\t\t\t<<--VEUILLEZ ENTRER VOTRE CHOIX-->> : ";
        cin>>choix;
	switch (choix)
    {
	
    case 1 :
    		do
		{
			cout<<"\n\t\t\t\tVEUILLEZ ENTRER LE NUMERO D'ETUDIANT :  ";
			cin>>ne;
		}while(p.Findne(ne)!=-1);
	
		do
		{
			cout<<"\t\t\t\tVEUILLEZ ENTRER LE CIN D'ETUDIANT : ";
			cin>>Cin;
		}while(p.Findne(Cin)!=-1);
		t=new etudiant(Cin,ne);
	
		cout<<"\t\t\t\tVEUILLEZ SAISIR LE NOM : " ;
		cin>>nom;
		t->setnom(nom);	
		cout<<"\t\t\t\tVEUILLEZ SAISIR LE PRENOM : ";
		cin>>prenom;
		t->setprenom(prenom);
		cout<<"\t\t\t\tVEUILLEZ SAISIR L'AGE : ";
		cin>>age;
		t->setage(age);
		cout<<"\t\t\t\tVEUILLEZ SAISIR LA DATE DE NAISSANCE  "<<endl;
		do
		{
			cout<<"\t\t\t\tLE JOUR : ";
			cin>>dn.j;
		}while(dn.j<1 || dn.j>31);
	
		do
		{
			cout<<"\t\t\t\tLE MOIS : ";
			cin>>dn.m;
		}while(dn.m<1 || dn.m>12);

		do
		{
			cout<<"\t\t\t\tL'ANNEE: ";
			cin>>dn.a;
		}while(dn.a<1900 || dn.a>2100);

		t->setdate(dn);
		cout<<"\t\t\t\tVEUILLEZ SAISIR LE NIVEAU : ";
		cin>>niveau;
		t->setniveau(niveau);
		
          p.ajouter(t); 
   		 break;
    case 2 :
            cout<<"\t\t\t\tVEUILLEZ ENTRER LE NUMERO D'ETUDIANT A MODIFIER :";
            cin>>ne;
            p.modifier(ne);
    break;    
    case 3 :
            cout<<"\t\t\t\tVEUILLEZ ENTRER LE NUMERO D'ETUDIANT A SUPPRIMER :";
            cin>>ne;
            p.supprimer(ne);
    break;    
    case 4 :
            p.lister();
    break;
    case 5 :
        cout<<"\t\t\t\tLE NOMBRE DES ETUDIANT EST :"<<etudiant::nbretudiant()<<endl;
    break; 
    case 6 :
       
    break;   
    }
   
} while (choix!=6);
     p.save();
} 
