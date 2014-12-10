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

int main(){
	int speed[5] = { 0 };
	int spd = 0;
	int average;

	while (true==true){
		cout << "Give a Speed: ";
		cin >> speed[spd];
		if (speed[spd] < 0){
			break;
		}
		average = (speed[0] + speed[1] + speed[2] + speed[3] + speed[4]) / 5;
		cout << " => " << average << " kmph" << endl;
		spd++;
		if (spd > 4){
			spd = 0;
		}
	}
}



