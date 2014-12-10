/******************************************
Tehtävä:Harjoitus 19 (Palautus vko 47)
Tekijä: Juho Nissi
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava : Näppäimistö toimii
nopeusanturina ja näyttö mittarin näyttönä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle.Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava :
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila)nopeus = 0 km / h
Anna nopeus : 10 = > 2 km / h
Anna nopeus : 20 = > 6 km / h
Anna nopeus : 30 = > 12 km / h
Anna nopeus : 40 = > 20 km / h
Anna nopeus : 50 = > 30 km / h
Anna nopeus : 50 = > 38 km / h
Anna nopeus : 50 = > 44 km / h
Anna nopeus : 50 = > 48 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : -5 = > loppu

Toteuta kayttaen taulukkoa.
Versio 2.0
PÄiväys: 8.12.2014
********************************/

#include <iostream>
using namespace std;

int Avarage(int[]);

int main(){
	int spd[5] = { 0 };
	int input_spd = 0;
	int i = 0;

	while (input_spd >= 0){
		cout << "Give a Speed: ";
		cin >> input_spd;
		cin.get();

		spd[i] = input_spd;
		i < 5 - 1 ? i++ : i = 0;
		cout << " ===> ";
		cout << Avarage(spd);
		cout << " kmph" << endl;
	}
}

int Avarage(int arg[]){
	int e = sizeof(arg)+1;
	int a = 0;
	for (int i = 0; i < e; i++){
		a += arg[i];
	}
	return a / e;
}

