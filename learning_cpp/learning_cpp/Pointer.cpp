#include <iostream>
using namespace std;





int main() {
	//pointer (referanslama)
	int sayi1 = 10;
	int *sayi1Ptr; //pointerý bir deðiþken tanýmlarken deðiþkenin türünün yanýna ya da deðiþkenin yanýna * iþareti koyulur. eðer koyulmazsa hata verir.
	sayi1Ptr = &sayi1; //pointerýn sayi1 verilerini alabilesi için tanýmlama yapma

	//*sayi1Ptr = 500;//pointer ile aldýðým verinin deðerini deðiþtirmek için baþýna yýldýz koyulur ve böylede sayi1 yeni deðeri 500 olur

	cout <<"sayi 1 ramdeki konumu"<<"  "<< &sayi1<<endl;//sayý 1in adresini almak için önüne & iþareti konulur bu onun ramdeki yerini göstermeye yarar
	cout <<"sayi 1 degeri" <<"  "<< sayi1<<endl; //sayi 1in deðerini yazdýrýr.
	cout << "sayiPtr sayi1den konumunu alir" << "  " << sayi1Ptr << endl; //sayi1in referansýný sayi1Ptrye göndermesi
	cout << "sayi1Ptr ramdeki konumu" << "  " << &sayi1Ptr << endl;//sayi1Ptr ramdeki yeri
	cout << "sayiPtr ile sayi1 degerine ulasma" << "  " << *sayi1Ptr << endl; //sayi1 deðerini pointer ile sayi1Ptr ile alma 

	/* * iþareti deðere gitme
	 & bellek adresine gitme*/

}