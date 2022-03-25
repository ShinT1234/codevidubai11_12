#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin=1311,mypin,limit,i,sotien,lc,sd_ht,sd,b,ch,tn;
	int tenchuyen,tienchuyen;
	char fullname[150];
	limit=0;
	sd=5000000;
	do{
		printf("nhap ma pin ");
		scanf("%d",&mypin);
		limit++;
	}while (mypin!=pin&&limit<3);

	if(mypin==pin ){
		printf("\n login thanh cong\n");
	do{	
		printf("\n nhap 1 de tra cuu so du ");
		printf("\n nhap 2 de rut tien ");
		printf("\n nhap 3 de chuyen khoan ");
		printf("\n nhap 4 de nop tien");
		printf("\n nhap 5 de ket thuc");
		printf("\n nhap lua chon :");
		scanf("%d",&lc);
		switch(lc)
		{
			case 1:
				printf("\nxem so du");
				printf("\nso du hien tai la %d VND",sd);
				break;
				
			case 2:
				printf("\nNhap so tien ban muon rut: ");
				scanf("%d",&sotien);
				if(sotien<sd){
					sd_ht=sd-sotien;
					printf("\nrut tien thanh cong");
					printf("\nso tien con lai : %d VND",sd_ht);}
				break;
			case 3:
				printf("\nNhap ten nguoi nhan: ");
                gets(fullname);
                scanf("%[^\n]",&fullname);
			    printf("nhap so tai khoan \n");
			    scanf("%d",&b);
				printf(" nhap so tien muon chuyen\n");
				scanf("%d",&tienchuyen);
				printf("chuyen tien thanh cong\n ");
				sd_ht=sd-tienchuyen;
				printf(" so du con lai %d VND\n",sd_ht);
				break;
			case 4:
			    printf("Nap tien vao tai khoan:");
                    scanf("%d", &tn);
                    sd_ht = sd + tn;
                    printf("Nop tien thanh cong, so du hien tai cua tai khoan con %d", sd_ht);
                    break;
			case 5:
				printf("\ncam on ban da dung ATM,hen gap ban vao ngay som nhat");
				break;
			}
				printf("ban co muon tiep tuc Y/N ?");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'y' || ch == 'Y');
    }
         else{
		printf("khoa the vui long den chi nhanh gan nhat lay the");
	}
	     
	
	return 0;
}
