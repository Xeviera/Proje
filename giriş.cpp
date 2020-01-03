#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void yaz(string satir,float zaman){ 	//bulunan kelimelerin dosyaya kaydedilmesi görevini gerçekleþtiriyor.
	ofstream dosyayaz("output.txt",ios::app);    //dosya yazma iþlemi
	dosyayaz << satir << " Bulunma suresi : " << zaman <<endl;
	dosyayaz.close();
}

void yaz2(string satir,float zaman){                       //eðer kelime yakýn anlamlýysa dosyayaz iþlemi
	ofstream dosyayaz("output.txt",ios::app);
	dosyayaz <<"Bunu mu demek istediniz : "<< "        " << satir << "            " <<"Bulunma süresi : "<< zaman <<endl;
	dosyayaz.close();
}


void aracsv(string aranan){             //csv dosyasýnda arama
	string satir;                       //dosyadan okunacak kelimenin tutulacaðý deðiþken
	ifstream dosyaoku("dosya2.csv");
	do{
		clock_t baslangic = clock(),bitis; //zamaný ölçmek için
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmasý durumunda ikinci harfe geçilmesi için deðiþken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunluðu     
		sUzunluk=satir.length();        //okunan kelimenin uzunluðu
		for(int i=0;i<=sUzunluk;i++){   //arama iþleminin döngüsü
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulunduðunda yazdýrma bloðu
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

void araerr(string aranan){             //error dosyasýnda arama
	string satir;                       //dosyadan okunacak kelimenin tutulacaðý deðiþken
	ifstream dosyaoku("dosya3.err");
	do{
		clock_t baslangic = clock(),bitis;
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmasý durumunda ikinci harfe geçilmesi için deðiþken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunluðu
		sUzunluk=satir.length();     	//okunan kelimenin uzunluðu
		for(int i=0;i<=sUzunluk;i++){   //arama iþleminin döngüsü
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulunduðunda yazdýrma bloðu
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


void aradoc(string aranan){             //doc dosyasýnda arama
	string satir;                       //dosyadan okunacak kelimenin tutulacaðý deðiþken
	ifstream dosyaoku("dosya4.doc");
	do{
		clock_t baslangic = clock(),bitis; //zamaný ölçmek için
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmasý durumunda ikinci harfe geçilmesi için deðiþken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunluðu
		sUzunluk=satir.length();        //okunan kelimenin uzunluðu
		for(int i=0;i<=sUzunluk;i++){   //arama iþleminin döngüsü
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulunduðunda yazdýrma bloðu
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

 
void aratxt(string aranan){             //pdf dosyasýnda arama
	string satir;                       //dosyadan okunacak kelimenin tutulacaðý deðiþken
	ifstream dosyaoku("dosya1.txt");
	do{
		clock_t baslangic = clock(),bitis; //zamaný ölçmek için
		float zaman;
		getline(dosyaoku, satir);       //satiri oku
		int pp=0;                       //ilk harfin bulunmasý durumunda ikinci harfe geçilmesi için deðiþken
		int aUzunluk,sUzunluk;
		aUzunluk=aranan.length();       //aranan kelimenin uzunluðu
		sUzunluk=satir.length();        //okunan kelimenin uzunluðu
		for(int i=0;i<=sUzunluk;i++){   //arama iþleminin döngüsü
			if(aranan[pp]==satir[i])
			pp++;
			else
			pp=0;
			if(pp==aUzunluk){           //kelime bulunduðunda yazdýrma bloðu
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

void yazdir(){                          //ekrana görüntü verme fonksiyonu
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
	yazdir();                           //ekrana bulunanlarý ver
	system("pause");                      
	remove("output.txt");               //diðer aramalarla karýþmamasý için dosyayý sil
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



























