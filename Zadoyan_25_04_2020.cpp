#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

//Задание 3е и 5 
/*
struct pc {

	string username;
	int FreeMemory;
	float flops;
};

void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showpc(const pc p) {

	cout << "\t" << p.username << "\t\t\t"
		<< p.FreeMemory << "\t\t"
		<< "   " << p.flops << endl;
}

void showpcF(const pc p) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "\t" << p.username << "\t\t\t"
		<< p.FreeMemory << "\t\t"
		<< "   " << p.flops << endl;
	f.close();

}


void bubbleSortflops(pc Mas[], int Size) {
	int j = 0;
	pc tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Mas[j].flops > Mas[i].flops) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = Mas[i];
				Mas[i] = Mas[j];
				Mas[j] = tmp;
			}
		}
	}
}

void bubbleSortFreeMemory(pc Mas[], int Size) {
	int j = 0;
	pc tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Mas[j].FreeMemory > Mas[i].FreeMemory) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = Mas[i];
				Mas[i] = Mas[j];
				Mas[j] = tmp;
			}
		}
	}
}


void Cout(pc pc[], int Size) {

	cout << endl << "                        Sorted Flops" << endl << endl;
	cout << "       Username\t" <<"            Free Memory\t" <<"          Flops\n";
	bubbleSortflops(pc, Size);

	for (int i = 0; i < Size; i++)
		showpc(pc[i]);

	cout << endl << "                        Sorted Free Memory" << endl << endl;
	cout << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	bubbleSortFreeMemory(pc, Size);

	for (int i = 0; i < Size; i++)
		showpc(pc[i]);
}

void file(pc pc[], int Size, const int l) {

	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++) {
		f << endl << "                        Sorted Flops" << endl << endl;
		f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
		bubbleSortflops(pc, Size);

		for (int i = 0; i < Size; i++)
			showpcF(pc[i]);

		f << endl << "                 Sorted Free Memory" << endl << endl;
		f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
		bubbleSortFreeMemory(pc, Size);

		for (int i = 0; i < Size; i++)
			showpcF(pc[i]);
	}
	f.close();
}

void write2File(const pc p[], const int l) {
	ofstream f;
	f.open("data.txt");


	for (int i = 0; i < l; i++)
		f << p[i].username << "\t"
		<< p[i].FreeMemory << "\t"
		<< p[i].flops << endl;
	f.close();
}

int main() {
	int const Size = 15;
	pc pc[Size];
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	for (int i = 0; i < Size; i++)
	{
		pc[i].FreeMemory = 80 + rand() % 150;
		pc[i].flops = 725 + rand() % 250;
		randString(pc[i].username);

		showpcF(pc[i]);


	}

	cout << "       Username\t" << "            Free Memory\t" << "          Flops\n";
	for (int i = 0; i < Size; i++)
	{
		pc[i].FreeMemory = 80 + rand() % 150;
		pc[i].flops = 725 + rand() % 250;
		randString(pc[i].username);

		showpc(pc[i]);


	}


	Cout(pc, Size);
	file(pc, Size, 1);
	write2File(pc, Size);

	return 0;
}
*/

//Задание 3c и 4 
struct flowers {

	string codename;
	int rarity;
	float cost;
};

void randString(string& str) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showflowers(const flowers p) {
	cout << "\t" << p.codename << "\t\t\t"
		<< p.rarity << "\t\t"
		<< "   " << p.cost << endl;
}

void showflowersF(const flowers p) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "\t" << p.codename << "\t\t\t"
		<< p.rarity << "\t\t"
		<< "   " << p.cost << endl;
	f.close();

}


void bubbleSortcost(flowers flower[], int Size) {
	int j = 0;
	flowers tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flower[j].cost > flower[i].cost) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = flower[i];
				flower[i] = flower[j];
				flower[j] = tmp;
			}
		}
	}
}

void bubbleSortrarity(flowers flower[], int Size) {
	int j = 0;
	flowers tmp;
	// èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		// äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (flower[j].rarity > flower[i].rarity) {  // ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = flower[i];
				flower[i] = flower[j];
				flower[j] = tmp;
			}
		}
	}
}


void Cout(flowers flowers[], int Size) {

	cout << endl << "                        Sorted Cost" << endl << endl;
	cout << "       Codename\t" << "            Rarity\t" << "          Cost\n";
	bubbleSortcost(flowers, Size);

	for (int i = 0; i < Size; i++) 
		if (flowers[i].rarity > 5)
			showflowers(flowers[i]);

	cout << endl << "                        Sorted Rarity" << endl << endl;
	cout << "       Codename\t" << "            Rarity\t" << "          Cost\n";
	bubbleSortrarity(flowers, Size);
	
	for (int i = 0; i < Size; i++)
		if (flowers[i].cost > 300)
		showflowers(flowers[i]);
}

void file(flowers flowers[], int Size, const int l) {

	ofstream f;
	f.open("data.txt");
	for (int i = 0; i < l; i++) {
		f << endl << "                        Sorted Cost" << endl << endl;
		f << "       Codename\t" << "            Rarity\t" << "          Cost\n";
		bubbleSortcost(flowers, Size);

		for (int i = 0; i < Size; i++)
			if (flowers[i].cost > 300)
			showflowersF(flowers[i]);

		f << endl << "                 Sorted Rarity" << endl << endl;
		f << "       Codename\t" << "            Rarity\t" << "          Cost\n";
		bubbleSortrarity(flowers, Size);

		for (int i = 0; i < Size; i++)
			if (flowers[i].rarity > 5)
			showflowersF(flowers[i]);
	}
	f.close();
}

void write2File(const flowers p[], const int l) {
	ofstream f;
	f.open("data.txt");


	for (int i = 0; i < l; i++)
		f << p[i].codename << "\t"
		<< p[i].rarity << "\t"
		<< p[i].cost << endl;
	f.close();
}

int main() {
	int const Size = 15;
	flowers flowers[Size];
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << "       Codename\t" << "            Rarity\t" << "          Cost\n";
	for (int i = 0; i < Size; i++)
	{
		flowers[i].rarity = 1 + rand() % 10;
		flowers[i].cost = 50 + rand() % 850;
		randString(flowers[i].codename);

		showflowersF(flowers[i]);


	}

	cout << "       Codename\t" << "            Rarity\t" << "          Cost\n";
	for (int i = 0; i < Size; i++)
	{
		flowers[i].rarity = 1 + rand() % 10;
		flowers[i].cost = 50 + rand() % 850;
		randString(flowers[i].codename);

		showflowers(flowers[i]);


	}


	Cout(flowers, Size);
	file(flowers, Size, 1);
	write2File(flowers, Size);

	return 0;
}