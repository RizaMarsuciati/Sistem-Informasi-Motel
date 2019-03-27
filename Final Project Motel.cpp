#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <conio.h>
#include <ctime>
#include <stdio.h>

using namespace std;

 void time()
 {
 	time_t now=time(0);
	
	char* dt=ctime(&now);
	
	cout<<"							Tanggal dan Waktu Lokal Saat Ini : "<<dt<<endl;
 }
 
 void head()
	{
	cout<<"========================================================================================================================================================================"<<endl;
	cout<<"								MOTEL PUNOKAWAN	"<<endl;
	cout<<"						JL.Ring Road Utara, Condongcatur Depok Sleman Yogyakarta "<<endl;
	cout<<"								(0274) 884201 "<<endl;
	cout<<"========================================================================================================================================================================"<<endl;
}
void foot()
{
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"								TERIMA KASIH"<<endl;
	cout<<"								SUKSES SELALU"<<endl;
}

int main(){

	char ch,jwb;
	int a, b, d, c, e, f, i, k, j, m;
	int pil;
	
	struct room{
	int nokmr;
	char nmkmr[10];
	int bnyk;
	int hrg;
}kamar[50];

	struct guest{
	int notamu;
	int nocs;
	char hp[15];
	char cs[30];
	char nmtamu[30];
	char addr[30];
	char jk[5];
}tamu[50];

	struct sewa{
	int codesewa;
	int codebook;
	int nobook;
	char checkout[10];
	int total;
	int lma;
	float disc;
	int um;
	int krg;
}sewa[50];

d=0;
e=0;

login:
	system("cls");
	time();
	head();
	cout<<endl;
	cout<<"								Ketentuan : "<<endl;
	cout<<"								Hanya Untuk Admin"<<endl<<endl<<endl;
	cout<<"								Tekan enter untuk lanjut ..."<<endl;
	for(i=1;i<=3;i++){
		string user = "";
		string pass = "";
	cout<<"								Masukkan Username	= ";
	cin>>user;
	if((user=="riza")||(user=="eko")||(user=="agus")||(user=="hanny"))
	{
	cout<<"								Masukkan Password	= ";
	ch=getch();
	while(ch !=13)
	{
	pass.push_back(ch);
	cout<<'*';
	ch=getch();
	}
	
	if(pass=="admin")
	{
		cout<<endl;
		cout<<"Login Berhasil"<<endl;
		foot();
		system("pause");
		goto menu;
	}
	else
	{
		cout<<endl;
		cout<<"Login Gagal"<<endl;
		foot();
		system("pause");
		goto login;
		
		
	}
	}
	
	}

menu :
	system("cls");
	
	time_t now=time(0);
	
	char* dt=ctime(&now);
	
	cout<<"							Tanggal dan Waktu Lokal Saat Ini : "<<dt<<endl;

	head();
	cout<<endl;
	cout<<"									PILIH MENU:"<<endl;
	cout<<"									1. UTAMA"<<endl;
	cout<<"									2. INPUT KAMAR"<<endl;
	cout<<"									3. DAFTAR KAMAR"<<endl;
	cout<<"									4. REGISTRASI"<<endl;
	cout<<"									5. INFORMASI CUSTOMER"<<endl;
	cout<<"									6. BOOKING"<<endl;
	cout<<"									7. PEMBAYARAN"<<endl;
	cout<<"									8. EXIT"<<endl;
	cout<<endl;
	cout<<"									Masukkan Pilihan : ";
	cin>>pil;
	system("cls");
	switch(pil){
		case 1:
			goto login;
			break;
		case 2:
			goto masuk;
			break;
		case 3:
			goto today;
			break;
		case 4:
			goto reg;
			break;
		case 5:
			goto data;
			break;
		case 6:
			goto book;
			break;
		case 7:
			goto bayar;
			break;
		case 8:
			goto akhir;
			break;
		default:
			cout<<"					Keyword Yang Anda Masukkan Salah"<<endl;
			cout<<endl;
			goto menu;
			break;
	}
masuk:
	time();
	head();
	cout<<endl;
	cout<<"								KAMAR TERSEDIA HARI INI"<<endl<<endl;
	cout<<"Inputkan Kamar Yang Akan Dibuka Untuk Hari Ini\t\t: ";
	cin>>a;
	for(b=0; b<a; b++){
		cout<<"Inputkan Kamar ke-"<<b+1<<endl;
		cout<<"Inputkan Id_Kamar\t\t:";
		cin>>kamar[b].nokmr;
		cout<<"Inputkan Nama Kamar\t\t:";
		cin>>kamar[b].nmkmr;
		cout<<"Inputkan Banyak Kamar\t\t:";
		cin>>kamar[b].bnyk;
		cout<<"Inputkan Harga Kamar\t\t:";
		cin>>kamar[b].hrg;
		cout<<endl;
		system("pause");
}
	foot();
	
today:
	system("cls");
	time();
	head();
	cout<<"								KAMAR TERSEDIA HARI INI";
	cout<<endl;
	cout<<" | Id Kamar | Nama Kamar | Banyak Kamar | Harga Kamar | "<<endl;
	cout<<endl;
	for(b=0; b<a; b++){
	cout<<"     "<<kamar[b].nokmr<<"\t      "<<kamar[b].nmkmr<<"\t        "<<kamar[b].bnyk<<"\t  "<<kamar[b].hrg<<endl;
	}
	cout<<endl;
	system("pause");
	foot();
	goto menu;
	
reg:
	time();
	head();
	cout<<endl;
	for(d=c; d<c+1; d++){
		cout<<"					ID Customer Service\t\t: ";
		cin>>tamu[d].nocs;
		cout<<"					Customer Service\t\t: ";
		cin>>tamu[d].cs;
		cout<<"					ID Tamu\t\t\t\t: ";
		cin>>tamu[d].notamu;
		cout<<"					Nama Tamu\t\t\t: ";
		cin>>tamu[d].nmtamu;
		cout<<"					Nomor Telepon\t\t\t: ";
		cin>>tamu[d].hp;
		cout<<"					Alamat\t\t\t\t: ";
		cin>>tamu[d].addr;
		cout<<"					Jenis Kelamin (L/P)\t\t: ";
		cin>>tamu[d].jk;
		cout<<endl;
	}
	c=c+1;
	k=c;
	cout<<"					Input Data Lagi?? Y/N\t\t:";
	cin>>jwb;
	if(jwb=='Y'||jwb=='y'){
		system("pause");
		foot();
		goto reg;
	}else{
	system("cls");
	goto menu;
	}
	
data:
	time();
	head();
	cout<<endl;
	cout<<"| ID Tamu | Nama Tamu | No Telp |"<<endl;
	cout<<endl;
	for(d=1; d<c; d++){
	cout<<"  "<<tamu[d].notamu<<"        "<<tamu[d].nmtamu<<"      "<<tamu[d].hp<<endl;
	}
	cout<<endl;
	foot();
	system("pause");
	goto menu;
	
book:
	time();
	head();
	cout<<endl;
	for(f=e; f<e+1; f++){
		cout<<"					No Booking\t\t\t\t: ";
		cin>>sewa[f].nobook;
		cout<<"					Kode Booking\t\t\t\t: ";
		cin>>sewa[f].codebook;
		for(d=0;d<c-1;d++){
			if(tamu[i].notamu==sewa[f].nobook){
		
		cout<<"					Nama tamu\t\t\t\t: "<<tamu[i].nmtamu<<endl;
		}
		else
		{
			cout<<"					Data Tidak ada"<<endl;
			cout<<"					Inputkan Data Lagi?? Y/N\t\t: ";
			cin>>jwb;
	if(jwb=='Y'||jwb=='y'){
		foot();
		system("pause");
		goto book;
	}else{
	system("cls");
	foot();
	system("pause");
	goto menu;
	}			}
		}
		cout<<"					ID Kamar\t\t\t\t: ";
		cin>>sewa[f].codesewa;
		for(b=0; b<a; b++){
			if(kamar[b].nokmr==sewa[f].codesewa){
				cout<<"					Nama Kamar\t\t\t\t: "<<kamar[b].nmkmr<<endl;
			}else{
				break;
				cout<<" Data tidak ada!! "<<endl;
				foot();
				goto book;
				
			}
		}
cout<<"					Masukkan Lama Waktu Menginap\t\t: ";
cin>>sewa[f].lma;

if(sewa[f].lma>=2)
{
	sewa[f].disc=0.5;
}
else
{
	sewa[f].disc=0;
}
		cout<<"					Tanggal Checkin\t\t\t\t: "<<dt<<endl;
		cout<<"					Tanggal Checkout\t\t\t: ";
		cin>>sewa[f].checkout;
		cout<<endl;
	}
	cout<<"					Input data lagi?? Y/N\t\t\t : ";
	cin>>jwb;
	if(jwb=='Y'||jwb=='y'){
		foot();
		goto book;
	}else{
		e=e+1;
		foot();
		system("cls");
		goto menu;
	}
	
bayar:
	time();
	head();
	cout<<endl;
	cout<<"					TOTAL TAGIHAN ANDA"<<endl;
	cout<<endl;
	cout<<endl;
	for(j=0; j<e; j++){
	cout<<"					No Booking\t\t : "<<sewa[j].nobook<<endl;
	cout<<"					Kode Booking\t\t : "<<sewa[j].codebook<<endl;
	for(i=1; i<k; i++){
	if(tamu[i].notamu=sewa[j].nobook){
					
	cout<<"					Nama Tamu\t\t : "<<tamu[i].nmtamu<<endl;
				}
			}
	cout<<"					ID Kamar\t\t : "<<sewa[j].codesewa<<endl;
	for(b=0; b<a; b++){
	if(kamar[b].nokmr==sewa[j].codesewa){
	cout<<"					kamar\t\t\t : "<<kamar[b].nmkmr<<endl;
				}
			}
	cout<<" 					Tanggal Checkin\t\t : "<<dt<<endl;
	cout<<"					Tanggal Checkout\t : "<<sewa[j].checkout<<endl;
		}
			
billing:
	for(m=0; m<e; m++){
	sewa[m].total=kamar[m].hrg*sewa[m].lma;
	cout<<"					Total bayar\t\t : "<<sewa[m].total<<endl;
	cout<<endl;
	cout<<"					Uang Muka\t\t : ";
	cin>>sewa[m].um;
sewa[m].krg=sewa[m].total-sewa[m].um;
if(sewa[m].total>=sewa[m].um)
{
	cout<<"					Kekurangan\t\t : "<<sewa[m].krg<<endl;
}
else
{
	cout<<"					Kembali\t\t\t : "<<sewa[m].krg*(-1)<<endl;
}
	}
cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
cout<<"							Terimakasih Telah Berkunjung dan Menginap Di Motel PUNOKAWAN"<<endl;
cout<<"								Sebagai Tempat Istirahat Pilihan Anda"<<endl;
cout<<"								Kami Tunggu Kedatangan Anda Berikutnya"<<endl;
cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"					Kembali Kemenu Utama?? Y/N :";
	cin>>jwb;
	system("pause");
	if(jwb=='Y'||jwb=='y'){
	goto menu;
	}else {
	system("cls");
	goto akhir;
		}
		
akhir:

	system("cls");
	system("color B0");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"========================================================================================================================================================================"<<endl;
	cout<<"								TERIMAKASIH	"<<endl;
	cout<<"								SUKSES SELALU "<<endl;
	cout<<"								KELOMPOK 01\t\t  "<<endl;
	cout<<"								- Riza Marsuciati (16.02.9237)"<<endl;
	cout<<"								- Pitri Eko Roman Jasumah (16.02.9273)"<<endl;
	cout<<"								- Mukhammad Agus Suliyanto (16.02.9270)"<<endl;
	cout<<"								- Hanny Octa Reynaldi (16.02.9234)"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"								PEMROGRAMAN TERSTRUKTUR"<<endl;
	cout<<"								Dosen : Yuli Astuti, M.Kom"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"								D3-MANAJEMEN INFORMATIKA-01"<<endl;
	cout<<"								UNIVERSITAS AMIKOM YOGYAKARTA"<<endl;
	cout<<"========================================================================================================================================================================"<<endl;
	
system("break");

}

