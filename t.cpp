#include <iostream>
#include<string.h>

using namespace std;

class Individu{
protected :
 int age ;
 string nom ;
 string prenom ;
public :
 Individu(string nom, string prenom, int age);
 Individu(const Individu &); // constructeur de recopie
 string getNom() ; // retourne le nom ;
 string getPrenom() ;//retourne le prénom
 int getAge() ;// retourne l’âge
} ;

 string Individu::getNom(){
  return nom;
}
string Individu::getPrenom(){
  return prenom;
}
int Individu::getAge(){
  return age;
}

Individu::Individu(string nom,string prenom,int age){
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;


}

Individu::Individu(const Individu & individu){
   age=individu.age;
   prenom=individu.prenom;
   nom=individu.nom;

}

class Etudiant :public Individu{

private :string niveau,filiere;

public :

        Etudiant(string nom,string prenom,int age,string filiere,string niveau);

        Etudiant(const Etudiant &);

        void afficher();
        string getFiliere();



};


Etudiant::Etudiant(string nom,string prenom,int age,string filiere,string niveau): Individu(nom,prenom,age),filiere(filiere),niveau(niveau){};

Etudiant::Etudiant(const Etudiant& p):Individu(p),filiere(p.filiere),niveau(p.niveau){};


void Etudiant::afficher(){
  cout<<"Vos informations"<<endl;
  cout<<"Nom et prenom  " << nom <<" " <<prenom <<endl;
  cout<<"Votre filiere ,niveau et age " <<filiere <<" " <<niveau <<" " <<age <<endl;
}

string Etudiant::getFiliere(){
 return filiere;
}



int main()
{

    Individu personne("Salut","Im",21);






    Etudiant abdoul("Tete","Mouhammad Abdourazak",38,"genie info","niveau2");

    Etudiant adje=abdoul;

    adje.afficher();

    return 0;
}
