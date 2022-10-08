#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "user.h"
#include "oda.h"
#include "bill.h"
#include "recept.h"

int  adminMenu ()
{
	int  c ;
	printf ( " \ t \ t \ t       Otel Yönetimi \ n " );
	printf ( " \ t \ t \ t ================================ \ n " );
	printf ( " \ t \ t \ t       Yönetici Sistemi \ n " );
	printf ( " \ t \ t \ t       * 1 kullanýcýyý göster \ n " );
	printf ( " \ t \ t \ t       * 2 kullanýcý ekle \ n " );
	printf ( " \ t \ t \ t       * 3 kullanýcýyý kaldýr \ n " );
	printf ( " \ t \ t \ t       * 4 kullanýcý þifresini sýfýrla \ n " );
	printf ( " \ t \ t \ t       * 5 kullanýcý bilgilerini düzenle \ n " );
	printf ( " \ t \ t \ t       * 6 yedekleme sistemi \ n " );
	printf ( " \ t \ t \ t       * 0 çýk \ n " );
	printf ( " \ t \ t \ t ================================ \ n " );
	printf ( "lütfen seçin: \ n " );
	scanf ( "% d" , & c );
	süre ( c < 0 || c > 6 )
	{
		printf ( "hatayý tekrar seçin: \ n " );
		scanf ( "% d" , & c );
	}

	dönüþ  c ;
}

int  backup_user ()
{
	Kullanýcý  * head  =  read_user ();
	struct  tm  * newtime ;
	karakter çýktý  dosyasý [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ÇýkýþDosyasý , 128 , "Kullanýcý%% Y m% d H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (çýktý dosyasý , "w" );
	eðer ( fp  ==  NULL )
	{
		perror ( "kullanýcý dosyasýný aç \ n " );
		dönüþ  1 ;
	}
	while ( head  ! =  NULL )
	{
		fprintf ( fp ,  "% -12s" , head -> userId );   // -12 zuoduiqi
		fprintf ( fp ,  "% -7s" , head -> þifre );
		fprintf ( fp ,  "% -9s" , baþ -> ad );
		fprintf ( fp ,  "% -4s" , baþ -> cinsiyet );
		fprintf ( fp ,  "% -8s" , baþ -> rol );
		fprintf ( fp ,  "% -20s \ n " , head -> e-posta );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek kullanýcý baþarýsý \ n " );
	dönüþ  0 ;
}

int  backup_room ()
{
	Oda  * kafa  =  read_room ();
	struct  tm  * newtime ;
	karakter çýktý  dosyasý [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ÇýkýþDosyasý , 128 , "room_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (çýktý dosyasý , "w" );
	eðer ( fp  ==  NULL )
	{
		perror ( "oda dosyasýný aç \ n " );
		dönüþ  1 ;
	}
	while ( baþ -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -10s" , baþ -> tür );
		fprintf ( fp , "% -5d" , head -> fiyat );
		fprintf ( fp , "% -5d" , head -> indirim );
		fprintf ( fp , "% -5d" , head -> cashPledge );
		fprintf ( fp , "% -5d \ n " , head -> durum );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek oda baþarýsý \ n " );
	dönüþ  0 ;
}

int  backup_bill ()
{
	Fatura  * kafa  =  read_bill ();
	struct  tm  * newtime ;
	karakter çýktý  dosyasý [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ÇýkýþDosyasý , 128 , "bill_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (çýktý dosyasý , "w" );
	eðer ( fp  ==  NULL )
	{
		perror ( "fatura dosyasýný aç \ n " );
		dönüþ  1 ;
	}
	while ( baþ -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -5d" , head -> fiyat );
		fprintf ( fp , "% -5d" , head -> yingPrice );
		fprintf ( fp , "% -5d" , head -> realPrice );
		fprintf ( fp , "% -5d" , head -> cashPledge );
		fprintf ( fp , "% -5d" , head -> deðiþtir );
		fprintf ( fp , "% -5d" , head -> durum );   // 1. ?? ?? 0. ? ? ??
		fprintf ( fp , "% -12s" , head -> inDay );
		fprintf ( fp , "% -12s \ n " , head -> outDay );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek fatura baþarýlý \ n " );
	dönüþ  0 ;
}


int  backup_cus ()
{
	Müþteri  * head  =  read_customer ();
	struct  tm  * newtime ;
	karakter çýktý  dosyasý [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ÇýkýþDosyasý , 128 , "cus_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (çýktý dosyasý , "w" );
	eðer ( fp  ==  NULL )
	{
		perror ( "müþteri dosyasýný aç \ n " );
		dönüþ  1 ;
	}
	while ( baþ -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -19s" , head -> cusid );
		fprintf ( fp , "% -9s" , head -> cusname );
		fprintf ( fp , "% -5d" , baþ -> kafes );
		fprintf ( fp , "% -4s" , head -> cussex );
		fprintf ( fp , "% -12s" , head -> telefon );
		fprintf ( fp , "% -12s" , head -> inDay );
		fprintf ( fp , "% -12s" , head -> outDay );
		fprintf ( fp , "% -5d \ n " , head -> durum );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	getchar ();
	printf ( "yedek müþteri baþarýsý \ n " );
	printf ( "devam etmek için herhangi bir tuþa basýn. \ n " );
	getchar ();
	dönüþ  0 ;
}


void  adminSystem ( Kullanýcý  * r )
{
	int  c , döngü = 1 ;
	// Kullanýcý * pr;
	while ( döngü )
	{
		sistem ( "temizle" );
		printf ( " \ n % s" , r -> ad );   // ??? ?? yönetici ? ??
		// showTime (1);
		c  =  adminMenu ();
		anahtarý ( c )
		{
			durum  1 :
				printf ( "kullanýcýyý göster \ n " );
				// pr = read_user ();
				display_user ();
				// scanf ("% d", & c); // kullanýcýya hou keyi jixu 23456 de caozuo göster
				kýrmak ;
			durum  2 :
				printf ( "kullanýcý ekle \ n " );
				add_user ();
				// scanf ("% d", & c);
				kýrmak ;
			durum  3 :
				printf ( "kullanýcýyý sil \ n " );   // shanchu yonghu
				// pr = read_user ();
				deleteuser ();
				// scanf ("% d", & c);
				kýrmak ;
			vaka  4 :
				printf ( "kullanýcý þifresini sýfýrla \ n " );   // ??? ?? ? 123456
				initpassword ();
				// scanf ("% d", & c);
				kýrmak ;
			vaka  5 :
				printf ( "kullanýcý bilgilerini düzenle \ n " );
				edit_information ();   // r ?? ?? ? ? ?? ?? , ? ?? ?? ? ?? ? , ?? ? r ??
				// scanf ("% d", & c);
				kýrmak ;
			vaka  6 :
				printf ( "bekle ... \ n " );
				backup_user ();
				backup_room ();
				backup_bill ();
				backup_cus ();
				kýrmak ;
			durum  0 :
			varsayýlan:
				döngü  =  0 ;
				kýrmak ;
		}
	}

}
