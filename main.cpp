///Acest program e facut sa introduca datele asiguratului si se calcueze prima lunara
///si suma asigurata din perspectiva unui asigurator de viata
/// am folosit 4 clase


#include <iostream>
#include <cstring>



class beneficiar
{
    char *numeBeneficiar;
    int varstaBeneficiar;
    int procentOferit;



public:
    beneficiar(const char   *numeBeneficiar , const int& varstaBeneficiar , const int& procentOferit)
    {
        this->numeBeneficiar = new char[strlen(numeBeneficiar) + 1];
    strcpy(this->numeBeneficiar , numeBeneficiar);


        this ->varstaBeneficiar = varstaBeneficiar;

             this->procentOferit = procentOferit;

    }

    beneficiar(const beneficiar& nou)
    {
        this->numeBeneficiar= new char[strlen(nou.numeBeneficiar) + 1];
     strcpy(this-> numeBeneficiar,nou.numeBeneficiar);

     this->varstaBeneficiar = nou.varstaBeneficiar;

     this->procentOferit = nou.procentOferit;

    }


   char* getNumeBeneficiar () const
{
    char *numeBeneficiarReturnat = new
    char[strlen(numeBeneficiarReturnat) + 1];
    strcpy(numeBeneficiarReturnat , numeBeneficiarReturnat);
    return numeBeneficiarReturnat;
}

    int getVarstsaBeneficiar() const
{
    return varstaBeneficiar;
}


   int getProcentOferit() const
{
    return procentOferit;
}


   void setNumeBeneficiar(const char* numeBeneficiar)
{
    delete[] this -> numeBeneficiar;
    this -> numeBeneficiar = new char[strlen(numeBeneficiar) + 1];
    strcpy(this ->numeBeneficiar, numeBeneficiar);
}


  void  setVarstaBeneficiar(const int& varstaBeneficiar)
{
    if(varstaBeneficiar<= 0)
    {
        return;
    }

    this ->varstaBeneficiar = varstaBeneficiar;

}


void  setProcentOferit(const double& procentOferit)
{
    if(procentOferit<= 0)
    {
        return;
    }

    this -> procentOferit = procentOferit;

}








~beneficiar()
{
    std::cout<< "~beneficiar"<<numeBeneficiar<<std::endl;
    delete [] numeBeneficiar;
}




};

class Job{
char *locDeMunca;
char *firma;
char *rolMunca;
double salariuDoi;
int nivelRisc;
double prima;
double sumaAsigurata;



int calculeazaRisc()
{
    if(strcmp(rolMunca , "pompier")== 0)return 3;
    if(strcmp(rolMunca , "politist")== 0)return 3;
    if(strcmp(rolMunca , "programator")== 0)return 1;
    if(strcmp(rolMunca , "marinar")== 0)return 3;
    if(strcmp(rolMunca , "cofetar")== 0)return 1;
    if(strcmp(rolMunca , "brutar")== 0)return 1;
    if(strcmp(rolMunca , "constructor")== 0)return 3;
    if(strcmp(rolMunca , "biolog")== 0)return 2;
    if(strcmp(rolMunca , "fotbalist")== 0)return 2;

    return 1;

}
double calculeazaPrima()
{
    double baza =salariuDoi * 0.05;
    switch(nivelRisc)
    {case 1: return baza * 1.0;
     case 2: return baza * 1.5;
     case 3: return baza * 2.0;
     default: return baza;
    }
}

double calculeazaSumaAsigurata() {

switch(nivelRisc) {
case 1: return salariuDoi * 24;
case 2: return salariuDoi *48;
case 3: return  salariuDoi * 64;
default: return salariuDoi * 24;

}



}

public:

