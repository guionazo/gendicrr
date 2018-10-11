#include <stdio.h>
#include <stdlib.h>
 
int main (int argc, char *argv[]) {
    int a;

if( argc != 6 ) {
    printf("\n********************************************************************\n");
    printf("gendicrr generador de diccionarios númericos routers R v4.2 2016-2018");
    printf("\n********************************************************************\n");
    printf("\nUSO: gendicrr [longitud pw] [comienzo] [fin] [intervalo] [salida.dic] \n\n");
    printf("REFERENCIA Y EJEMPLOS:\n");
    printf("MAC             ESSID                   CLAVE\n");
    printf("00:24:D1	R-wlanXXXX	 	20 + 6 cifras (ej: 20123456)\n");
    printf("00:26:24	R-WLAN XX	 	20 +  6 cifras (ej: 20123456)\n");
    printf("00:26:5B	RWlan XX 	 	6 cifras + 0000 (ej: 3981380000)\n");
    printf("00:26:5B	wifimedia_R-XXXX	Un número de 8 dígitos\n");
    printf("00:05:CA	Rw-lanXX  	 	Un número de 8 dígitos\n\n");
    printf("gendicrr 8 20000000 20999999 1 20xxxxxx.dic \n");
    printf("gendicrr 10 0 9999990000 10000 xxxxxx0000.dic\n");
    printf("gendicrr 8 0 99999999 1 xxxxxxxx.dic \n\n\n");

return 0;
}
   else {
   int longitud = atoi(argv[1]);
   int comienzo = atoi(argv[2]);
   int fin = atoi(argv[3]);
   int intervalo = atoi(argv[4]);
   FILE *punterofichero = fopen(argv[5], "w");
 
   for( a = comienzo; a < fin+1; a = a + intervalo ){
   fprintf(punterofichero, "%0*i\n", longitud, a);}
   fclose(punterofichero);
   }
return 0;
} 
