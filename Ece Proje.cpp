#include <iostream>
#include <fstream>
#include <windows.h>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;
struct Araba{
	int kiraucreti[3]={114,226,200};
};

struct Musteri{
string musteritc;
 string musteriad;
string musteritelefon;
  string musteriadres;
  	
	
};
void siralamaalgoritmasi(int dizi[]){
	
	int i,j,enkucuk,temp;
	for(i=0;i<2;i++ )
	{
		enkucuk=i;
		for(j=i+1;j<3;j++)
		{
			if(dizi[j]<dizi[enkucuk]){
				enkucuk=j;
			}
			
		}
		temp=dizi[i];
		dizi[i]=dizi[enkucuk];
		dizi[enkucuk]=temp;
	}
	
}
void musterisayar(){
	string okunan;
	float sayi1;
	string sifir="0";
ifstream dosya_ara44("Musteri Sayac.txt");
				while(!dosya_ara44.eof()){
					getline(dosya_ara44,okunan);
}
stringstream cevir(okunan);
					cevir>>sayi1;
						sayi1=sayi1+1;
						ofstream dosya_acma57("Musteri Sayac.txt",ios::app);
						dosya_acma57<<endl<<sayi1;
						dosya_acma57.close();
dosya_ara44.close();
cout<<"Bugunki Programi Ziyaret Eden Kullanici Sayisi ="<<sayi1;
}


void kiralama(){
	Musteri musteridata;
system("cls");
	int secim1_1;
	int secim1_2;
	cout<<"1)ISTANBUL"<<endl;
		cout<<"2)IZMIR"<<endl;
		cout<<"3)ANKARA"<<endl<<endl<<endl;
		cout<<"OTURDUGUNUZ SEHIRI SECINIZ:";
		cin>>secim1_1;
		switch(secim1_1){
			case 1:{
			system("cls");
				cout<<"SÝZE UYGUN ARABAMIZ EKTEDIR"<<endl;
					cout<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
					cout<<"    114             34_AS_234422         BMW            M4             ISTANBUL"<<endl;
					cout<<"------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
					cout<<"DEVAM ETMEK ISTIYORSANIZ 1'E ISTEMIYORSANIZ 2'E BASINIZ =";cin>>secim1_2;
					if(secim1_2==1){
					system("cls");
						cout<<"TC'nizi Yaziniz =";cin>>musteridata.musteritc;
						cout<<"Adinizi Yaziniz =";cin>>musteridata.musteriad;
						cout<<"Telefon Numaranizi Basinda 0 Olmadan Giriniz =";cin>>musteridata.musteritelefon;
							ofstream dosya_acma("Musteri Data.txt",ios::app);
						dosya_acma<<musteridata.musteritc<<"     "<<musteridata.musteriad<<"     "<<musteridata.musteritelefon<<endl;
						dosya_acma<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
						dosya_acma.close();
							cout<<"ARACINIZ KIRALANMISTIR!!"<<endl;
							}
					
						system("pause");
						break;
					}
					case 2:{
						system("cls");
				cout<<"SÝZE UYGUN ARABAMIZ EKTEDIR"<<endl;
					cout<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
					cout<<"    200             04_CS_221222         TOYOTA         COROLLA        IZMIR"<<endl;
					cout<<"------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
					cout<<"DEVAM ETMEK ISTIYORSANIZ 1'E ISTEMIYORSANIZ 2'E BASINIZ =";cin>>secim1_2;
					if(secim1_2==1){
					system("cls");
						cout<<"TC'nizi Yaziniz =";cin>>musteridata.musteritc;
						cout<<"Adinizi Yaziniz =";cin>>musteridata.musteriad;
						cout<<"Telefon Numaranizi Basinda 0 Olmadan Giriniz =";cin>>musteridata.musteritelefon;
							ofstream dosya_acma32("Musteri Data.txt",ios::app);
						dosya_acma32<<musteridata.musteritc<<"     "<<musteridata.musteriad<<"     "<<musteridata.musteritelefon<<endl;
						dosya_acma32<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
						dosya_acma32.close();
					cout<<"ARACINIZ KIRALANMISTIR!!"<<endl;	}
						
						system("pause");
						break;
					}
					case 3:{
						system("cls");
				cout<<"SÝZE UYGUN ARABAMIZ EKTEDIR"<<endl;
					cout<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
					cout<<"    226             06_S_2123123         AUDI           A8             ANKARA"<<endl;
					cout<<"------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
					cout<<"DEVAM ETMEK ISTIYORSANIZ 1'E ISTEMIYORSANIZ 2'E BASINIZ =";cin>>secim1_2;
					if(secim1_2==1){
					system("cls");
						cout<<"TC'nizi Yaziniz =";cin>>musteridata.musteritc;
						cout<<"Adinizi Yaziniz =";cin>>musteridata.musteriad;
						cout<<"Telefon Numaranizi Basinda 0 Olmadan Giriniz =";cin>>musteridata.musteritelefon;
							ofstream dosya_acma33("Musteri Data.txt",ios::app);
						dosya_acma33<<musteridata.musteritc<<"     "<<musteridata.musteriad<<"     "<<musteridata.musteritelefon<<endl;
						dosya_acma33<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
						dosya_acma33.close();
						cout<<"ARACINIZ KIRALANMISTIR!!"<<endl;	}
					
						system("pause");
						break;
					}
						default:
						{
			system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
			break;}
			}
		}
		