    Job(const  char *locDeMunca , const char *firma , const char *rolMunca ,const double& salariuDoi)
    {
       this->locDeMunca = new char[strlen(locDeMunca) + 1];
    strcpy(this->locDeMunca , locDeMunca);

    this->firma = new char[strlen(firma) + 1];
    strcpy(this->firma , firma);

    this->rolMunca = new char[strlen(rolMunca) + 1];
    strcpy(this->rolMunca , rolMunca);

    this ->salariuDoi = salariuDoi;


    this ->nivelRisc = calculeazaRisc();

       this ->prima = calculeazaPrima();

      this ->sumaAsigurata = calculeazaSumaAsigurata();




    }

Job(const Job& nou)
{
   this->locDeMunca = new char[strlen(nou.locDeMunca) + 1];
     strcpy(this-> locDeMunca,nou.locDeMunca);

     this->firma = new char[strlen(nou.firma) + 1];
     strcpy(this-> firma,nou.firma);

     this->rolMunca = new char[strlen(nou.rolMunca) + 1];
     strcpy(this->rolMunca,nou.rolMunca);

     this ->salariuDoi = nou.salariuDoi;

      this ->nivelRisc = nou.nivelRisc;

       this ->prima = nou.prima;

      this ->sumaAsigurata = nou.sumaAsigurata;



}

char* getLocDeMunca () const
{
    char *locDeMuncaReturnat = new
    char[strlen(locDeMuncaReturnat) + 1];
    strcpy(locDeMuncaReturnat , locDeMuncaReturnat);
    return locDeMuncaReturnat;
}


char* getFirma () const
{
    char *firmaReturnat = new
    char[strlen(firma) + 1];
    strcpy(firmaReturnat , firma);
    return firmaReturnat;
}

char* getRolMunca () const
{
    char *rolMuncaReturnat = new
    char[strlen(rolMunca) + 1];
    strcpy(rolMuncaReturnat , rolMunca);
    return rolMuncaReturnat;
}



double  getSalariuDoi() const
{
    return salariuDoi;
}


int getNivelRisc() const
{
    return nivelRisc;
}


double getPrima() const
{
    return prima;
}

double getSumaAsigurata() const
{
    return sumaAsigurata;
}

void setLocDeMunca(const char* locDeMunca)
{
    delete[] this -> locDeMunca;
    this -> locDeMunca = new char[strlen(locDeMunca) + 1];
    strcpy(this ->locDeMunca, locDeMunca);

}



void setFirma(const char* firma)
{
    delete[] this -> firma;
    this -> firma = new char[strlen(firma) + 1];
    strcpy(this ->firma, firma);

}
void setRolMunca(const char* rolMunca)
{
    delete[] this -> rolMunca;
    this -> rolMunca = new char[strlen(rolMunca) + 1];
    strcpy(this ->rolMunca, rolMunca);

}
void  setSalariuDoi(const double& salariuDoi)
{
    if(salariuDoi<= 0)
    {
        return;
    }

    this ->salariuDoi = salariuDoi;

}


friend std::ostream& operator<<(std::ostream out , const Job& j)
    {
        out << "firma:" <<j.firma<<std::endl;
        out << "Rol:" <<j.rolMunca<<std::endl;
        out << "Salariu:" << j.salariuDoi <<std::endl;
        out << "Nivel risc:" <<j.nivelRisc<<std::endl;
        out << "Prima lunara:" << j.prima<<std::endl;
        out << "Suma asigurata:" << j.sumaAsigurata<<std::endl;


        return out;
    }







 ~Job()
{
    std::cout<< "~Job()"<<  locDeMunca  << firma << rolMunca  << std::endl;
     delete[] locDeMunca;

     delete[] firma;

     delete[] rolMunca;


}


};


