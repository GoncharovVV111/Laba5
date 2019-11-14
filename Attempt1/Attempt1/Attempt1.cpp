#include <iostream>
#include <string>


using namespace std;

struct stadion
{
	string Name;
	string NameSport;
	int YearOfBuilding;
	string adress;
	int Capacity ;
	int NumberOfField;
	string SortOfTablo;
};

stadion t[999999];

int vivod(int y)
{
	for (int i = 0; i < y + 3; i++)
	{
		cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
	}
	return 0;
}


int proverka()
{
	bool exit = true;
	int  y;
	do
	{
		string str;
		str = "\0";
		int p = 0;
		getline(cin, str);
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
			{
				p++;
			}
		}
		if ((p == str.length() && (str[0] != '0' || str[0] != ' ')))
		{
			if (str != "")
			{
				y = stof(str);
				exit = false;
			}
		}
		else {
			cout << "\adressislo ne ydovletvorRet ycsloviRm";
			cout << "\nVvedite celoe 4islo\n";
		}
	} while (exit == true);
	return y;
}

char viborr()
{
	char vibor;
	bool exit = true;
	do
	{
		cin >> vibor;
		if (vibor == 'y' || vibor == 'n')
		{
			exit = false;
		}
		else
		{
			system("cls");
			cout << "Otvet neponyten" << endl;
			cout << "Pogaluicta povtorite(y/n)" << endl;
		}
	} while (exit);
	return vibor;
}

string provvv()
{
	string str1;
	bool exit = true;
	do
	{
		str1[0] = '\0';
		getline(cin, str1);
		if (str1 != "\0")
		{
			exit = false;
		}
		else
		{
			cout << "Vveli puctue znachenie" << endl;
			cout << "Povtorite" << endl;
		}
	} while (exit);
	return str1;
}

char vvod1(int i)
{
	cout << " Vvedite nazvanie ctadiona" << endl;
	t[i].Name = "";
	t[i].Name = provvv();
	return 0;
}
char vvod2(int i)
{
	cout << " Vvedite vid cporta" << endl;
	t[i].NameSport = "";
	t[i].NameSport = provvv();
	return 0;
}
int vvod3(int i)
{
	cout << " \nVvedite god poctroiki" << endl;
	t[i].YearOfBuilding = proverka();
	return 0;
}
int vvod4(int i)
{
	cout << " \nVvedite adrec" << endl;
	t[i].adress = "";
	t[i].adress = provvv();
	return 0;
}
int vvod5(int i)
{
	cout << " \nVvedite vmectimocty" << endl;
	t[i].Capacity  = proverka();
	return 0;
}
int vvod6(int i)
{
	cout << " \nVvedite kol-vo ploshadok" << endl;
	t[i].NumberOfField = proverka();
	return 0;
}
int vvod7(int i)
{
	cout << " \nVvedite vid tablo(cifrovoe/tablo)" << endl;
	bool exit = true;
	string str;
	t[i].SortOfTablo = "";
	do
	{
		str[0] = '\0';
		getline(cin, str);
		if ((str == "cifrovoe") || (str == "tablo"))
		{
			t[i].SortOfTablo = str;
			exit = false;
		}
		else
		{
			cout << "Otvet neponyten" << endl;
			cout << "Pogaluicta povtorite(cifrovoe/tablo)" << endl;
		}
	} while (exit);
	return 0;
}


int izmenenie(int y)
{
	bool exit = true;
	do
	{
		vivod(y);
		cout << " V kakom ctadione xotite zamenity?" << endl;
		bool exit1 = true;
		int ll;
		do
		{
			ll = proverka();
			if ((ll <= y + 3) && (ll > 0))
			{
				exit1 = false;
			}
			else
			{
				cout << "Takogo elementa net" << endl;
				cout << "Vvedite zanovo" << endl;
			}
		} while (exit1);
		cout << " Chto xotite zamenity?(nazvanie(1) / vid(2) / god(3) / adrec(4) / vmectimocty(5) / ploshadki(6) / tablo(7))" << endl;
		bool exit2 = true;
		do
		{
			int l = proverka();
			if (l == 1 || l == 2 || l == 3 || l == 4 || l == 5 || l == 6 || l == 7)
			{
				if (l == 1) { vvod1(ll - 1); }
				if (l == 2) { vvod2(ll - 1); }
				if (l == 3) { vvod3(ll - 1); }
				if (l == 4) { vvod4(ll - 1); }
				if (l == 5) { vvod5(ll - 1); }
				if (l == 6) { vvod6(ll - 1); }
				if (l == 7) { vvod7(ll - 1); }
				exit2 = false;
			}
			else
			{
				system("cls");
				vivod(y);
				cout << "Takogo elementa net" << endl;
				cout << "Vvedite zanovo" << endl;
			}
		} while (exit2);
		system("cls");
		cout << "Zamenity eshe chto-nibudy?(y/n)" << endl;
		if (viborr() == 'n')
		{
			exit = false;
		}
	} while (exit);
	return 0;
}

