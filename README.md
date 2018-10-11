********************************************************************
gendicrr generador de diccionarios númericos routers R v4.2 2016-2018
********************************************************************

USO: gendicrr [longitud pw] [comienzo] [fin] [intervalo] [salida.dic] 

REFERENCIA Y EJEMPLOS:
MAC             ESSID                   CLAVE
00:24:D1	R-wlanXXXX	 	20 + 6 cifras (ej: 20123456)
00:26:24	R-WLAN XX	 	20 +  6 cifras (ej: 20123456)
00:26:5B	RWlan XX 	 	6 cifras + 0000 (ej: 3981380000)
00:26:5B	wifimedia_R-XXXX	Un número de 8 dígitos
00:05:CA	Rw-lanXX  	 	Un número de 8 dígitos

gendicrr 8 20000000 20999999 1 20xxxxxx.dic 
gendicrr 10 0 9999990000 10000 xxxxxx0000.dic
gendicrr 8 0 99999999 1 xxxxxxxx.dic 

