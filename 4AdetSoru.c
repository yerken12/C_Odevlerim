


//Soru-1=>


#include<stdio.h>//Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphanedir
#include<conio.h>//getch(); fonksiyonunu kullanmamızı sağlayan kütüphanedir

int main ()
{
        int girilensayi,bölünensayi,bölensayi,kalan,sayim=0;
        printf("Bir sayi giriniz: ");
        scanf_s("%d",&girilensayi);
        //buradaki bölünensayi asal olup olmadığı araştırılıcak olan sayıdır
        for ( bölünensayi = 2; bölünensayi < girilensayi; bölünensayi++)//dis döngüdeyiz
        {
                kalan=1;
                        for ( bölensayi = 2; bölensayi < bölünensayi; bölensayi++)//ic döngüdeyiz
                {
                        //bölünensayi 2 ' den başlayarak kendisine kadar olan tüm sayılara
                        //sıra ile bölünüyor.Tam Bölen bir sayiya rastlandığında sayının
                        //asal olmadığı anlaşılıyor ve bir sonraki sayiyi denemek için döngü
                        //kesiliyor.Bu arada, bu sayının asal olup olmadığını antlatmak için d'nin değeri 0 yapılıyor.
                        if (bölünensayi%bölensayi == 0)
                        {
                                kalan = 0;
                                break;
                        }
                } //Burada iki ihtimal var. kalan== 0 ya da kalan== 1.
                        //Bölünensayi'nin asal olmadığı anlaşıldığında kalan'ın değeri 0 yapılmıştı.
                        //Aksi halde kalan'ın değeri 1 kalır ve bu bize sayının asal olduğunu anlatır.
                        if (kalan==1)
                        {
         printf("%d\n",bölünensayi);
                                sayim++;
                        
                        }//döngü bir sonraki sayının asal olup olmadığını anlamak için
                        //tekrar dönecek.Bu nedenler kalan'ın değeri döngünün başında
                        //tekrar 1 yapılıyor.
        }
printf("\nGirilen sayiya kadar %d tane asal sayi vardir.\n\n\n",sayim);
printf("Cikis yapmak icin bir tusa basin...");
getch();//ekranın kapanmasını önler.
}





//Soru-2=>
//For Döngüsü ile

#include<stdio.h>//Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphanedir
#include<conio.h>//getch(); fonksiyonunu kullanmamızı sağlayan kütüphanedir

void main()
{
        double A=10000000,B=40000000;
        int yil=0;//değişkenleri tanımladık

        for (;;)//döngüye girer
        {
         if(A>B)//eğer A B'den büyükse
         {
                 break;//if koşulundan çıkar
         }
         else
         {
                                 A+=A*0.25 ;
                                 B+=B*0.12;
                                 yil++;//her bir işlemden sonra 1 arttırır.
         }
        }
printf("A ulkesinin nufusu B ulkesinin nufusunu %d yil sonra gecer.\n\n",yil);//kaç yıl sonra geçeceğini ekrana yazar.
printf("Cikis yapmak icin bir tusa basin...");
getch();//ekranın kapanmasını engeller
}




//While Döngüsü ile

#include<stdio.h>//Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphanedir
#include<conio.h>//getch(); fonksiyonunu kullanmamızı sağlayan kütüphanedir

void main()
{
        int A=10000000,B=40000000;
        int yil=0;//değişkenlerimizi tanımladık

while(A<=B)//parantez icindeki kosul dogru oldugu muddetce parantezden sonraki islem islemler calışacaktır.
        {
                 A+=A*0.25;
                 B+=B*0.12;
                         yil++;                                 
    }                
printf("A ulkesinin nufusu B ulkesinin nufusunu %d yil sonra gecer.\n\n",yil);//kaç yıl sonra geçeceğini ekrana yazar.
printf("Cikis yapmak icin bir tusa basin...");
getch();//ekranın kapanmasını engeller
}





//Do-While Döngüsü ile

#include<stdio.h>//Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphanedir
#include<conio.h>//getch(); fonksiyonunu kullanmamızı sağlayan kütüphanedir
void main()
{
        double A=10000000,B=40000000;//
        int yil=0;//değişkenlerimizi tanımladık
        do
        {
                A+=A*0.25 ;
         B+=B*0.12;
                yil++;                
        }
        while (A<=B);//parantez icindeki kosul dogru oldugu muddetce döngü devam edecektir.
                         printf("A ulkesinin nufusu B ulkesinin nufusunu %d yil sonra gecer.\n\n",yil); //kaç yıl sonra geçeceğini ekrana yazar.
                         printf("Cikis yapmak icin bir tusa basin...");
        getch();//ekranın kapanmasını engeller
}





//Soru-3=>


#include<stdio.h>//temel giris çıkış fonksiyonu
#include<conio.h>//getch(); fonksiyonu için
   int toplam=0,i,j;
int main()
{
        for(i=1;i<1000;i++)//1'den 1000'e kadar sayılarla sırayla ic döngüye girer.
        {
                 toplam=0;

         for(j=1;j<=i/2;j++)//1'den j'nin i/2den küçük ve eşit olan sayılara kadar
         {
            if(i%j==0) //eğer i'nin j'ye bölümünden kalan sıfıra eşit ise
                                toplam+=j;//j değerlerini toplama değerine ekle

         }
         if(toplam==i)//Eğer toplam değeri i sayısına eşitse
                 {

                         printf("1 ile 1000 arasindaki kendisi haric bolenlerinin toplami kendisine esit olan sayilar: ");
                         printf("%d\n\n\n",toplam);//toplam değerini ekrana yaz
                 }
        }
        getch();//ekranın kapanmasını önler.
}





//Soru-4=>



