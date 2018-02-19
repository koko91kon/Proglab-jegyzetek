#include <stdio.h>
/*int lnko(int a,int b){
		int min;
		if(a<b){
			min=a;
		}
		else{
			min=b;
		}
		while(1){
			if(a%min==0 && b%min==0){		
			return min;
			}
			min--;
		}
		
	}*/
int main(){
	/*int b[10];
	for (int i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for (int j=9;j>-1;j--){
		printf("%d",b[j]);
	}*/ 						//csökkenöbevisszair
	/*int n;
	while(1){
		
		scanf("%d",&n);
		
		if (n==0){
			break;
		}
		
		int tomb[n];
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
		}
		
		if (tomb[0]==tomb[n-1]){
			printf("yes");
		}
		else {
			printf("no");
		}
	}*/						//szelso ertekek
	
	/*
		
	Törtek
	Írjon programot, amely a standard bemenetrõl soronként négy pozitív egész számot olvas be!
	A program az egy sorban szereplõ négy szám közül az elsõ két számot egy tört számlálójaként
	és nevezõjeként értelmezze (ebben a sorrendben), a harmadik és negyedik számot pedig egy másik
	tört számlálójaként és nevezõjeként értelmezze (ebben a sorrendben)! A program írjon a 
	standard kimenetre soronként egy < (kisebb), > (nagyobb) vagy = (egyenlõségjel) karaktert attól
	függõen, hogy az elsõ tört értéke kisebb vagy nagyobb a második tört értékénél, vagy esetleg 
	egyenlõ vele! A bemenet végét egy olyan sor jelzi, amely négy darab 0-s számot tartalmaz, ezt
	a sort a programnak már nem kell feldolgoznia.

	Példa bemenet
	4 3 5 3
	4 3 2 3
	1 2 3 4
	1 2 3 6
	0 0 0 0
	A példa bemenethez tartozó kimenet
	<
	>
	<
	=
	
	
	float n1,n2,n3,n4;
	while(1){

		scanf("%f",&n1);
		scanf("%f",&n2);
		scanf("%f",&n3);
		scanf("%f",&n4);
		
		if(n1==0 && n2==0 && n3==0 && n4==0){
			break;
		}
		
		if(n1/n2<n3/n4){
			printf("<");
		}
		else if (n1/n2>n3/n4){
			printf(">");
		}
		else {
			printf("=");
		}
		
	}*/
	
	/*float n1,n2,n3,n4;
	while(1){

		scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
		
		if(n1==0 && n2==0 && n3==0 && n4==0){
			break;
		}
		
		int szamlalo1=n1*n4;
		int szamlalo2=n3*n2;
		int nevezo2=n2*n4;
		
		printf("%d/%d",szamlalo1+szamlalo2,nevezo2);
		int vmi = lnko(n2,n4);
		int nevezo =n2/vmi;
		printf("%d/%d",szamlalo1/vmi+szamlalo2/vmi,nevezo/vmi);
	}*/							//törtek 2.0
	
	/*int ora,perc;
	while(scanf("%d.%d",&ora,&perc)!=EOF){
		if(ora<13 && ora>11.59){
			if(perc<10){
				printf("%d.0%dpm",ora,perc);
			}
			else{
			printf("%d.%dpm",ora,perc);
			}
		}
		else if (ora>11){
			if(perc<10){
				printf("%d.0%dpm",ora-12,perc);
			}
			else{
			printf("%d.%dpm",ora-12,perc);
			}
		}
		else if(ora<1){
			if(perc<10){
				printf("%d.0%dam",ora+12,perc);
			}
			else{	
			printf("%d.%dam",ora+12,perc);
		}
		}
		else{
			if(perc<10){
				printf("%d.0%dam",ora,perc);
			}
			else{
					printf("%d.%dam",ora,perc);
			}
		
		}
	}*/
	
		
	/*Idõpontok
	Írjon programot, amely a standard bemenetrõl soronként négy egész számot olvas be! 
	A számok kettesével a nap egy-egy idõpontját írják le, óra és perc értékek formájában. 
	Az óra 0 és 23, a perc 0 és 59 közé esik. A program írjon a standard kimenetre soronként
	egy < (kisebb), > (nagyobb) vagy = (egyenlõségjel) karaktert attól függõen, hogy
	a soronként beolvasott két idõpont közül az elsõ korábbi vagy késõbbi a másodiknál,
	vagy esetleg azonos vele! A bemenetet egy olyan sor zárja, amely egyetlen –1-es számot
	tartalmaz, ezt a sort a programnak már nem kell feldolgoznia.

	Példa bemenet
	19 20 21 22
	10 00 9 59
	0 0 0 0
	-1
	<
	>
	=
	
	int n1,n2,n3,n4;
	while(1){
		scanf("%d",&n1);
		if (n1==-1){
			break;
		}
		scanf("%d %d %d",&n2,&n3,&n4);
		if(n1==n3){
			if(n2==n4){
				printf("=");
			}
			else if(n2>n4){
				printf(">");
			}
			else{
				printf("<");
			}
		}
		else if(n1>n3){
			printf(">");
		}
		else{
			printf("<");
		}
	}*/
		
	/*Gólkülönbség
	Írjon programot, amely a standard bemenetrõl állományvégjelig (EOF) egy
	 futballcsapatnak a bajnokságban elért eredményeit olvassa be! Az eredmények
	  „X:Y” alakúak, ahol mind X, mind pedig Y nemnegatív egész számok.
	   X a csapat által rúgott, Y a csapat által kapott gólok számát jelöli.
	    Ha X értéke nagyobb Y-nál, akkor a mérkõzést a vizsgált futballcsapat 
		nyerte, ha X egyenlõ Y-nal, akkor döntetlen eredmény született, míg ha
		 X kisebb Y-nál, akkor az aktuális ellenfél nyert. A program összegezze 
		 a rúgott és kapott gólokat, és a bemenethez hasonló formában írja azt ki 
		 a standard kimenet elsõ sorába! A standard kimenet második sorába az összes
		  meccs közül a legnagyobb gólkülönbségû meccs gólkülönbségének értéke kerüljön!
		   Gólkülönbség alatt minden esetben az X–Y értéket értjük.

	Példa bemenet:
	5:3
	0:10
	2:2
	4:1
	A példa bemenethez tartozó kimenet:
	11:16
	3

	int lott,kapott;
	int osszlott=0,osszkapott=0;
	int kulonb=0; //INT_MIN (stdlib.h)
	int seged;
	while(scanf("%d:%d",&lott,&kapott)!=EOF){
		osszlott+=lott;
		osszkapott+=kapott;
		seged=lott-kapott;
		if (seged>kulonb){
			kulonb=seged;
		}
		
	}
	printf("%d:%d\n",osszlott,osszkapott);
	printf("%d",kulonb);
	*/
	
	/*Tornasor
	Írjon programot, amely a standard bemenetrõl soronként egy vagy több nemnegatív egész számot olvas!
	 Ha a sor elsõként beolvasott száma 0, a program fejezze be a mûködését. Ha a sor elsõ száma egy pozitív szám, 
	 akkor az azt jelzi, hogy a sorban hány további szám található. A sorban található további számok egy középiskolai
	  osztály diákjainak testmagasságát adják meg cm-ben. A program válassza ki az egyes osztályok legalacsonyabb és 
	  legmagasabb tanulójának a magasságát, és ebben a sorrendben írja ki azokat a standard kimenetre, a két értéket
	   pontosan egy szóköz karakterrel elválasztva egymástól, osztályonként külön sorban!

	Példa bemenet
	10 162 172 171 168 155 179 172 170 169 190
	5 168 172 184 159 163
	7 180 178 164 170 168 178 173
	0
	letöltés szöveges állományként
	A példa bemenethez tartozó kimenet
	155 190
	159 184
	164 180

	int n;
	int min=0;
	int max=300;
	while(1){
		scanf("%d",&n);
		if (n==0){
			break;
		}
		int tomb[n];
		min=300;
		max=0;
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
			
			if(tomb[i]<min){
				min=tomb[i];
			}
			else if(tomb[i]>max){
				max=tomb[i];
			}
			
		}
		printf("%d %d",min,max);
		
		
	}*/
	
		
	/*Elõjelek
	Írjon programot, amely a standard bemenetrõl soronként egész számokat olvas be!
	 Minden sorban az elsõ szám azt mondja meg, hogy hány további szám található még 
	 az adott sorban. A program minden sor esetén a második számtól kezdõdõen számolja
	  össze a pozitív és a negatív számokat, majd írja a standard kimenetre azoknak a 
	  soroknak a sorszámát, amelyekben több pozitív számot talált, mint negatívat! A 
	  bemenetet egy olyan sor zárja, amely csak egyetlen 0-t tartalmaz, ezt a sort a 
	  programnak már nem kell feldolgoznia.

	Példa bemenet
	4 2 5 -2 1
	5 -11 -5 133 -62 23
	1 1
	4 -1 0 1 2
	3 -1 0 1
	0
	A példa bemenethez tartozó kimenet
	1
	3
	4
	
	int n;
	int counter=0;
	while(1){
		int poz=0;
		int neg=0;
		scanf("%d",&n);
		if (n==0){
			break;
		}
		int tomb[n];
		
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
			if (tomb[i]>0){
				poz++;
			}
			else if (tomb[i]<0){
				neg++;
			}
			
		}
		counter++;
		if (poz>neg){
			printf("%d\n",counter);
		}
		
		
		
	}*/
	
		
	/*Leghosszabb monoton részlista
	Írjon programot, amely a standard bemenetrõl állományvégjelig (EOF) egymástól fehér 
	karakterekkel (szóköz, újsor, tabulátor) elválasztott egész számokat olvas, és a 
	standard kimenetre írja a beolvasott számokból alkotott leghosszabb monoton növekvõ részlist
	 (egymást követõ számok) hosszát (más szavakkal: darab- vagy elemszámát)! Egy monoton növekvõ
	  sorozat minden elemére – kivéve a legelsõt – igaz, hogy az adott elem értéke nagyobb az õt 
	  megelõzõ elem értékénél vagy egyenlõ vele.

	Példa bemenet:
	4     7
    	8    3 10
	10
	17  9
	10 11
	A példa bemenethez tartozó kimenet:
	4

	int n;
	int seged=-1;
	int counter=1;
	int seged2=0;
	while(scanf("%d",&n)!=EOF){
		if (seged!=-1 && n>=seged){
			counter++;
		}
		else {
			counter=1;
		}
		if(seged2<counter){
			seged2=counter;
		}
		seged=n;		
	}
	printf("%d",seged2);
	*/
	int n;
	int boolean=0;
	int sajt=0;
	while(1){
		scanf("%d",&n);
		if (n==0){
			break;
		}
			int tomb[n];
			for (int i=0;i<n;i++){
				scanf("%d",&tomb[i]);
				
			}
			for(int j=0;j<n-1;j++){
				if (boolean==0){
					if (tomb[j]>tomb[j+1]){
						boolean=1;	
					}
					else if(tomb[j]<tomb[j+1]){
						boolean=-1;
					}
				}
				else{
					if(boolean==1 && tomb[j]<tomb[j+1]){
						printf("nem monoton");
						sajt=1;
						break;
						
					}
					else if (boolean==-1 && tomb[j]>tomb[j+1]){
						printf("nem monoton");
						sajt=1;
						break;
					}
				}
			}
			if(sajt==0){
				printf("monoton");
			}
		
	}	
	return 0;
	
}