class FisaMedicala{

char* numeMedic;
char* dataConsultatiei;
char* istoricBoli;
int varstaDoi;
double greutate;
float inaltime;
bool fumat;
bool alcool;
bool activitateFizica;
bool aprobat;

bool calculeazaAprobat() {
if(varstaDoi > 60) return false;
if(fumat == true) return false;
if (alcool == true) return false;
if(greutate >120) return false;
return true;
}

public:
    FisaMedicala(const char  *numeMedic , const char  *dataConsultatiei , const char  *istoricBoli , const int& varstaDoi , const double& greutate , const float& inaltime , const bool& fumat , const bool& alcool , const bool& activitateFizica )
    {
      this->numeMedic = new char[strlen(numeMedic) + 1];
    strcpy(this->numeMedic , numeMedic);

  this->dataConsultatiei = new char[strlen(dataConsultatiei) + 1];
    strcpy(this->dataConsultatiei , dataConsultatiei);

  this->istoricBoli = new char[strlen(istoricBoli) + 1];
    strcpy(this->istoricBoli , istoricBoli);

  this ->varstaDoi = varstaDoi;

  this ->greutate = greutate;

  this ->inaltime = inaltime;

  this ->fumat = fumat;

  this ->activitateFizica = activitateFizica;

  this ->alcool = alcool;

  this ->aprobat = calculeazaAprobat();

}




FisaMedicala(const FisaMedicala& nou)
{
      this->numeMedic = new char[strlen(nou.numeMedic) + 1];
     strcpy(this-> numeMedic,nou.numeMedic);

     this->dataConsultatiei = new char[strlen(nou.dataConsultatiei) + 1];
     strcpy(this-> dataConsultatiei,nou.dataConsultatiei);

     this->istoricBoli = new char[strlen(nou.istoricBoli) + 1];
      strcpy(this-> istoricBoli,nou.istoricBoli);


          this ->varstaDoi = nou.varstaDoi;
          this ->inaltime = nou.inaltime;
          this ->greutate = nou.greutate;
          this ->fumat = nou.fumat;
          this ->activitateFizica = nou.activitateFizica ;
          this ->alcool = nou.alcool;
          this ->aprobat = calculeazaAprobat();


}




char* getNumeMedic () const
{
    char *numeMedicReturnat = new
    char[strlen(numeMedic) + 1];
    strcpy(numeMedicReturnat , numeMedic);
    return numeMedicReturnat;
}

char* getDataConsultatiei () const
{
    char *dataConsultatieiReturnat = new
    char[strlen(dataConsultatiei) + 1];
    strcpy(dataConsultatieiReturnat , dataConsultatiei);
    return dataConsultatieiReturnat;
}


char* getIstoricBoli () const
{
    char *istoricBoliReturnat = new
    char[strlen(istoricBoli) + 1];
    strcpy(istoricBoliReturnat , istoricBoli);
    return istoricBoliReturnat;
}


int  getVarstaDoi() const
{
    return varstaDoi;
}



float  getInaltime() const
{
    return inaltime;
}



double  getGreutate() const
{
    return greutate;
}


bool getFumat() const
{
    return fumat;
}



bool getAlcool() const
{
    return alcool;
}




bool getActivitateFizica() const
{
    return activitateFizica;
}


bool getAprobat() const
{
    return aprobat;
}





void setNumeMedic(const char* numeMedic)
{
    delete[] this -> numeMedic;
    this -> numeMedic = new char[strlen(numeMedic) + 1];
    strcpy(this ->numeMedic, numeMedic);

}


void setDataConsultatiei(const char* dataConsultatiei)
{
    delete[] this -> dataConsultatiei;
    this -> dataConsultatiei = new char[strlen(dataConsultatiei) + 1];
    strcpy(this ->dataConsultatiei, dataConsultatiei);

}




void setIstoricBoli(const char* istoricBoli)

{
    delete[] this -> istoricBoli;
    this -> istoricBoli = new char[strlen(istoricBoli) + 1];
    strcpy(this ->istoricBoli, istoricBoli);

}



void  setVarstaDoi(const int& varstaDoi)
{
    if(varstaDoi<= 0)
    {
        return;
    }

    this ->varstaDoi = varstaDoi;


}


void  setInaltime(const float& varstaDoi)
{
    if(inaltime<= 0)
    {
        return;
    }

    this ->inaltime = inaltime;


}





void  setGreutate(const double& greutate)
{
    if(greutate<= 0)
    {
        return;
    }

    this ->greutate = greutate;


}



void  setFumat(const bool& fumat)
{


    this ->fumat = fumat;


}



void  setAlcool(const bool& alcool)
{


    this ->alcool = alcool;


}



void  setActivitateFizica(const bool& activitateFizica)
{


    this ->activitateFizica = activitateFizica;


}



void  setAprobat(const bool& aprobat)
{


    this ->aprobat = aprobat;


}

 friend std::ostream& operator<<(std::ostream out , const FisaMedicala& f)
    {
        out << "Medic:" <<f.numeMedic<<std::endl;
        out << "Data consultatiei:" <<f.dataConsultatiei<<std::endl;
        out << "Istoric boli:" << f.istoricBoli <<std::endl;
        out << "Varsta:" <<f.varstaDoi<<std::endl;
        out << "Greutate:" << f.greutate<<std::endl;
        out << "Fumat:" <<(f.fumat ? "Da" : "nu")<<std::endl;
        out << "Alcool:" <<(f.alcool ? "Da" : "nu")<<std::endl;
        out << "Aprobat:" <<(f.aprobat ? "Da" : "nu")<<std::endl;

        return out;
    }











