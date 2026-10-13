#include <stdio.h>
#include <math.h> 

int main() {
    float urunTutari, odenenPara, paraUstuTL;
    int toplamKurus, toplamKupurSayisi = 0;
    

    int ikiyuzluk, yuzluk, ellilik, yirmilik, onluk, beslik, birlik;
    int elliKurus, yirmiBesKurus, onKurus, besKurus, birKurus;

    // Kullanýcýdan bilgi aliyoruzzz 
    printf("Urun tutarini giriniz: ");
    scanf("%f", &urunTutari);
    
    printf("Musterinin odedigi parayi giriniz: ");
    scanf("%f", &odenenPara);

    // Para üstünün  hesabi
    paraUstuTL = odenenPara - urunTutari;
    printf("\nToplam Para Ustu: %.2f TL\n", paraUstuTL);

   
    toplamKurus = (int)round(paraUstuTL * 100);

    // banknotlar
    ikiyuzluk = toplamKurus / 20000;
    toplamKurus = toplamKurus % 20000;

    yuzluk = toplamKurus / 10000;
    toplamKurus = toplamKurus % 10000;

    ellilik = toplamKurus / 5000;
    toplamKurus = toplamKurus % 5000;

    yirmilik = toplamKurus / 2000;
    toplamKurus = toplamKurus % 2000;

    onluk = toplamKurus / 1000;
    toplamKurus = toplamKurus % 1000;

    beslik = toplamKurus / 500;
    toplamKurus = toplamKurus % 500;

    birlik = toplamKurus / 100;
    toplamKurus = toplamKurus % 100;

    // - kurus -
    elliKurus = toplamKurus / 50;
    toplamKurus = toplamKurus % 50;

    yirmiBesKurus = toplamKurus / 25;
    toplamKurus = toplamKurus % 25;

    onKurus = toplamKurus / 10;
    toplamKurus = toplamKurus % 10;

    besKurus = toplamKurus / 5;
    birKurus = toplamKurus % 5; 

    //  Toplam küpür sayisini hesaplama
    toplamKupurSayisi = ikiyuzluk + yuzluk + ellilik + yirmilik + onluk + beslik + birlik + 
                        elliKurus + yirmiBesKurus + onKurus + besKurus + birKurus;

    // Sonuclari ekrana yazdirma
    printf("\n- Para Ustu Dagilimi -\n");
    printf("200 TL   : %d adet\n", ikiyuzluk);
    printf("100 TL   : %d adet\n", yuzluk);
    printf(" 50 TL   : %d adet\n", ellilik);
    printf(" 20 TL   : %d adet\n", yirmilik);
    printf(" 10 TL   : %d adet\n", onluk);
    printf("  5 TL   : %d adet\n", beslik);
    printf("  1 TL   : %d adet\n", birlik);
    printf(" 50 Kurus: %d adet\n", elliKurus);
    printf(" 25 Kurus: %d adet\n", yirmiBesKurus);
    printf(" 10 Kurus: %d adet\n", onKurus);
    printf("  5 Kurus: %d adet\n", besKurus);
    printf("  1 Kurus: %d adet\n", birKurus);
    

    printf("Musteriye Verilen Toplam Kupur Sayisi: %d\n", toplamKupurSayisi);
    

    return 0;
}
