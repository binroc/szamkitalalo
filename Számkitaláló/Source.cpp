#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Hun");

	srand(time(0));

	int gepszama = rand() % 100 + 1;
	int emberszama;
	int proba = 0;

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
			}
			else if(proba <= 5)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad az ez�st d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Gratul�lok!"<<endl;
				cout<<""<<endl;
			}
			else if(proba <= 7)
			{
				cout<<""<<endl;
				cout<<"Ezzel megkaptad a bronz d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Gratul�lok!"<<endl;
				cout<<""<<endl;
			}
			else
			{
				cout<<""<<endl;
				cout<<"Sajnos nem nyert�l d�jat."<<endl;
				cout<<""<<endl;
				cout<<"Majd m�skor siker�l.";
				cout<<""<<endl;
			}
			system("pause");
		}

	}while(emberszama!=gepszama);
}