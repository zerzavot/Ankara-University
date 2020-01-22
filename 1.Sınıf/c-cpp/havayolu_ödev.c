#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Ucuslar
	{
	char ucusno[5];
	char kalkis_sehri[15];
	char varis_sehri[15];
	char kalkis_gunu[15];
	char kalkis_saat[15];
	char varis_gunu[15];
	char varis_saat[15];
	};

struct Yolcular
	{
	char ad[15];
	char soyad[15];
	char gidis_sehri[15];
	char varis_sehr[15];
	char ayril_gunu[15];
	};
int main()
{
	int i,j, NofU;
	struct Ucuslar *ucus; 
	scanf("%d",&NofU);
	ucus=(struct Ucuslar*)malloc(sizeof(struct Ucuslar)*NofU);
	for(i=0;i<NofU;i++)
	{
	scanf("%s %s %s %s %s %s %s", ucus[i].ucusno, ucus[i].kalkis_sehri, ucus[i].varis_sehri, ucus[i].kalkis_gunu, ucus[i].kalkis_saat, ucus[i].varis_gunu, ucus[i].varis_saat);
	
	} 
	 
	int NofY, x,y; 
	struct Yolcular *yolcu;	
	scanf("%d",&NofY);
	yolcu=(struct Yolcular*)malloc(sizeof(struct Ucuslar)*NofY);
	for(x=0;x<NofY;x++)
	{
	scanf("%s %s %s %s %s", yolcu[x].ad, yolcu[x].soyad, yolcu[x].gidis_sehri, yolcu[x].varis_sehr, yolcu[x].ayril_gunu);
	}
	int a=0; char string[15],bosluk=0;
	 for(i=1;i<NofY;i++)
	 {
	  for(j=1;j<NofU;j++)
	    {if(strcmp(yolcu[i].gidis_sehri,ucus[j].kalkis_sehri)==0 &&
	      strcmp(yolcu[i].varis_sehr, ucus[j].varis_sehri)==0 &&
	      strcmp(yolcu[i].ayril_gunu, ucus[j].kalkis_gunu)==0)
	     a=1;}
	     if(a==0)
	     {printf("%s %s %s %s %s No reservation\n",yolcu[i].ad, yolcu[i].soyad, yolcu[i].gidis_sehri, yolcu[i].varis_sehr, yolcu[i].ayril_gunu); bosluk=1;}
	 a=0; 
	 }if(bosluk==1) printf("\n");
	char komut[25], bolum[20], numara[5], sehir[15],varis_yeri[15];
	j=0;int k=0,l=0, m=0;
	while(1)
	{//*//
	scanf("%s",komut);
	if(strcmp(komut,"END")==0) break;
	if(strcmp(komut,"search")==0) 
	{	scanf("%s ",bolum);
		if(strcmp(bolum,"flightNumber")==0)
		{	
		scanf("%s",numara); 
		for(y=0;y<NofU;y++)
	    {
 		if(strcmp(numara,ucus[y].ucusno)==0) 
	       {
		k=1;
		printf("%s %s %s %s %s %s %s\n", ucus[y].ucusno, ucus[y].kalkis_sehri, ucus[y].varis_sehri, ucus[y].kalkis_gunu, ucus[y].kalkis_saat, ucus[y].varis_gunu, ucus[y].varis_saat);
	        }
				
            }
		if(k==0) printf("No flight with number %s\n",numara);
		}
		k=0;
///////////////////////////////////////////////////////////////////
		if(strcmp(bolum,"departure")==0)
		{
		scanf("%s ",sehir);
		for(y=0;y<NofU;y++)
	  	{	
 		if(strcmp(sehir,ucus[y].kalkis_sehri)==0) 	  
		  {l=1;
printf("%s %s %s %s %s %s %s\n", ucus[y].ucusno, ucus[y].kalkis_sehri, ucus[y].varis_sehri, ucus[y].kalkis_gunu, ucus[y].kalkis_saat, ucus[y].varis_gunu, ucus[y].varis_saat);
	   	  }
		}
	      if(l==0) printf("No departure city %s\n",sehir);
		}
		l=0;
////////////////////////////////////////////////////////////////////
		if(strcmp(bolum,"arrival")==0)
		{
		scanf("%s ",varis_yeri);
		for(y=0;y<NofU;y++)
	  	{	
 		if(strcmp(varis_yeri,ucus[y].varis_sehri)==0) 	  
		  {m=1;
printf("%s %s %s %s %s %s %s\n", ucus[y].ucusno, ucus[y].kalkis_sehri, ucus[y].varis_sehri, ucus[y].kalkis_gunu, ucus[y].kalkis_saat, ucus[y].varis_gunu, ucus[y].varis_saat);
	   	  }
		}
	        if(m==0) printf("No arrival city %s\n",varis_yeri);
		}
		m=0;	
	}
char sayi[5],num[5]; int sayac=0 , temp;
	if(strcmp(komut,"print")==0)
	{	
	scanf("%s",sayi);
	for(y=0;y<NofU;y++)
	if(strcmp(sayi, ucus[y].ucusno)==0) 
	{printf("%s %s %s %s %s %s %s", ucus[y].ucusno, ucus[y].kalkis_sehri, ucus[y].varis_sehri, ucus[y].kalkis_gunu, ucus[y].kalkis_saat, ucus[y].varis_gunu, ucus[y].varis_saat); temp=y;}
	 
	for(i=0;i<NofY;i++)
	 {
		if(strcmp(yolcu[i].gidis_sehri,ucus[temp].kalkis_sehri)==0 &&
	      strcmp(yolcu[i].varis_sehr, ucus[temp].varis_sehri)==0 &&
	      strcmp(yolcu[i].ayril_gunu, ucus[temp].kalkis_gunu)==0) sayac++;
	}
	
	printf(" %d\n",sayac);
	}
////////****************/////////////////***************/////
int counter=0, tem;
	if(strcmp(komut,"printwP")==0)
	{	
	scanf("%s",num);
	for(y=0;y<NofU;y++)
	 if(strcmp(num, ucus[y].ucusno)==0) 
	{printf("%s %s %s %s %s %s %s", ucus[y].ucusno, ucus[y].kalkis_sehri, ucus[y].varis_sehri, ucus[y].kalkis_gunu, ucus[y].kalkis_saat, ucus[y].varis_gunu, ucus[y].varis_saat); tem=y; }
	 
	for(i=0;i<NofY;i++)
	 {
		if(strcmp(yolcu[i].gidis_sehri,ucus[tem].kalkis_sehri)==0 &&
	      strcmp(yolcu[i].varis_sehr, ucus[tem].varis_sehri)==0 &&
	      strcmp(yolcu[i].ayril_gunu, ucus[tem].kalkis_gunu)==0) counter++;
	}
	
	printf(" %d\n",counter);
	for(i=0;i<NofY;i++)
	 {
		if(strcmp(yolcu[i].gidis_sehri,ucus[tem].kalkis_sehri)==0 &&
	      strcmp(yolcu[i].varis_sehr, ucus[tem].varis_sehri)==0 &&
	      strcmp(yolcu[i].ayril_gunu, ucus[tem].kalkis_gunu)==0)
		printf("%s %s\n",yolcu[i].ad,yolcu[i].soyad);
	 }
	}

/////////////////////////////////////////////////////////////
char isim[15],soyisim[15],gecici[15],comp=0,yaz[5],tut1,tut2,tu[15];
int f=0,t;	
	if(strcmp(komut,"printR")==0)
    {  
	scanf("%s %s",isim,soyisim); 
	for(y=0;y<NofY;y++)
	 if(strcmp(isim,yolcu[y].ad)==0 && strcmp(soyisim, yolcu[y].soyad)==0) 
	 { 
	    for(i=0;i<NofU;i++)
	   {
	     if(strcmp(yolcu[y].gidis_sehri,ucus[i].kalkis_sehri)==0 && 
		strcmp(yolcu[y].varis_sehr,ucus[i].varis_sehri)==0 &&
		strcmp(yolcu[y].ayril_gunu,ucus[i].kalkis_gunu)==0)
		{comp++;tut1=y; tut2=i; tu[f++]=i;}
	   }
		strcpy(gecici,ucus[tut2].kalkis_saat);
		if(comp)
		{
		for(t=0;t<comp;t++)
			{
			if(strcmp(ucus[tu[t]].kalkis_saat,gecici)<0)
			{strcpy(gecici,ucus[tu[t]].kalkis_saat); tut2=tu[t] ;}
			
			}
		printf("%s %s %s %s %s %s %s %s %s\n", yolcu[tut1].ad,yolcu[tut1].soyad, ucus[tut2].ucusno, ucus[tut2].kalkis_sehri, ucus[tut2].varis_sehri, ucus[tut2].kalkis_gunu, gecici, ucus[tut2].varis_gunu, ucus[tut2].varis_saat);
		}
		//printf("\n");
	 }
    }


printf("\n");
	 }//*///

}