    ~FisaMedicala()
{
    std::cout<< "~FisaMedicala()"<< numeMedic  << dataConsultatiei << istoricBoli  << std::endl;
     delete[] numeMedic;

     delete[] dataConsultatiei;

     delete[] istoricBoli;


}



};



class Cumparatori{
char *nume;
char *adresaDeEmail;
int *varsta;

double *salariu;
double *CNP;
char *judet;
char *serieBuletin;
char *adresa;
char *emisDe;


public:

  Cumparatori(const char  *nume , const char *judet, const char *serieBuletin ,const char *adresa ,const char *emisDe , const char *adresaDeEmail)
{

    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume , nume);

    this-> judet = new char[strlen(judet) + 1];
    strcpy(this->judet , judet);

    this->serieBuletin = new char[strlen(serieBuletin) + 1];
    strcpy(this->serieBuletin , serieBuletin);

     this-> adresa = new char[strlen(adresa) + 1];
    strcpy(this->adresa , adresa);

   this->emisDe = new char[strlen(emisDe) + 1];
    strcpy(this->emisDe , emisDe);

    this->adresaDeEmail = new char[strlen(adresaDeEmail) + 1];
    strcpy(this->adresaDeEmail , adresaDeEmail);

}
Cumparatori(const Cumparatori& nou)
{
      this->nume = new char[strlen(nou.nume) + 1];
     strcpy(this-> nume,nou.nume);

     this ->varsta = new int(*nou.varsta);

     this ->CNP = new double (*nou.CNP);

     this -> salariu = new double (*nou.salariu);

     this->judet = new char[strlen(nou.judet) + 1];
     strcpy(this-> judet,nou.judet);

     this->serieBuletin = new char[strlen(nou.serieBuletin) + 1];
     strcpy(this-> serieBuletin,nou.serieBuletin);

     this->adresa = new char[strlen(nou.adresa) + 1];
     strcpy(this-> adresa,nou.adresa);

     this->emisDe = new char[strlen(nou.emisDe) + 1];
     strcpy(this-> emisDe,nou.emisDe);

           this->adresaDeEmail = new char[strlen(nou.adresaDeEmail) + 1];
     strcpy(this-> adresaDeEmail,nou.adresaDeEmail);


}

char* getNume () const
{
    char *numeReturnat = new
    char[strlen(nume) + 1];
    strcpy(numeReturnat , nume);
    return numeReturnat;
}


char* getJudet () const
{
    char *judetReturnat = new
    char[strlen(judet) + 1];
    strcpy(judetReturnat , judet);
    return judetReturnat;
}


char* getSerieBuletin () const
{
    char *serieBuletinReturnat = new
    char[strlen(serieBuletin) + 1];
    strcpy(serieBuletinReturnat , serieBuletin);
    return serieBuletinReturnat;
}




char* getAdresa () const
{
    char *adresaReturnat = new
    char[strlen(adresa) + 1];
    strcpy(adresaReturnat , adresa);
    return adresaReturnat;
}


char* getEmisDe () const
{
    char *emisDeReturnat = new
    char[strlen(emisDe) + 1];
    strcpy(emisDeReturnat , emisDe);
    return emisDeReturnat;
}

char* getAdresaDeEmail () const
{
    char *adresaDeEmailReturnat = new
    char[strlen(adresaDeEmail) + 1];
    strcpy(adresaDeEmailReturnat , adresaDeEmail);
    return adresaDeEmailReturnat;
}






void setNume(const char* nume)
{
    delete[] this -> nume;
    this -> nume = new char[strlen(nume) + 1];
    strcpy(this ->nume, nume);

}

void setJudet(const char* judet)
{
    delete[] this -> judet;
    this -> judet = new char[strlen(judet) + 1];
    strcpy(this ->judet, judet);

}

void setSerieBuletin(const char* serieBuletin)
{
    delete[] this -> serieBuletin;
    this -> serieBuletin = new char[strlen(serieBuletin) + 1];
    strcpy(this ->serieBuletin, serieBuletin);

}



void setAdresa(const char* adresa)
{
    delete[] this -> adresa;
    this -> adresa = new char[strlen(adresa) + 1];
    strcpy(this ->adresa, adresa);

}


void setEmisDe(const char* emisDe)
{
    delete[] this -> emisDe;
    this -> emisDe = new char[strlen(emisDe) + 1];
    strcpy(this ->emisDe, emisDe);

}


