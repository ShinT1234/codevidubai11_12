#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
    int num[100];
    int l;
    int a[100],k;
    int i,j,temp;
    
    printf("Nhap so phan tu cua day: ");
    scanf("%d",&n);
    for(l=0;l<n;l++)
    {
        printf("Nhap so %d: ", l+1);
        scanf("%d",&num[l]);
    }
    for(k=0;k<n;k++)
        a[k] = num[k];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                temp= a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }       
    }
    for(i=0;i<n;i++)
    printf("\n Day so dao nguoc [%d] la %d", i, a[i]);
	return 0;
}
