//Kullanicidan bir sayi alip verilen sayi kadar sayiyi okuyunuz. Bu sayilarin icerisindeki pozitif, negatif ve sifirlarin oranini dondurunuz.
//Sayilari yanyana girmeyin! teker teker enterlayarak girin.
#include <iostream>
using namespace std;
int main(){

int n;
cout << "lutfen kac sayi gireceginizi belirtiniz! :";
cin >> n;
int esayi = 0, asayi = 0, ssayi = 0;
for (int i = 0; i < n; i++) {
	int g;
	cin >> g;
	if (g > 0)
		asayi++;
	else if (g < 0)
		esayi++;
	else
		ssayi++;
}		
cout << "Pozitifler:" << (float)asayi / n << endl;
cout << "Eksiler:" << (float)esayi / n << endl;
cout << "Sifirlar:" << (float)ssayi / n << endl;
}