void setAdresaDeEmail(const char* adresaDeEmail)
{
    delete[] this -> adresaDeEmail;
    this -> adresaDeEmail = new char[strlen(adresaDeEmail) + 1];
    strcpy(this ->adresaDeEmail, adresaDeEmail);

}





Cumparatori();




Cumparatori(const int& varsta,const double& CNP, const double& salariu);

int getVarsta() const;
 double getCNP() const;
 double getSalariu() const;


  void setVarsta(const int& varsta);

   void setCNP (const double& CNP);

    void setSalariu(const double& salariu);


    friend std::ostream& operator<<(std::ostream out , const Cumparatori& c)
    {
        out << "Nume:" <<c.nume<<std::endl;
        out << "Judet:" <<c.judet<<std::endl;
        out << "Adresa:" <<c.adresa<<std::endl;
        out << "Email:" <<c.adresaDeEmail<<std::endl;
        out << "Serie buletin:" <<c.serieBuletin<<std::endl;
        out << "Emis de:" <<c.emisDe<<std::endl;
        return out;
    }













    ~Cumparatori()
{
    std::cout<< "~Cumparatori()"<< nume << varsta<< salariu << CNP<<judet<<serieBuletin<<emisDe<<adresa<< std::endl;
     delete[] nume;
     delete  this ->varsta;
     delete this ->salariu;
     delete  this -> CNP;
     delete[] judet;
     delete[] serieBuletin;
     delete[] emisDe;
     delete[] adresa;
}



};

Cumparatori::Cumparatori()
{
     this->varsta = new int(0);
    this-> CNP = new double(0.0);
    this ->salariu = new double(0.0);
}

 Cumparatori::Cumparatori(const int& varsta , const double& CNP , const double& salariu )

{
    this ->varsta = new int (varsta);
    this ->CNP = new double (CNP);
    this ->salariu = new double (salariu);

}
int Cumparatori :: getVarsta() const
{
    return *varsta;
}



double Cumparatori ::getCNP() const
{
    return *CNP;

}



double Cumparatori ::  getSalariu() const

{


 return *salariu;
}



void Cumparatori :: setVarsta(const int& varsta)
{
    if(varsta<= 0)
    {
        return;
    }

    *this ->varsta = varsta;


}



void Cumparatori :: setCNP(const double& CNP)
{
    if(CNP<= 0)
    {
        return;
    }

    *this ->CNP = CNP;



}



void Cumparatori :: setSalariu(const double& salariu)
{
    if(salariu<= 0)
    {
        return;
    }

    *this ->salariu = salariu;


}



