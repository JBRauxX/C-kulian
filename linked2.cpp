#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>


int main()
{
        struct DataMhs
        {
                long int nim;
                char nama[30];
                int ipk;
                char alamat[20];
        };
        int menu, i, j, BykMhs, inno=1, outno=1, y=10, yy=4 ;
        DataMhs mahasiswa[50];
        DataMhs temp;
            cout<<"\t\t\t*****************************\n";
  //          cout<<"\t\t\tNama    : MOHAMMAD SYAIFULLAH\n";
//            cout<<"\t\t\tNIM    : 121411091\n";
            cout<<"\t\t\tJurusan    : Teknik lnformatika \n";
         cout<<"\t\t\t*****************************\n";
        cout<<endl;
        cout<<"Banyak mahasiswa : "; cin>>BykMhs;

        //input data
        cout<<" ------------------------------------------------------------------------\n";
            gotoxy(1,wherey());cout<<" |";
            gotoxy(4,wherey());cout<<"NO";
            gotoxy(7,wherey());cout<<"|";
            gotoxy(13,wherey());cout<<"NIM";
            gotoxy(20,wherey());cout<<"|";
            gotoxy(31,wherey());cout<<"NAMA";
         gotoxy(45,wherey());cout<<"|";
            gotoxy(51,wherey());cout<<"IPK";
            gotoxy(59,wherey());cout<<"|";
            gotoxy(64,wherey());cout<<"ALAMAT";
            gotoxy(73,wherey());cout<<"|";
            cout<<"\n ------------------------------------------------------------------------\n";
        for(int a=0; a<BykMhs; a++)
        {
         gotoxy(wherex(),y++);{
            gotoxy(1,y);cout<<" |",
         gotoxy(7,y);cout<<"|",
            gotoxy(20,y);cout<<"|",
            gotoxy(45,y);cout<<"|",
            gotoxy(59,y);cout<<"|",
            gotoxy(73,y);cout<<"|";
            gotoxy(4,y);cout<<inno++,
         gotoxy(9,y),cin>>mahasiswa[a].nim,
            gotoxy(22,y),gets(mahasiswa[a].nama),
            gotoxy(50,y),cin>>mahasiswa[a].ipk,
            gotoxy(61,y),gets(mahasiswa[a].alamat);}
        }
         cout<<" ------------------------------------------------------------------------\n";

        //data sebelum urut
        out:
        clrscr();
        cout<<"Data yang anda masukkan (belum urut)"<<endl;
        cout<<" ------------------------------------------------------------------------\n";
            gotoxy(1,wherey());cout<<" |";
            gotoxy(4,wherey());cout<<"NO";
            gotoxy(7,wherey());cout<<"|";
            gotoxy(13,wherey());cout<<"NIM";
            gotoxy(20,wherey());cout<<"|";
            gotoxy(31,wherey());cout<<"NAMA";
         gotoxy(45,wherey());cout<<"|";
            gotoxy(51,wherey());cout<<"IPK";
            gotoxy(59,wherey());cout<<"|";
            gotoxy(64,wherey());cout<<"ALAMAT";
            gotoxy(73,wherey());cout<<"|";
            cout<<"\n ------------------------------------------------------------------------\n";
        for(int b=0; b<BykMhs; b++)
        {
         gotoxy(wherex(),yy++);{
            gotoxy(1,yy);cout<<" |",
         gotoxy(7,yy);cout<<"|",
            gotoxy(20,yy);cout<<"|",
            gotoxy(45,yy);cout<<"|",
            gotoxy(59,yy);cout<<"|",
            gotoxy(73,yy);cout<<"|";
            gotoxy(4,yy);cout<<outno++,
         gotoxy(9,yy),cout<<mahasiswa[b].nim,
            gotoxy(22,yy),cout<<mahasiswa[b].nama,
            gotoxy(50,yy),cout<<mahasiswa[b].ipk,
            gotoxy(61,yy),cout<<mahasiswa[b].alamat;}
        }
         cout<<"\n ------------------------------------------------------------------------\n";

        //menampilkan menu pilihan untuk sorting
        cout<<endl<<"Menu pilihan sorting : "<<endl;
        cout<<"[1] Urut berdasarkan NIM"<<endl;
        cout<<"[2] Urut berdasarkan IPK"<<endl;
         cout<<"[3] Keluar"<<endl;
        cout<<"Silahkan masukkan pilihan anda : "; cin>>menu;

        //sorting
        if(menu==1)
        {
        int no1=1;
        clrscr();
                //sorting (buble sort) berdasarkan nim
                for(i=0; i<BykMhs-1; i++)
                {
                        for(j=0; j<BykMhs-1-i; j++)
                        {
                                if(mahasiswa[j].nim>mahasiswa[j+1].nim)
                                {
                                        //tukar nim
                                        temp.nim=mahasiswa[j].nim;
                                        mahasiswa[j].nim=mahasiswa[j+1].nim;
                                        mahasiswa[j+1].nim=temp.nim;


                                        //tukar nama
                                        strcpy(temp.nama, mahasiswa[j].nama);
                                        strcpy(mahasiswa[j].nama, mahasiswa[j+1].nama);
                                        strcpy(mahasiswa[j+1].nama, temp.nama);

                                        //tukar IPK
                                        temp.ipk=mahasiswa[j].ipk;
                                        mahasiswa[j].ipk=mahasiswa[j+1].ipk;
                                        mahasiswa[j+1].ipk=temp.ipk;

                                         //tukar alamat
                                        strcpy(temp.alamat, mahasiswa[j].alamat);
                                        strcpy(mahasiswa[j].alamat, mahasiswa[j+1].alamat);
                                        strcpy(mahasiswa[j+1].alamat, temp.alamat);
                                }
                        }
                }
                //data setelah urut
                cout<<"\nData telah urut dari NIM"<<endl;
                cout<<"\n ------------------------------------------------------------------------\n";
            gotoxy(1,wherey());cout<<" |";
            gotoxy(4,wherey());cout<<"NO";
            gotoxy(7,wherey());cout<<"|";
            gotoxy(13,wherey());cout<<"NIM";
            gotoxy(20,wherey());cout<<"|";
            gotoxy(31,wherey());cout<<"NAMA";
         gotoxy(45,wherey());cout<<"|";
            gotoxy(51,wherey());cout<<"IPK";
            gotoxy(59,wherey());cout<<"|";
            gotoxy(64,wherey());cout<<"ALAMAT";
            gotoxy(73,wherey());cout<<"|";
            cout<<"\n ------------------------------------------------------------------------";
                for(int c=0; c<BykMhs; c++)
                {
         gotoxy(wherex(),yy++);{
            gotoxy(1,yy);cout<<" |",
         gotoxy(7,yy);cout<<"|",
            gotoxy(20,yy);cout<<"|",
            gotoxy(45,yy);cout<<"|",
            gotoxy(59,yy);cout<<"|",
            gotoxy(73,yy);cout<<"|";
            gotoxy(4,yy);cout<<no1++,
         gotoxy(9,yy),cout<<mahasiswa[c].nim,
            gotoxy(22,yy),cout<<mahasiswa[c].nama,
            gotoxy(50,yy),cout<<mahasiswa[c].ipk,
            gotoxy(61,yy),cout<<mahasiswa[c].alamat;}
                }
                cout<<"\n ------------------------------------------------------------------------\n";
                getch();
                goto out;
        }else if(menu==2)
        {
        clrscr();
        int noo=1;
                //sorting (buble sort) berdasarkan nilai akhir
                for(i=0; i<BykMhs-1; i++)
                {
                        for(j=0; j<BykMhs-1-i; j++)
                        {
                                if(mahasiswa[j].ipk>mahasiswa[j+1].ipk)
                                {
                                        //tukar nim
                                        temp.nim=mahasiswa[j].nim;
                                        mahasiswa[j].nim=mahasiswa[j+1].nim;
                                        mahasiswa[j+1].nim=temp.nim;


                                        //tukar nama
                                        strcpy(temp.nama, mahasiswa[j].nama);
                                        strcpy(mahasiswa[j].nama, mahasiswa[j+1].nama);
                                        strcpy(mahasiswa[j+1].nama, temp.nama);

                                        //tukar IPK
                                        temp.ipk=mahasiswa[j].ipk;
                                        mahasiswa[j].ipk=mahasiswa[j+1].ipk;
                                        mahasiswa[j+1].ipk=temp.ipk;

                                         //tukar alamat
                                        strcpy(temp.alamat, mahasiswa[j].alamat);
                                        strcpy(mahasiswa[j].alamat, mahasiswa[j+1].alamat);
                                        strcpy(mahasiswa[j+1].alamat, temp.alamat);
                                }
                        }
                }
                  //data setelah urut
                cout<<"\nData telah urut dari IPK"<<endl;
                cout<<"\n ------------------------------------------------------------------------\n";
            gotoxy(1,wherey());cout<<" |";
            gotoxy(4,wherey());cout<<"NO";
            gotoxy(7,wherey());cout<<"|";
            gotoxy(13,wherey());cout<<"NIM";
            gotoxy(20,wherey());cout<<"|";
            gotoxy(31,wherey());cout<<"NAMA";
         gotoxy(45,wherey());cout<<"|";
            gotoxy(51,wherey());cout<<"IPK";
            gotoxy(59,wherey());cout<<"|";
            gotoxy(64,wherey());cout<<"ALAMAT";
            gotoxy(73,wherey());cout<<"|";
            cout<<"\n ------------------------------------------------------------------------\n";
                for(int c=0; c<BykMhs; c++)
                {
             gotoxy(wherex(),yy++);{
            gotoxy(1,yy);cout<<" |",
         gotoxy(7,yy);cout<<"|",
            gotoxy(20,yy);cout<<"|",
            gotoxy(45,yy);cout<<"|",
            gotoxy(59,yy);cout<<"|",
            gotoxy(73,yy);cout<<"|";
            gotoxy(4,yy);cout<<noo++,
         gotoxy(9,yy),cout<<mahasiswa[c].nim,
            gotoxy(22,yy),cout<<mahasiswa[c].nama,
            gotoxy(50,yy),cout<<mahasiswa[c].ipk,
            gotoxy(61,yy),cout<<mahasiswa[c].alamat;}
                }
                cout<<"\n ------------------------------------------------------------------------\n";
                 getch();
                 goto out;
        }
        else if(menu==3)
        {goto akhir;
        }
        else
        {
                cout<<"Menu yang anda masukkan tidak valid"<<endl;
        getch();
        }

        akhir:
}
