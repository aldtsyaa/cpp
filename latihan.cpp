#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int ab,tgs,uts,uas,rab,rtgs,ruts,ruas,jml;

cout <<"Masukan Nilai Absen:";cin>>ab;
cout <<"\n Masukan Nilai Tugas:";cin>>tgs;
cout <<"\n Masukan Nilai UTS:";cin>>uts;
cout <<"\n Masukan Nilas UAS:";cin>>uas;

rab=ab*20/100;
rtgs=tgs*25/100;
ruts=uts*25/100;
ruas=uas*30/100;


jml = rab+rtgs+ruts+ruas;

cout<<"+--------------------+ \n";
cout<<"|-----Hasil Akhir----| \n";
cout<<"+--------------------+ \n";
cout<<"\n Nilai Absen ="<<rab;
cout<<"\n Nilai Tugas ="<<rtgs;
cout<<"\n Nilai UTS ="<<ruts;
cout<<"\n Nilai UAS ="<<ruas;
cout<<"\n Hasil Akhir ="<<jml;
if(

getch();


}