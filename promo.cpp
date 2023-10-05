#include "promo.h"
promo::promo()
{
	t.clear();
	
}
promo::~promo()
{
	t.clear();

}
void promo::ajouter(etudiant* a)
{
	t.push_back(a);
}
int promo::Findne(string ne)
{
	int i;
	for(i=0;i<t.size();i++)
	{
		if(ne==t[i]->getne())
		{
			return i;
		}
	}
	return -1;
}
void promo::supprimer(string ne)
{
	int pos=Findne(ne);
	if(pos==-1)
	{
		cout<<"NE introuvable";
	}
	else
	{
		t.erase(t.begin()+pos);
	}
}
void promo::lister()
{
	for(int i=0;i<t.size();i++)
	{
		cout<<"\n\t\t\t\tCIN="<<t[i]->getcin()<<endl;
		cout<<"\t\t\t\tNE="<<t[i]->getne()<<endl;
		cout<<"\t\t\t\tNom="<<t[i]->getnom()<<endl;
		cout<<"\t\t\t\tPrenom="<<t[i]->getprenom()<<endl;
		cout<<"\t\t\t\tAge="<<t[i]->getage()<<endl;
		cout<<"\t\t\t\tNiveau="<<t[i]->getniveau()<<endl;
		cout<<"\t\t\t\tjour= "<<t[i]->getdate().j<<endl;
		cout<<"\t\t\t\tmois= "<<t[i]->getdate().m<<endl;
		cout<<"\t\t\t\tannee= "<<t[i]->getdate().a<<endl;
		cout<<"\t\t\t\t--------------------------"<<endl;
	
	}
	;
}
void promo::modifier(string ne)
{
	int pos=Findne(ne);
	if(pos==-1)
	{
		cout<<"NE INTROUVABLE";
	}
	else
	{
		string nom;
		string prenom;
		int age;
		//int j,m,a;
		date dn;
		int niveau;
		cout<<"veuillez saisir le nouveau nom: ";
		cin>>nom;
		t[pos]->setnom(nom);
		cout<<"veuillez saisir le nouveau prenom: ";
		cin>>prenom;
		t[pos]->setprenom(prenom);
		cout<<"veuillez saisir le nouveau age: ";
		cin>>age;
		t[pos]->setage(age);
		do{
			cout<<"veuillez saisir le jour: ";
			cin>>dn.j;
		}while(dn.j<1 || dn.j>31);
		
		do
		{
			cout<<"veuillez saisir le mois: ";
			cin>>dn.m;
		}while(dn.m<1 || dn.m>12);
		
		do
		{
			cout<<"veuillez saisir le nouveau year: ";
			cin>>dn.a;
		}while(dn.a<1900 || dn.a>2100);
		
		t[pos]->setdate(dn);
		cout<<"veuillez saisir le niveau: ";
		cin>>niveau;
		t[pos]->setniveau(niveau); 
	}
}

void promo::load()
{
	ifstream fetud("etudiant.txt",ios::in);
	
	if(fetud)
	{	
		string nom,prenom,ne,Cin;;
		int age,niveau,nbre;
		date dn;
		fetud>>nbre;  
		for(int i=0;i<nbre;i++)
		{
			fetud>>ne;
			fetud>>niveau;
			fetud>>Cin;
			fetud>>nom;
			fetud>>prenom;
			fetud>>age;
			fetud>>dn.j;
			fetud>>dn.m;
			fetud>>dn.a;
			
			etudiant *e1=new etudiant(Cin,ne);
			e1->setnom(nom);
			e1->setprenom(prenom);
			e1->setage(age);
			e1->setniveau(niveau);
			e1->setdate(dn);
			t.push_back(e1);
		}
		fetud.close();
	}
	else
	{
		
	}
}

void promo::save()
{
	ofstream fetud("etudiant.txt",ios::out | ios::trunc);
	if(fetud)
	{
		fetud<<"--"<<t.size()<<"--"<<endl;
		for(int i=0;i<t.size();i++)
		{
		fetud<<t[i]->getne()<<endl;
		fetud<<t[i]->getniveau()<<endl;
		fetud<<t[i]->getcin()<<endl;
		fetud<<t[i]->getnom()<<endl;
		fetud<<t[i]->getprenom()<<endl;
		fetud<<t[i]->getage()<<endl;
		fetud<<t[i]->getdate().j<<endl<<t[i]->getdate().m<<endl<<t[i]->getdate().a<<endl;
		}
		fetud.close();
	}
	else
	{
		cerr<<"erreur d'ouverture du fichier";
	}

}
