#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf( "Palabra a revisar: %s \n", argv[1] );
	
	int may = 0;
	int min = 0;
	char *palabra =  argv[1];
	int largo = strlen(palabra);
	int x =0;
	while(largo>0)
	{
		if (palabra[x] >= 'A' && palabra[x] <= 'Z') may +=1;
		if (palabra[x] >= 'a' && palabra[x] <= 'z') min +=1;
		largo -=1;
		x +=1;	
	}
	printf( "Total Mayusculas %d \nTotal de Minuscula %d", may, min);
	return 0;
}
