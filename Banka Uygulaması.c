#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char islem,islem2;
	float bakiye,cekilecek_para,yatirilacak_para,kalan_bakiye;
	printf("Yapacaginiz islemi seciniz:(orn:para cekme(c),para yatirma(y),bakiye sorgulama(b))");
	scanf("%c",&islem);
	bakiye=6000;
	switch(islem){
		case'c':
			printf("Ne kadar para cekmek istiyorsunuz?");
			scanf("%f",&cekilecek_para);
			bakiye=bakiye-cekilecek_para;
			printf("İsleminiz basariyla gerceklesti.Kalan bakiyeniz:%.2f",bakiye);
			break;
			
	    case'y':
	    	printf("Ne kadar para yatirmak istiyorsunuz?");
	    	scanf("%f",&yatirilacak_para);
	    	bakiye=bakiye+yatirilacak_para;
	    	printf("İsleminiz basariyla gerceklesti.Yeni bakiyeniz:%.2f",bakiye);
	    	break;
	    
	    case'b':
	    	printf("Mevcut bakiyeniz:%.2f\n",bakiye);
	    	break;
	    
		
	   default:
		printf("Bizimle oldugunuz icin cok mutluyuz.İyi gunler dileriz.");
		}
	return 0;
}
