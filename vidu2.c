#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ary[10];
    int i, tongso, cao;
    
    for(i=0; i<10; i++)
{
    printf("\n Nhap gia tri: %d : ", i+1);
    scanf("%d",&ary[i]);
}
    cao = ary[0];
    for(i=1; i<10; i++)
{
    if(ary[i] > cao)
    cao = ary[i];
}
    printf("\nGia tri cao nhat da nhap la %d", cao);
    for(i=0,tongso=0; i<10; i++)
    tongso = tongso + ary[i];
        printf("\nTrung binh cong cac phan tu cua ary la %d",tongso/i);
	return 0;
}
