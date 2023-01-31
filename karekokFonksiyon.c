#include <stdio.h>


void kokHesapla(int x)
{
	int sonuc ,c ,xClone=x ,xCloneNegatif=x ,xCloneKok=x, i, kuvvet=0, d=0, b=0, sayacPozitif=0, sayacNegatif=0, sayininKokuNegatif=1, sayininKokuPozitif=1; 
	char q=0;
	double kokSonuc;
	
	while (q<1)
	{
		x=xClone;
		
		for (i=2; 1<x; i++)
		{	
			if (x%i == 0)
			{
				while (1 > x%i)
				{
					x=x/i;	//CARPANLARA AYIRMA
					//printf("i=%d\n",i);
					kuvvet++;
				}
				//KUVVET HESAPLAMA
				sonuc=i;
				
				if (kuvvet>1)
				{
					b++;
				}
				else if (kuvvet==1)
				{
					d++;
				}
				if (kuvvet==1)
					printf("%d\n", i);
				else
				{
					for (c=1; c<kuvvet; c++)
						sonuc = i * sonuc;
				}

			}
			//printf("%d nin kuvveti = %d\n", i,kuvvet);
			//printf("%d Sayisinin Kuvveti %d ile Carpimi = %d\n", i,kuvvet,sonuc);
			
			kuvvet=kuvvet/2;
			for (c=1; c<=kuvvet; c++)
				sayininKokuPozitif = i * sayininKokuPozitif;
				printf("TABAN: %d\n", sayininKokuPozitif);
			kuvvet=0;	
		}
		
		if (d!=0)
		{
			printf("Sayi Tam Kare Degil\n ");
			printf("Sayi: %d\n", xClone);
			d=0;
			xClone++;
			sayacPozitif++;
		}
		else
		{
			printf("Sayi Tam Kare\n");
			printf("Sayi: %d\n", xClone);
			break;
		}	
	}
	
	
	q=0;
	
	while (q<1)
	{
		x=xCloneNegatif;
		for (i=2; 1<x; i++)
		{	
			if (x%i == 0)
			{
				while (1 > x%i)
				{
					x=x/i;	//CARPANLARA AYIRMA
					//printf("i=%d\n",i);
					kuvvet++;
				}
				//KUVVET HESAPLAMA
				sonuc=i;
				if (kuvvet>1)
				{
					b++;
				}
				else if (kuvvet==1)
				{
					d++;
				}
				if (kuvvet==1)
					printf("%d\n", i);
				else
				{
					for (c=1; c<kuvvet; c++)
						sonuc = i * sonuc;
				}
			}
			printf("%d nin kuvveti = %d\n", i,kuvvet);
			printf("%d Sayisinin Kuvveti %d ile Carpimi = %d\n", i,kuvvet,sonuc);
			kuvvet=kuvvet/2;
			for (c=1; c<=kuvvet; c++)
				sayininKokuNegatif = i * sayininKokuNegatif;
				printf("TABAN: %d\n", sayininKokuNegatif);
			kuvvet=0;
	
		}
		if (d!=0)
		{
			printf("Sayi Tam Kare Degil\n ");
			printf("Sayi: %d\n", xCloneNegatif);
			d=0;
			xCloneNegatif--;
			sayacNegatif++;
		}
		else
		{
			printf("Sayi Tam Kare\n");
			printf("Sayi Negatife: %d\n", xCloneNegatif);
			break;
		}	
	}
	
	if (sayacNegatif>sayacPozitif)
	{
		kokSonuc = (double)(xClone + xCloneKok) / (2 * sayininKokuPozitif);
		printf("Karekok Negatif Buyuk:%lf", kokSonuc);
	}	
	else
	{
		kokSonuc = (double)(xCloneNegatif + xCloneKok) / (2 * sayininKokuNegatif);
		printf("Karekok Negatif Kucuk:%lf", kokSonuc);
	}
}
int main()
{
	int a,b;
	printf("Giris: "); scanf("%d", &a);
	//printf("Giris: "); scanf("%d", &b);
	kokHesapla(a);
}


