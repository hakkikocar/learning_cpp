#include <iostream>
using namespace std;





int main() {
	//pointer (referanslama)
	int sayi1 = 10;
	int *sayi1Ptr; //pointer� bir de�i�ken tan�mlarken de�i�kenin t�r�n�n yan�na ya da de�i�kenin yan�na * i�areti koyulur. e�er koyulmazsa hata verir.
	sayi1Ptr = &sayi1; //pointer�n sayi1 verilerini alabilesi i�in tan�mlama yapma

	//*sayi1Ptr = 500;//pointer ile ald���m verinin de�erini de�i�tirmek i�in ba��na y�ld�z koyulur ve b�ylede sayi1 yeni de�eri 500 olur

	cout <<"sayi 1 ramdeki konumu"<<"  "<< &sayi1<<endl;//say� 1in adresini almak i�in �n�ne & i�areti konulur bu onun ramdeki yerini g�stermeye yarar
	cout <<"sayi 1 degeri" <<"  "<< sayi1<<endl; //sayi 1in de�erini yazd�r�r.
	cout << "sayiPtr sayi1den konumunu alir" << "  " << sayi1Ptr << endl; //sayi1in referans�n� sayi1Ptrye g�ndermesi
	cout << "sayi1Ptr ramdeki konumu" << "  " << &sayi1Ptr << endl;//sayi1Ptr ramdeki yeri
	cout << "sayiPtr ile sayi1 degerine ulasma" << "  " << *sayi1Ptr << endl; //sayi1 de�erini pointer ile sayi1Ptr ile alma 

	/* * i�areti de�ere gitme
	 & bellek adresine gitme*/

}