void enuygunkiralama(){
		Musteri musteridata1;
	system("cls");
	int secim1_3;
				cout<<"SÝZE UYGUN ARABAMIZ EKTEDIR"<<endl;
					cout<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
					cout<<"    114             34_AS_234422         BMW            M4             ISTANBUL"<<endl;
					cout<<"------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
					cout<<"DEVAM ETMEK ISTIYORSANIZ 1'E ISTEMIYORSANIZ 2'E BASINIZ =";cin>>secim1_3;
					if(secim1_3==1){
					system("cls");
						cout<<"TC'nizi Yaziniz =";cin>>musteridata1.musteritc;
						cout<<"Adinizi Yaziniz =";cin>>musteridata1.musteriad;
						cout<<"Telefon Numaranizi Basinda 0 Olmadan Giriniz =";cin>>musteridata1.musteritelefon;
							ofstream dosya_acma12("Musteri Data.txt",ios::app);
						dosya_acma12<<musteridata1.musteritc<<"     "<<musteridata1.musteriad<<"     "<<musteridata1.musteritelefon<<endl;
						dosya_acma12<<"--------------------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"ARACINIZ KIRALANMISTIR!!"<<endl;
						dosya_acma12.close();
						}	
						system("pause");
						
}
void musteriprogram(){
	Araba kiracekme1;
	int secim1;
	int secim2;
	int secim3;
	int secim4;
	int siralanmispara1,siralanmispara2,siralanmispara3;
	ostringstream str1;
	ostringstream str2;
	ostringstream str3; 
	siralamaalgoritmasi(kiracekme1.kiraucreti);
	siralanmispara1=kiracekme1.kiraucreti[0];
	siralanmispara2=kiracekme1.kiraucreti[1];
	siralanmispara3=kiracekme1.kiraucreti[2];
	str1<<siralanmispara1;
	str2<<siralanmispara2;
	str3<<siralanmispara3;
	string siralanmisayi1=str1.str();
	string siralanmisayi2=str2.str();
	string siralanmisayi3=str3.str();
			string okunan;	
			string okunan1;	
			string okunan2;
			string okunan3;
	cout<<"ARABA KIRALAMAK ICIN 1'E BASINIZ!!"<<endl;
	cout<<"ARABALARI GORMEK ICIN 2'YE BASINIZ!!"<<endl;
	cout<<"YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ == ";
	cin>>secim1;
	switch(secim1){
		case 1:{
		system("cls");
			cout<<"SIZE UYGUN FIRSATLAR ICIN 1'E BASINIZ!!"<<endl;
			cout<<"BUTUN ARAC FLOMUZU GORMENIZ ICIN 2'YE BASINIZ!!"<<endl;
				cout<<"YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ == ";
				cin>>secim3;
			switch(secim3){
				case 1:{system("cls");
					cout<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
					cout<<"    114             34_AS_234422         BMW            M4             ISTANBUL"<<endl;
					cout<<"------------------------------------------------------------------------------------------------------"<<endl;
					cout<<"BU ARABAYLA DEVAM ETMEK ISTIYORSANIZ 1'E BASINIZ!!"<<endl;
					cout<<"BUTUN ARAC FLOMUZU GORMENIZ ICIN 2'YE BASINIZ!!"<<endl;
					cout<<"YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ == ";
					cin>>secim4;
					if(secim4==1){system("cls");
						enuygunkiralama();
					}
					else if(secim4=='2'){system("cls");
						kiralama();
					}
					else{
						break;
					}
					break;
				}
				case 2:{system("cls");
					kiralama();
					
					break;
				}
			  default:{
			  	system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
				break;
			  }
			}
			
		system("cls");
			
			break;
		}
		case 2:{
		system("cls");
		cout<<"FIYATA GORE AZALAN TURUNDE SIRALAMAK ICIN 1'E BASINIZ!!"<<endl;
		cout<<"FIYATA GORE ARTAN TURUNDE SIRALAMAK ICIN 2'E BASINIZ!!"<<endl;
		cout<<"YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ == ";
		cin>>secim2;
			switch(secim2){
				
				case 1:{  
				system("cls");
				siralamaalgoritmasi(kiracekme1.kiraucreti);
				ifstream dosya_ara("Araba Data.txt");
				while(!dosya_ara.eof()){
					getline(dosya_ara,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi1==okunan1){
						ofstream dosya_ac1("Kucukten Buyuge.txt",ios::app);
						dosya_ac1<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac1<<okunan<<endl;
						dosya_ac1<<"------------------------------------------------------------------------------------------------------"<<endl;
						dosya_ac1.close();
						}
						
				}
				dosya_ara.close();
				ifstream dosya_ara1("Araba Data.txt");
				while(!dosya_ara1.eof()){
					getline(dosya_ara1,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi2==okunan1){
						ofstream dosya_ac2("Kucukten Buyuge.txt",ios::app);
						dosya_ac2<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac2<<okunan<<endl;
						dosya_ac2<<"------------------------------------------------------------------------------------------------------"<<endl;
					dosya_ac2.close();	
					}
						
				}
			dosya_ara1.close();
			ifstream dosya_ara2("Araba Data.txt");
				while(!dosya_ara2.eof()){
					getline(dosya_ara2,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi3==okunan1){
						ofstream dosya_ac3("Kucukten Buyuge.txt",ios::app);
						dosya_ac3<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac3<<okunan<<endl;
						dosya_ac3<<"------------------------------------------------------------------------------------------------------"<<endl;
						dosya_ac3.close();	
						}
			
				}
				dosya_ara2.close();
			
			ifstream dosya_yazma("Kucukten Buyuge.txt");
			while(!dosya_yazma.eof()){
				getline(dosya_yazma,okunan2);
				cout<<okunan2<<endl;	
			}
				dosya_yazma.close();
			system("pause");
			
					break;
				
				}
				case 2:{   
				system("cls");
				siralamaalgoritmasi(kiracekme1.kiraucreti);
				ifstream dosya_ara4("Araba Data.txt");
				while(!dosya_ara4.eof()){
					getline(dosya_ara4,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi3==okunan1){
						ofstream dosya_ac4("Buyukten Kucuge.txt",ios::app);
						dosya_ac4<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac4<<okunan<<endl;
						dosya_ac4<<"------------------------------------------------------------------------------------------------------"<<endl;
						dosya_ac4.close();
						}
						
				}
				dosya_ara4.close();
				ifstream dosya_ara5("Araba Data.txt");
				while(!dosya_ara5.eof()){
					getline(dosya_ara5,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi2==okunan1){
						ofstream dosya_ac5("Buyukten Kucuge.txt",ios::app);
						dosya_ac5<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac5<<okunan<<endl;
						dosya_ac5<<"------------------------------------------------------------------------------------------------------"<<endl;
					dosya_ac5.close();	
					}
						
				}
			dosya_ara5.close();
			ifstream dosya_ara6("Araba Data.txt");
				while(!dosya_ara6.eof()){
					getline(dosya_ara6,okunan);
					string okunan1=okunan.substr(4,3);
					if(siralanmisayi1==okunan1){
						ofstream dosya_ac6("Buyukten Kucuge.txt",ios::app);
						dosya_ac6<<"|ARABA KIRASI|         |PLAKA|         |MARKA|        |MODEL|       |KIRALAYAN YER|    "<<endl;
						dosya_ac6<<okunan<<endl;
						dosya_ac6<<"------------------------------------------------------------------------------------------------------"<<endl;
						dosya_ac6.close();	
						}
			
				}
				dosya_ara6.close();
				ifstream dosya_yazma3("Buyukten Kucuge.txt");
			while(!dosya_yazma3.eof()){
				getline(dosya_yazma3,okunan3);
				cout<<okunan3<<endl;	
			}
			dosya_yazma3.close();
			system("pause");
					break;
				}
				default:{
			system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
			break;}
			}
			break;
		}
		default:{
			system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
			break;}
	}
	
}
void yetkiliprogram(){system("cls");
	int secim3_1;
	int girilensifre;
	string okunan116;
	string bilgiler;
	string islem_ara_no1;
				string islem_ara_okunan1;
				string islem_ara_eslesen1;
				int islem_ara_uzunluk1;
	int sifre=112233;
	cout<<"LUTFEN YETKILI SIFRENIZI GIRINIZ =";
	cin>>girilensifre;
	if(sifre==girilensifre){
		system("cls");
		cout<<"MUSTERILERINIZI GORMEK ISTIYORSANIZ 1'E BASINIZ!!"<<endl;
		cout<<"BUGUN KI ZIYARETCI SAYISINI GORMEK ISTIYORSANIZ 2'E BASINIZ!!"<<endl;
		cout<<"MUSTERI ARAMAK ISTIYORSANIZ 3'E BASINIZ!!"<<endl;
		cout<<"YAPMAK ISTEDIGINIZ ISLEM =";cin>>secim3_1;
		
		switch(secim3_1){
			case 1:{
				system("cls");
				ifstream dosya_oku144("Musteri Data.txt");
				while(!dosya_oku144.eof()){
					getline(dosya_oku144,okunan116);
					bilgiler=okunan116;
					cout<<okunan116<<endl;
				}
				dosya_oku144.close();

				system("pause");
				cout<<bilgiler<<endl;
				break;
			}
			case 2:{system("cls");
				musterisayar();
				break;
			}
			case 3:{system("cls");
				do{
				cout<<"LUTFEN MUSTERI TC NO'YU GIRINIZ=";
				cin>>islem_ara_no1;
				islem_ara_uzunluk1 = islem_ara_no1.size();
				
					if(islem_ara_uzunluk1 != 11){  //GIRILEN NO 5 HANEYE ESIT DEGILSE HATA VER.
							system("cls");
						cout <<"HATA ! : LUTFEN 1 HANELI TC NO'YU GIRINIZ !"<<endl<<endl;
					}
					
				}
				while(islem_ara_uzunluk1!=11);
			system("cls");
				ifstream dosya_aramakurtarma("Musteri Data.txt");
				while(!dosya_aramakurtarma.eof()){
						getline(dosya_aramakurtarma,islem_ara_okunan1);
						islem_ara_eslesen1=islem_ara_okunan1.substr(0,11);
						 if(islem_ara_no1 == islem_ara_eslesen1){
						 	cout<<"------------------------------------------------------------------------------------------------------"<<endl;
							 	cout<<"|ILGILI MUSTERI HAKKINDA BILGI|  <-------------->  ";
							 	cout <<islem_ara_okunan1<<endl;
							 		cout<<"------------------------------------------------------------------------------------------------------"<<endl;
							 	system("pause");
							 }
						}
						dosya_aramakurtarma.close();
			
			break;
				}
				
				default:{
				system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
			break;	
			}
			
	
		}
		}
		
	else{
 		cout<<"Yanlis Sifre Girdiniz!!";
	}
}

int main(){
	
	int secim;
	system("color F4");
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
			cout<<"*******************                                                                     ********************"<<endl;
	cout<<"***************                            ECE RENT A CAR                                   ****************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************\n\n\n"<<endl;
	cout<<"                        MUSTERI GIRISI ICIN LUTFEN 1'E TIKLAYINIZ!!"<<endl;
	cout<<"                        YETKILI GIRISI ICIN LUTFEN 2'E TIKLAYINIZ!!"<<endl;
	cout<<"                        CIKIS ICIN HERHANGI BIR TUSA BASINIZ!!\n"<<endl;
	cout<<"                        YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ == ";
	cin>>secim;
	switch(secim){
		case 1:{
			system("cls");
			 musteriprogram();
			
			break;
		}
		case 2:{
			system("cls");
			 yetkiliprogram();
			break;
		}
		default:{
			system("cls");
			cout<<"YANLIS SECIM YAPTINIZ PROGRAMDAN CIKILIYOR!"<<endl;
			break;
		}
		
		
	}
	return 0;
}