int stiranie(int y)
{
	cout << " Kakoi ctadione xotite udalit?" << endl;
	bool exit1 = true;
	int ll;
	do
	{
		ll = proverka();
		if ((ll <= y + 3) && (ll > 0))
		{
			exit1 = false;
		}
		else
		{
			cout << "Takogo elementa net" << endl;
			cout << "Vvedite zanovo" << endl;
		}
	} while (exit1);
	for (int i = ll - 1; i < y + 2; i++)
	{
		t[i].Name = t[i + 1].Name;
		t[i].NameSport = t[i + 1].NameSport;
		t[i].YearOfBuilding = t[i + 1].YearOfBuilding;
		t[i].adress = t[i + 1].adress;
		t[i].Capacity  = t[i + 1].Capacity ;
		t[i].NumberOfField = t[i + 1].NumberOfField;
		t[i].SortOfTablo = t[i + 1].SortOfTablo;
	}
	y--;
	return y;
}

int poisk(int y)
{
	string str;
	int u = 0;
	bool exit2 = true;
	int ll;
	cout << "Po kakomu parametru poisk?" << endl;
	cout << "(nazvanie(1) / vid(2) / god(3) / adrec(4) / vmectimocty(5) / ploshadki(6) / tablo(7))" << endl;
	do
	{
		int l = proverka();
		if (l == 1 || l == 2 || l == 3 || l == 4 || l == 5 || l == 6 || l == 7)
		{
			cout << "Vvedite parametr" << endl;
			if (l == 1)
			{
				getline(cin, str); for (int i = 0; i < y + 3; i++)
				{
					if (str == t[i].Name)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 2)
			{
				getline(cin, str); for (int i = 0; i < y + 3; i++)
				{
					if (str == t[i].NameSport)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 3)
			{
				int h = proverka(); for (int i = 0; i < y + 3; i++)
				{
					if (h == t[i].YearOfBuilding)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 4)
			{
				getline(cin, str); for (int i = 0; i < y + 3; i++)
				{
					if (str == t[i].adress)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 5)
			{
				int h = proverka(); for (int i = 0; i < y + 3; i++)
				{
					if (h == t[i].Capacity )
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 6)
			{
				int h = proverka(); for (int i = 0; i < y + 3; i++)
				{
					if (h == t[i].NumberOfField)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			if (l == 7)
			{
				getline(cin, str); for (int i = 0; i < y + 3; i++)
				{
					if (str == t[i].SortOfTablo)
					{
						u++;
						cout << i + 1 << "	" << t[i].Name << "	" << t[i].NameSport << "	" << t[i].YearOfBuilding << "	" << t[i].adress << "	" << t[i].Capacity  << "	" << t[i].NumberOfField << "	" << t[i].SortOfTablo << "	" << endl;
						if (u == 0)
						{
							cout << "Takogo elementa net" << endl;
						}
					}
				}
			}
			exit2 = false;
		}
		else
		{
			system("cls");
			cout << "Takogo parametra net" << endl;
			cout << "Vvedite zanovo" << endl;
		}
	} while (exit2);
	return 0;
}

int main()
{
	int y = 0;
	t[0].Name = "Pole"; t[0].NameSport = ""; t[0].YearOfBuilding = 33; t[0].adress = "jjj"; t[0].Capacity  = 234; t[0].NumberOfField = 424; t[0].SortOfTablo = "tablo";
	t[1].Name = "Polyshko"; t[1].NameSport = "hh"; t[1].YearOfBuilding = 33; t[1].adress = "jj"; t[1].Capacity  = 234; t[1].NumberOfField = 424; t[1].SortOfTablo = "tablo";
	t[2].Name = "Polyna"; t[2].NameSport = "h"; t[2].YearOfBuilding = 33; t[2].adress = "j"; t[2].Capacity  = 234; t[2].NumberOfField = 424; t[2].SortOfTablo = "tablo";
	string str;
	bool exit2 = true;
	do {
		cout << " Xotite vvecti novie dannie? (y/n)" << endl;
		if (viborr() == 'y')
		{
			cout << " Skoliko xotite vvecti novix elementov?" << endl;
			y = proverka();
			for (int i = 3; i < y + 3; i++)
			{
				vvod1(i); vvod2(i); vvod3(i); vvod4(i); vvod5(i); vvod6(i); vvod7(i);
			}
		}
		system("cls");
		vivod(y);
		cout << " Xotite zamenity dannie? (y/n)" << endl;
		if (viborr() == 'y')
		{
			system("cls");
			izmenenie(y);
		}
		system("cls");
		vivod(y);
		cout << " Xotite udalit dannie? (y/n)" << endl;
		if (viborr() == 'y')
		{
			system("cls");
			vivod(y);
			y = stiranie(y);
		}
		system("cls");
		cout << " Xotite vipolnit poisk? (y/n)" << endl;
		if (viborr() == 'y')
		{
			system("cls");
			poisk(y);
			system("pause");
		}
		system("cls");
		cout << " Xotite povtorit ves proces (y/n)" << endl;
		if (viborr() == 'n')
		{
			exit2 = false;
		}
	} while (exit2);
	cout << endl << "V rezulytate:\n";
	vivod(y);
	return 0;
}
