#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];
    
    printf("Nhap tung chuoi vao mot dong rieng \n\n");
    printf("Nhap 'END'khi het over \n\n");
    do
    {
        printf("Chuoi %d : ", n+1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "END"));
    n = n - 1;
    for(item=0; item<n-1; ++item)
    {
        for(i=item+1; i<n; ++i)
        {
           if(strcmp (x[item], x[i]) > 0)
           {
               strcpy(temp, x[item]);
               strcpy(x[item], x[i]);
               strcpy(x[i], temp);
           }
        }
    }
    printf("Danh sach cac chuoi da ghi : \n");
    for(i = 0; i < n ; ++i)
    {
    printf("\nChuoi %d la %s", i+1, x[i]);
    }   
	return 0;
}
