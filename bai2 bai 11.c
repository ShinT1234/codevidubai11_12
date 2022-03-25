#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   char s[150];   
   int i = 0;
   int vowels = 0;          
   int consonants = 0;
   printf("\nNhap chuoi van ban ");
   gets(s);
   scanf("%[^\n]",&s);
      
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
         consonants++;
   }
   
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, vowels, consonants);
	return 0;
}
