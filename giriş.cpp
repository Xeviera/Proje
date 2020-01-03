#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void yaz(string satir,float zaman){ 	//bulunan kelimelerin dosyaya kaydedilmesi g�revini ger�ekle�tiriyor.
	ofstream dosyayaz("output.txt",ios::app);    //dosya yazma i�lemi
	dosyayaz << satir << " Bulunma suresi : " << zaman <<endl;
	dosyayaz.close();
}

void yaz2(string satir,float zaman){                       //e�er kelime yak�n anlaml�ysa dosyayaz i�lemi
	ofstream dosyayaz("output.txt",ios::app);
	dosyayaz <<"Bunu mu demek istediniz : "<< "        " << satir << "            " <<"Bulunma s�resi : "<< zaman <<endl;
	dosyayaz.close();
}


void aracsv(string aranan){             //csv dosyas�nda arama
	string satir;                       //dosyadan okunacak kelimenin tutulaca�� de�i�ken
	ifstream dosyaoku("dosya2.csv");
	do{
		clock_t baslangic = clock(),bitis; //zaman� �l�mek i�in
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmas� durumunda ikinci harfe ge�ilmesi i�in de�i�ken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunlu�u     
		sUzunluk=satir.length();        //okunan kelimenin uzunlu�u
		for(int i=0;i<=sUzunluk;i++){   //arama i�leminin d�ng�s�
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulundu�unda yazd�rma blo�u
				bitis=clock();			//saati durdurma	
				zaman=baslangic-bitis / CLOCKS_PER_SEC;	
				if(aUzunluk==sUzunluk)
				yaz(satir,zaman);
				else
				yaz2(satir,zaman);
			}	
		}
	}while(!dosyaoku.eof());             //dosya sonu
	
	
}

void araerr(string aranan){             //error dosyas�nda arama
	string satir;                       //dosyadan okunacak kelimenin tutulaca�� de�i�ken
	ifstream dosyaoku("dosya3.err");
	do{
		clock_t baslangic = clock(),bitis;
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmas� durumunda ikinci harfe ge�ilmesi i�in de�i�ken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunlu�u
		sUzunluk=satir.length();     	//okunan kelimenin uzunlu�u
		for(int i=0;i<=sUzunluk;i++){   //arama i�leminin d�ng�s�
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulundu�unda yazd�rma blo�u
				bitis=clock();			//saati durdurma	
				zaman=baslangic-bitis / CLOCKS_PER_SEC;
				if(aUzunluk==sUzunluk)
				yaz(satir,zaman);
				else
				yaz2(satir,zaman);
			}	
		}
	}while(!dosyaoku.eof());             //dosya sonu
	
}


void aradoc(string aranan){             //doc dosyas�nda arama
	string satir;                       //dosyadan okunacak kelimenin tutulaca�� de�i�ken
	ifstream dosyaoku("dosya4.doc");
	do{
		clock_t baslangic = clock(),bitis; //zaman� �l�mek i�in
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmas� durumunda ikinci harfe ge�ilmesi i�in de�i�ken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunlu�u
		sUzunluk=satir.length();        //okunan kelimenin uzunlu�u
		for(int i=0;i<=sUzunluk;i++){   //arama i�leminin d�ng�s�
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulundu�unda yazd�rma blo�u
				bitis=clock();			//saati durdurma	
				zaman=baslangic-bitis / CLOCKS_PER_SEC;
				if(aUzunluk==sUzunluk)
				yaz(satir,zaman);
				else
				yaz2(satir,zaman);
			}	
		}
	}while(!dosyaoku.eof());             //dosya sonu
	
}

 
void aratxt(string aranan){             //pdf dosyas�nda arama
	string satir;                       //dosyadan okunacak kelimenin tutulaca�� de�i�ken
	ifstream dosyaoku("dosya1.txt");
	do{
		clock_t baslangic = clock(),bitis; //zaman� �l�mek i�in
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmas� durumunda ikinci harfe ge�ilmesi i�in de�i�ken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunlu�u
		sUzunluk=satir.length();        //okunan kelimenin uzunlu�u
		for(int i=0;i<=sUzunluk;i++){   //arama i�leminin d�ng�s�
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulundu�unda yazd�rma blo�u
				bitis=clock();			//saati durdurma	
				zaman=baslangic-bitis / CLOCKS_PER_SEC;
				if(aUzunluk==sUzunluk)
				yaz(satir,zaman);
				else
				yaz2(satir,zaman);
			}	
		}
	}while(!dosyaoku.eof());             //dosya sonu
}

void yazdir(){                          //ekrana g�r�nt� verme fonksiyonu
  	ifstream dosyaOku("output.txt");
  	string okunan;
	do{
   		(getline(dosyaOku, okunan));    //satiri oku
    	cout << okunan << endl;			//ekrana ver
	}while(!dosyaOku.eof());	
	dosyaOku.close();
}




int main(){
	string aranan;                      //aranacak kelime
	cout<<"Aranacak kelime : "<<endl;
	cin>>aranan;
	araerr(aranan);                     //bul
	yazdir();                           //ekrana bulunanlar� ver
	system("pause");                      
	remove("output.txt");               //di�er aramalarla kar��mamas� i�in dosyay� sil
	aradoc(aranan);
	yazdir();
	system("pause");
	remove("output.txt");
	aratxt(aranan);
	yazdir();
	system("pause");
	remove("output.txt");
	aracsv(aranan);
	yazdir();
	system("pause");
	remove("output.txt");
	return 0;
}



























