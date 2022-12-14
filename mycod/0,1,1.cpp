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
	printf ( " \ t \ t \ t       Otel Y?netimi \ n " );
	printf ( " \ t \ t \ t ================================ \ n " );
	printf ( " \ t \ t \ t       Y?netici Sistemi \ n " );
	printf ( " \ t \ t \ t       * 1 kullan?c?y? g?ster \ n " );
	printf ( " \ t \ t \ t       * 2 kullan?c? ekle \ n " );
	printf ( " \ t \ t \ t       * 3 kullan?c?y? kald?r \ n " );
	printf ( " \ t \ t \ t       * 4 kullan?c? ?ifresini s?f?rla \ n " );
	printf ( " \ t \ t \ t       * 5 kullan?c? bilgilerini d?zenle \ n " );
	printf ( " \ t \ t \ t       * 6 yedekleme sistemi \ n " );
	printf ( " \ t \ t \ t       * 0 ??k \ n " );
	printf ( " \ t \ t \ t ================================ \ n " );
	printf ( "l?tfen se?in: \ n " );
	scanf ( "% d" , & c );
	s?re ( c < 0 || c > 6 )
	{
		printf ( "hatay? tekrar se?in: \ n " );
		scanf ( "% d" , & c );
	}

	d?n??  c ;
}

int  backup_user ()
{
	Kullan?c?  * head  =  read_user ();
	struct  tm  * newtime ;
	karakter ??kt?  dosyas? [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ??k??Dosyas? , 128 , "Kullan?c?%% Y m% d H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (??kt? dosyas? , "w" );
	e?er ( fp  ==  NULL )
	{
		perror ( "kullan?c? dosyas?n? a? \ n " );
		d?n??  1 ;
	}
	while ( head  ! =  NULL )
	{
		fprintf ( fp ,  "% -12s" , head -> userId );   // -12 zuoduiqi
		fprintf ( fp ,  "% -7s" , head -> ?ifre );
		fprintf ( fp ,  "% -9s" , ba? -> ad );
		fprintf ( fp ,  "% -4s" , ba? -> cinsiyet );
		fprintf ( fp ,  "% -8s" , ba? -> rol );
		fprintf ( fp ,  "% -20s \ n " , head -> e-posta );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek kullan?c? ba?ar?s? \ n " );
	d?n??  0 ;
}

int  backup_room ()
{
	Oda  * kafa  =  read_room ();
	struct  tm  * newtime ;
	karakter ??kt?  dosyas? [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ??k??Dosyas? , 128 , "room_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (??kt? dosyas? , "w" );
	e?er ( fp  ==  NULL )
	{
		perror ( "oda dosyas?n? a? \ n " );
		d?n??  1 ;
	}
	while ( ba? -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -10s" , ba? -> t?r );
		fprintf ( fp , "% -5d" , head -> fiyat );
		fprintf ( fp , "% -5d" , head -> indirim );
		fprintf ( fp , "% -5d" , head -> cashPledge );
		fprintf ( fp , "% -5d \ n " , head -> durum );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek oda ba?ar?s? \ n " );
	d?n??  0 ;
}

int  backup_bill ()
{
	Fatura  * kafa  =  read_bill ();
	struct  tm  * newtime ;
	karakter ??kt?  dosyas? [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ??k??Dosyas? , 128 , "bill_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (??kt? dosyas? , "w" );
	e?er ( fp  ==  NULL )
	{
		perror ( "fatura dosyas?n? a? \ n " );
		d?n??  1 ;
	}
	while ( ba? -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -5d" , head -> fiyat );
		fprintf ( fp , "% -5d" , head -> yingPrice );
		fprintf ( fp , "% -5d" , head -> realPrice );
		fprintf ( fp , "% -5d" , head -> cashPledge );
		fprintf ( fp , "% -5d" , head -> de?i?tir );
		fprintf ( fp , "% -5d" , head -> durum );   // 1. ?? ?? 0. ? ? ??
		fprintf ( fp , "% -12s" , head -> inDay );
		fprintf ( fp , "% -12s \ n " , head -> outDay );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	// getchar ();
	printf ( "yedek fatura ba?ar?l? \ n " );
	d?n??  0 ;
}


int  backup_cus ()
{
	M??teri  * head  =  read_customer ();
	struct  tm  * newtime ;
	karakter ??kt?  dosyas? [ 128 ];
	time_t  t1 ;
	t1  =  zaman ( NULL );
	newtime  =  localtime ( & t1 );
	strftime ( ??k??Dosyas? , 128 , "cus_%% Y m% d_ H%% M% S.txt" , Newtime );
	DOSYA  * fp ;
	fp  =  fopen (??kt? dosyas? , "w" );
	e?er ( fp  ==  NULL )
	{
		perror ( "m??teri dosyas?n? a? \ n " );
		d?n??  1 ;
	}
	while ( ba? -> sonraki  ! =  NULL )
	{
		fprintf ( fp , "% -5d" , head -> roomId );  
		fprintf ( fp , "% -19s" , head -> cusid );
		fprintf ( fp , "% -9s" , head -> cusname );
		fprintf ( fp , "% -5d" , ba? -> kafes );
		fprintf ( fp , "% -4s" , head -> cussex );
		fprintf ( fp , "% -12s" , head -> telefon );
		fprintf ( fp , "% -12s" , head -> inDay );
		fprintf ( fp , "% -12s" , head -> outDay );
		fprintf ( fp , "% -5d \ n " , head -> durum );   // zhuyi jia \ n
		head  =  head -> sonraki ;
	}
	fclose ( fp );

	getchar ();
	printf ( "yedek m??teri ba?ar?s? \ n " );
	printf ( "devam etmek i?in herhangi bir tu?a bas?n. \ n " );
	getchar ();
	d?n??  0 ;
}


void  adminSystem ( Kullan?c?  * r )
{
	int  c , d?ng? = 1 ;
	// Kullan?c? * pr;
	while ( d?ng? )
	{
		sistem ( "temizle" );
		printf ( " \ n % s" , r -> ad );   // ??? ?? y?netici ? ??
		// showTime (1);
		c  =  adminMenu ();
		anahtar? ( c )
		{
			durum  1 :
				printf ( "kullan?c?y? g?ster \ n " );
				// pr = read_user ();
				display_user ();
				// scanf ("% d", & c); // kullan?c?ya hou keyi jixu 23456 de caozuo g?ster
				k?rmak ;
			durum  2 :
				printf ( "kullan?c? ekle \ n " );
				add_user ();
				// scanf ("% d", & c);
				k?rmak ;
			durum  3 :
				printf ( "kullan?c?y? sil \ n " );   // shanchu yonghu
				// pr = read_user ();
				deleteuser ();
				// scanf ("% d", & c);
				k?rmak ;
			vaka  4 :
				printf ( "kullan?c? ?ifresini s?f?rla \ n " );   // ??? ?? ? 123456
				initpassword ();
				// scanf ("% d", & c);
				k?rmak ;
			vaka  5 :
				printf ( "kullan?c? bilgilerini d?zenle \ n " );
				edit_information ();   // r ?? ?? ? ? ?? ?? , ? ?? ?? ? ?? ? , ?? ? r ??
				// scanf ("% d", & c);
				k?rmak ;
			vaka  6 :
				printf ( "bekle ... \ n " );
				backup_user ();
				backup_room ();
				backup_bill ();
				backup_cus ();
				k?rmak ;
			durum  0 :
			varsay?lan:
				d?ng?  =  0 ;
				k?rmak ;
		}
	}

}
