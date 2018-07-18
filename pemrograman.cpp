#include<iostream>
using namespace std;
void menu ();
class Minuman {//specifiy class
	public://identifief class
		char ulang;
		int pilih;
		void panas ()//outputan menu minuman panas
		{
			cout	<<	"\n\t =Teh Manis\t\t   Rp3.000,00=";
			cout	<<	"\n\t =Susu Jahe\t\t   Rp7.000,00=";
			cout	<<	"\n\t =Teh Susu\t\t   Rp7.000,00=";
			cout	<<	"\n\t =Teh Tarik\t\t   Rp5.000,00=";
			cout	<<	"\n\t =====================================";
		}
		
		void dingin ()//outputan menu minuman dingin
		{
			cout	<<	"\n\t =Es Lemon Tea\t\t   Rp6.000,00=";
			cout	<<	"\n\t =Es Susu\t\t   Rp6.000,00=";
			cout	<<	"\n\t =Es Teh Manis\t\t   Rp3.000,00=";
			cout	<<	"\n\t =Es Teh Tawar\t\t   Rp2.000,00=";
			cout	<<	"\n\t =Es Teler\t\t   Rp8.000,00=";
			cout	<<	"\n\t =Soda Gembira\t\t   Rp9.000,00=";
			cout	<<	"\n\t =Soda Susu\t\t   Rp9.000,00=";	
			cout	<<	"\n\t =====================================";
		}
		
		void juice ()//outputan menu minuman juice
		{
			cout	<<	"\n\t =Juice Alpukat\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Aple\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Belimbing\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Buah Naga Merah\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Buah Naga Putih\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Durian\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Jambu\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Kiwi\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Kopyor\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Lemon\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Mangga\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Marquisa\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Melon\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Nanas\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Nangka\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Pepaya\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Pisang\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Sari Buah\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Semangka\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Sirsak\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Strawbery\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Terong Belanda\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Timun\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Tomat\t\t Rp10.000,00=";
			cout	<<	"\n\t =Juice Wortel\t\t Rp10.000,00=";
			cout	<<	"\n\t =====================================";
			
			
		}
}; 

void balik ()//untuk kembali ke void menu
{
	char kembali;
	cout	<<	"\n\tMau kembali ke menu Minuman? tekan (Y/y) YA lur :)";
	cin		>> kembali;
	if (kembali == 'y' || kembali == 'Y')
	{
		menu();
	}
	else
		cout	<<	"Salah Tekan Kamu lur :)";
}

void menu ()// menu pilihan
{
	Minuman minuman;
	//do {
	system ("cls");//untuk menghapus screen
	cout	<<	"\n\n";
	cout	<<	"\n\t =====================";
	cout	<<	"\n\t =Daftar Menu Minuman=";
	cout	<<	"\n\t =====================";
	cout	<<	"\n\t =1. Panas           =";
	cout	<<	"\n\t =2. Dingin          =";
	cout	<<	"\n\t =3. Juice           =";
	cout	<<	"\n\t =4. Keluar          =";
	cout	<<	"\n\t =====================";
	cout	<<	"\n\t Masukan Pilihan anda untuk melihat daftar menunya :D : ";
	cin		>>	minuman.pilih;
	cout	<<	"\n\t =====================================";
	
		if (minuman.pilih ==1){
			minuman.panas();
			balik();
			}else if (minuman.pilih==2){
				minuman.dingin();
				balik();
  				}else if (minuman.pilih==3){
					minuman.juice();
					balik();
					}else
						cout	<<	"\n\tPilih Yang Bener Lur :D";	
}

int main()
{
	menu ();
	return 0;
}