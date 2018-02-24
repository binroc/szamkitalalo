#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;
extern void setup();

void replay()
{
	string valasz;
	cout << "Akarsz még egyet játszani?\n";
	cin >> valasz;
	if (valasz == "igen" || valasz == "Igen" || valasz == "IGEN")
	{
		cout << "Akkor sok sikert!\n";
		system("pause");
		setup();
		return;
	}
	else if (valasz == "nem" || valasz == "Nem" || valasz == "NEM")
	{
		cout << "Akkor majd legközelebb.\n";
		system("pause");
		return;
	}
	else
	{
		cout << "Helytelen bevitel. A program kilép.\n";
	}

	system("pause");
}
