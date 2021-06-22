#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <cstdio>
#define max 100

using namespace std;

int head,tail,pilih;
bool ketemu = false;


void init(){
	head = 0;
	tail = 0;

}
bool isEmpty(){
	if (tail == 0)
		return true;
	else
		return false;	
}

bool isFull(){
	if (head == max)
		return true;
	else
		return false;	
}
struct Penduduk
{
   
    char nama[1000];
    char umur[1000];
	char nohp[1000];
};

Penduduk data[1000];

int i=0;


void daftar()
{
	if (isFull()){
		cout<<"Antrian Penuh";
	}
	else{
		cout<<"\t\t 		Silahkan isi untuk Data diri \n";
		cout<<"\t\t ==================================================\n";
		cout<<"\t\t Masukkan Nama 	: ";
		cin>>data[tail].nama;
		cout<<"\t\t Masukkan Umur 	: ";
		cin>>data[tail].umur;
		cout<<"\t\t Nomer HP 	: ";
		cin>>data[tail].nohp;
		tail++;
		
		
	}
	system("cls");
	getchar();
}

void list()
{
        if (isEmpty()==false){
            int a;
            cout<<"             List Data Penduduk\n";
            cout<<"===================================================\n";
            for (a=head;a<tail;a++)
            {
                cout<<"  "<<a+1<<"\t"<<data[a].nama<<"\t\t"<<data[a].umur<<"\t\t"<<data[a].nohp<<endl;
            }
            cout<<"=====================================================\n";
        	cout<<"\n\n\n";
			}

        else{
            cout<<"Antrian Kosong !\n";
            } 
 
}

void cari()
{
	string cari;

		cout<<"Masukkan Nama yang akan dicari : ";
		cin>>cari;

		for(int a=head; a<tail; a++)
		{
				if(data[a].nama == cari)
				{
					ketemu = true;
					break;
				}

		}
		if(ketemu)
		{
			cout<<"Nama Ditemukan"<<endl;
		}
		else
		{
			cout<<"Nama Tidak Ditemukan "<<endl;
		}
		getchar();
}

void hapus()
{
		if (isEmpty()==false){
			cout<<" Data yang diambil : "<<endl;
			cout<<"Nama 	: "<<data[head].nama<<endl;
			cout<<"Umur		: "<<data[head].umur<<endl;
			cout<<"No HP	: "<<data[head].nohp<<endl;
			for (int i=head; i<tail; i++)
			{
			data[i]=data[i+1];
			}
		tail--;
		}else{
			cout<<"Antrian Kosong"<<endl;
			
		}
		getchar();

}

void sort()
{
        if (isEmpty()==false){
            int z;
            int temp;
            
            for (i=head;i<tail;i++)
            {
                for (z=head;z<tail;z++)
                {
                    if (data[z].nama>data[z+1].nama)
                    {
                        temp=data[z].nama;
                        data[z].nama=data[z+1].nama;
                        data[z+1].nama=temp;
                    }
                }
            }
            tail++;
            for (i=head;i<tail;i++)
						{
						cout<<i+1<<"\t"<<data[i].nama<<<endl;
						}
            cout<<"=====================================================\n";
        	}
        else{
            cout<<"Antrian Kosong !\n";
            }   
}	
        
        
        
int main()
{
	int pilih;
	do
	{
		cout<<"Menu Utama\n";
		cout<<"-------------\n";
		cout<<"   [1] Daftar\n";
		cout<<"   [2] list\n";
		cout<<"   [3] Mencari Nama\n";
		cout<<"   [4] Sorting Nama\n";
		cout<<"   [5] Menghapus data\n";
		cout<<"--------------\n";
		cout<<"Masukkan pilihan : ";
		cin>>pilih;

		switch (pilih)
		{
			case 1:
				system("cls");
				daftar();
				break;
			case 2:
				system("cls");	
				list();
				break;
			case 3:
				system("cls");	
				cari();
				break;
			//case 4:
				//system("cls");
				//sort();
				//break;
			case 5:
				system("cls");
				hapus();
				break;





		}
	}
    
    while (pilih!=0);
    return 0;
}