int main()
{

char raspuns[10];


    char nume[1000] , judet[100] , adresa[1000] , emisaDe[100], serieBuletin [100] , adresaDeEmail [100] , numeMedic[100] , dataConsultaiei[100] , istoricBoli[1000], locDeMunca[100] , firma [100] , rolMunca [100] , numeBeneficiar [100];
    int varsta , varstaDoi , varstaBeneficiar ;
    float inaltime , procentOferit;
    double salariu , CNP ,greutate , salariuDoi;
    bool fumat,alcool,activitateFizica , aprobat;


    std::cout<< "Introduceti"<<std::endl;

    std::cout << "Numele clientului -" << std::endl;
     std::cin.ignore();
    std::cin.getline(nume , 10000);

    std::cout<< "Salariu in lei-"<<std::endl;
     std::cin.ignore();
    std::cin>> salariu;


    std::cout<< "CNP-"<<std::endl;
     std::cin.ignore();
    std::cin>> CNP;

 std::cout << "Adresa -";
  std::cin.ignore();
    std::cin.getline(adresa , 10000);



std::cout << "Judetul -" << std::endl;
 std::cin.ignore();
    std::cin.getline(judet , 10000);

 std::cout << "Seria si numarul buletinului -";
  std::cin.ignore();
    std::cin.getline(serieBuletin , 10000) ;


    std::cout << "Buletinul este emis de -";
     std::cin.ignore();
    std::cin.getline(emisaDe , 10000) ;

    std::cout << "Adresa de email -";
     std::cin.ignore();
    std::cin.getline(adresaDeEmail , 10000) ;


    std::cout<< "Varsta-"<<std::endl;
     std::cin.ignore();
    std::cin>> varsta;

Cumparatori client(nume ,judet ,serieBuletin , adresa , emisaDe , adresaDeEmail);



system("cls");



    std::cout<<"Nume Medic"<<std::endl;
   std::cin.ignore();
   std::cin.getline(numeMedic , 100);


   std::cout<< "data consultatiei"<<std::endl;
    std::cin.ignore();
   std::cin>>dataConsultaiei;


    std::cout<< "istoric boli"<<std::endl;
     std::cin.ignore();
   std::cin.getline(istoricBoli , 1000);


    std::cout<< "Varsta"<<std::endl;
     std::cin.ignore();
   std::cin>>varstaDoi;

    std::cout<< "inaltime"<<std::endl;
     std::cin.ignore();
   std::cin>>inaltime;


    std::cout<< "greutate"<<std::endl;
     std::cin.ignore();
   std::cin>>greutate;


 std::cout<< "Fumati? (da/nu)"<<std::endl;
  std::cin.ignore();
   std::cin>> raspuns;
   fumat =  (strcmp(raspuns , "da") == 0);


   std::cout<< "Consumati alcool? (da/nu)"<<std::endl;
  std::cin.ignore();
   std::cin>> raspuns;
   alcool =  (strcmp(raspuns , "da") == 0);




std::cout<< "Sunteti Activ? (da/nu)"<<std::endl;
  std::cin.ignore();
   std::cin>> raspuns;
   activitateFizica =  (strcmp(raspuns , "da") == 0);

   FisaMedicala fisa(numeMedic , dataConsultaiei , istoricBoli , varstaDoi , greutate , inaltime , fumat , alcool , activitateFizica);


if(fisa.getAprobat () == false)
{
    std::cout << "Nu se poate emite polita\n";
    return 0;
}
else
    std::cout<< "Fisa Acceptata\n";





    system("cls");

    std::cout<< "Date angajare"<<std::endl;


    std::cout<< " Locul de munca"<<std::endl;
    std::cin.ignore();
    std::cin.getline(locDeMunca , 100);


    std::cout<< " Firma"<<std::endl;
    std::cin.ignore();
    std::cin.getline(firma , 100);


    std::cout<< " Rolul de la munca"<<std::endl;
    std::cin.ignore();
    std::cin.getline(rolMunca , 100);


    std::cout<< " Salariu "<<std::endl;

    std::cin >> salariuDoi ;


  Job job(locDeMunca , firma , rolMunca , salariuDoi);



system("cls");


std::cout<< "Oferta de asigurare"<<std::endl;


std::cout << "\n  Nume:        \n" << client.getNume() << std::endl;

std::cout << "\n Rol:        \n" << job.getRolMunca() << std::endl;


std::cout << "Nivel risc:   ";
switch(job.getNivelRisc())
{
    case 1: std::cout << "SCAZUT\n";break;
     case 2: std::cout << "MEDIU\n";break;
      case 3: std::cout << "RIDICAT\n";break;
}

std::cout<< "Prima lunara:" << job.getPrima() << "RON\n";
std::cout<< "Suma asigurata:" << job.getSumaAsigurata() << "RON\n";


std::cout<< "Doriti sa semnati polita? (da/nu):";
std::cin.ignore();
std::cin >> raspuns;

system("cls");
if(strcmp(raspuns, "da") == 0){
    std::cout<< "Polita semnata"<<std::endl;
    std::cout<< "Polita emisa"<<std::endl;

}

else
{
    std::cout<< " Polita anulata"<<std::endl;
    std::cout<< "Nu a fost semnata"<<std::endl;
}



system("cls");

std::cout<< "Introduceti numele beneficiarului dorit"<<std::endl;
std::cin.ignore();
std::cin.getline(numeBeneficiar , 100);

std::cout<< "Varsta beneficiarului:"<<std::endl;
std::cin.ignore();
std::cin>>varstaBeneficiar;


std::cout<< "Introduceti procentul din suma asigurata dorit pentru beneficiar/i"<<std::endl;
std::cin.ignore();
std::cin>> procentOferit;

double sumaRamasaPentruBeneficiar = job.getSumaAsigurata() * procentOferit / 100.0;

beneficiar beneficiari(numeBeneficiar , varstaBeneficiar , procentOferit);


std::cout<< "Banii din procent:"<<  sumaRamasaPentruBeneficiar <<std::endl;


    return 0;
}

