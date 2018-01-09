/*------------------*/
/*   Program Array  */
/*------------------*/
#include <stdio.h>
int main()
{
 int index;
 int jumlah[12]; //deklarasi array jumlah dengan 12 elemen
 float harga[12]; //deklarasi array jumalah dengan 12 elemen

 //perulangan untuk menginputkan array secara dinamis
 for (index =0;index<12;index++)
 {
 jumlah[index]=index+10;
 harga[index]=12.0*(index+7);
 }

 //perulangan untuk menampilkan isi array
 for (index=0;index<12;index++)
   printf ("%5d %5d %10.3f\n",index,jumlah[index],
   harga [index]);
}
