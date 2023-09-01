#include <stdio.h>
#include <stdlib.h>

int enyuksek(int dizi[], int n)
{
    int yuksek;
    yuksek = dizi[0];
    for(int i=0;i<n;i++)
    {
        if(dizi[i]>yuksek)
        {
            yuksek=dizi[i];
        }
    }
    return yuksek;
}

int endusuk(int dizi[], int n)
{
    int dusuk, i;
    dusuk = dizi[0];
    for(i=0;i<n;i++)
    {
        if(dizi[i]<dusuk)
        {
            dusuk = dizi[i];
        }
    }
    return dusuk;
}




int main()
{
    system("color 02");
    int n, i;

    printf("Kac adet sayi olsun?\n");
    scanf("%d",&n);
    printf("Dizinin elemanlari:\n");
    int yenidizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        yenidizi[i] = rand()%100;
        printf("%d\n",yenidizi[i]);
    }
    printf("En yuksek sayi:%d\n",enyuksek(yenidizi,n));
    printf("En dusuk sayi:%d",endusuk(yenidizi,n));
    return 0;
}
