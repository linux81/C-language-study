#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void dodaj(int a, int b, int c, int *w);

int a, b, c;
int wynik;

int main(int argc, char **argv){
	
	

	
	if (argc <=1){

fprintf(stderr,"Brak odpowiedzniej liczby argumentow\n");


return(-1);

}

else

{


a=atoi(argv[1]);
b=atoi(argv[2]);
c=atoi(argv[3]);


}


dodaj(a, b, c,&wynik);


printf("suma wynosi %d \n",wynik);


	
	
	
	return 0;
	}
	
	
	
	
void dodaj(int a, int b, int c, int *w){
	int k;
	
	
	k= a+ b+c;
	*w=k;
	
}


