#include <stdio.h>
#include <ctype.h>
int main()
{
     FILE *fp1,*fp2,*fp3;
     char c,encryptwith;
     fp1=fopen("originalData.txt","r");
     fp2=fopen("encryptedData.txt","w");
     fp3 = fopen("LowerCaseData.txt","w");
    while((c=fgetc(fp1))!=EOF){
        fputc(tolower(c),fp3);
    }
    fclose(fp3);
    printf("ENCRYPTWITH:\n");
    scanf("%d",&encryptwith);
    fp3 = fopen("LowerCaseData.txt","r");
    while((c=fgetc(fp3))!=EOF){
         if(c==' '){
             fputc(c,fp2);
             continue;
         }
         if(c=='\n'){
             fputc(c,fp2);
             continue;
         }
         if(c=='\t'){
             fputc(c,fp2);
             continue;
         }
         if(c<65 || c > 122){
             fputc(c,fp2);
             continue;
         }
        c-=encryptwith;
        if(c>122 && c<122 + encryptwith +1)
            c-=26;
        if(c<97  && c> 97 - encryptwith -1)
            c+=26;
        //char[i]=c;
        fputc(c,fp2);
     }
     //while(char[i]!=EOF){
         
     //}
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);
     return 0;
}
