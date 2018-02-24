#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Replay.h"

using namespace std;

int gepszama;
int emberszama;
int proba;

void setup()
{
	gepszama = rand() % 100 + 1;
	emberszama = 0;
	proba = 0;
	system("cls");
}

int main()
{
	setlocale(LC_ALL, "Hun");
	srand(time(0));
	setup();

	do
	{
		cout<<"Melyik 1 �s 100 k�z�tti sz�mra gondoltam?"<<endl;
		cout<<""<<endl;
		cin>>emberszama;

		if(emberszama > gepszama)
		{
			cin.get();
			cout<<""<<endl;
			cout<<"A be�rt sz�m t�l nagy."<<endl;
			cout<<""<<endl;
			cout<<"Pr�b�ld �jra!"<<endl;
			cout<<""<<endl;
			cout<<"Nyomd meg az ENTER-t!"<<endl;
			proba++;
			cin.get();
			system("cls");
		}
		else if(emberszama < gepszama)
		{
			cin.get();
			cout<<""<<endl;
			cout<<"A be�rt sz�m t�l kicsi."<<endl;
			cout<<""<<endl;
			cout<<"Pr�b�ld �jra!"<<endl;
			cout<<""<<endl;
			cout<<"Nyomd meg az ENTER-t!"<<endl;
			proba++;
			cin.get();
			system("cls");
		}
		else
		{
			proba++;
			cout<<""<<endl;
			cout<<"A be�rt sz�m helyes."<<endl;
			cout<<""<<endl;
			cout<<"A sz�mot, amire gondoltam "<<proba<<" pr�b�lkoz�ssal siker�lt kital�lnod."<<endl;

			if(proba <= 3)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad az arany d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Gratul�lok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else if(proba <= 5)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad az ez�st d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Gratul�lok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else if(proba <= 7)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad a bronz d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Gratul�lok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else
			{
				cout<<""<<endl;
				cout<<"Sajnos nem nyert�l d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Majd m�skor siker�l.";
				cout<<""<<endl;
				replay();
			}
		}

	}while(emberszama!=gepszama);
	return 0;
}
