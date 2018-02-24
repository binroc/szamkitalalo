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
		cout<<"Melyik 1 és 100 közötti számra gondoltam?"<<endl;
		cout<<""<<endl;
		cin>>emberszama;

		if(emberszama > gepszama)
		{
			cin.get();
			cout<<""<<endl;
			cout<<"A beírt szám túl nagy."<<endl;
			cout<<""<<endl;
			cout<<"Próbáld újra!"<<endl;
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
			cout<<"A beírt szám túl kicsi."<<endl;
			cout<<""<<endl;
			cout<<"Próbáld újra!"<<endl;
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
			cout<<"A beírt szám helyes."<<endl;
			cout<<""<<endl;
			cout<<"A számot, amire gondoltam "<<proba<<" próbálkozással sikerült kitalálnod."<<endl;

			if(proba <= 3)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad az arany díjat."<<endl;
				cout<<""<<endl;
				cout<<"Gratulálok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else if(proba <= 5)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad az ezüst díjat."<<endl;
				cout<<""<<endl;
				cout<<"Gratulálok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else if(proba <= 7)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad a bronz díjat."<<endl;
				cout<<""<<endl;
				cout<<"Gratulálok!"<<endl;
				cout<<""<<endl;
				replay();
			}
			else
			{
				cout<<""<<endl;
				cout<<"Sajnos nem nyertél díjat."<<endl;
				cout<<""<<endl;
				cout<<"Majd máskor sikerül.";
				cout<<""<<endl;
				replay();
			}
		}

	}while(emberszama!=gepszama);
	return 0;
}
