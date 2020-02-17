/*It's not scalable*/

/*
//EXAMPLES of flawed cases
$$      be = or = -3
$$      if = he = 3
$$      to = up = 5
"to" is important as in english language according to ngram viewer it contains of almost 2.4% which is not accountable
of = 9
in = -5
it = -9
is = -10
as = -18
at = -19
so = 4
we = 18
by = -23
on = 1
do = -11
if = 3
me = 8
my = -12
an = -13
go = -8
no = -1
us = 2
am = 12
*/
#include <stdio.h>
#include<math.h>
int main()
{
    FILE *fp,*fp2;
    char c,credits[]={"~-::@sangnovamoqapi::-~"};
    int a[2],decryptwith,i=0,ct=0,ans[1000][2],key=0,diff,j;
    fp = fopen("file2.txt","r");
    //a = (int *)malloc(1000*sizeof(int));
    while((c=fgetc(fp))!= EOF)
    {
        i=0;
        if(c!=' '){
            *(a+i)=c;
            if((c=fgetc(fp))!=' '){
                i++;
                *(a+i)=c;
                if((c=fgetc(fp))== ' ')
                {
                    ans[ct][0] = a[0];
                    ans[ct][1] = a[1];
                    ct++;
                }
                a[0] = a[1] = '0';
            }
        }
    }
    /*ASSUME IT TO BE OF*/
    for(i=0;i<ct;i++)
    {
        diff = ans[i][0]-ans[i][1];
        switch(diff){
        case 9:
            key = ans[i][0]-'o';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -5:
            key = ans[i][0]-'i';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -9:
            key = ans[i][0]-'i';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -10:
            key = ans[i][0]-'i';
            if(key<0)
            {
                key += 26;
                printf("hello mtf");
            }
            break;
        case -18:
            key = ans[i][0]-'a';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -19:
            key = ans[i][0]-'a';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 4:
            key = ans[i][0]-'s';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 18:
            key = ans[i][0]-'w';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -23:
            key = ans[i][0]-'b';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 1:
            key = ans[i][0]-'o';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -11:
            key = ans[i][0]-'d';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 3:
            key = ans[i][0]-'i';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 8:
            key = ans[i][0]-'m';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -12:
            key = ans[i][0]-'m';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -13:
            key = ans[i][0]-'a';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -8:
            key = ans[i][0]-'g';
            if(key<0)
            {
                key += 26;
            }
            break;
        case -1:
            key = ans[i][0]-'n';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 2:
            key = ans[i][0]-'u';
            if(key<0)
            {
                key += 26;
            }
            break;
        case 12:
            key = ans[i][0]-'a';
            if(key<0)
            {
                key += 26;
            }
            break;
        }
        if(key)
            break;  
    }
    if(key>26)
            key-=26;
    key = 26 - key;
    printf("%d",key);
    fclose(fp);
    printf("\nhow do you want to store decrypted file\n1.in file2.print on conosole");
    scanf("%d",&i);
    if(i==1){
        fp2 = fopen("DECRYPTED.txt","w");
        fp = fopen("file2.txt","r");
        fputs(credits,fp2);
        while((c=fgetc(fp))!=EOF){
            /* if(c==' '){
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
            } */
            if(c>122||c<97)
            {
                fputc(c,fp2);
                continue;
            }
            decryptwith = c+key;
            if(decryptwith>122)
                decryptwith = c+ key - 26;
            fputc(decryptwith,fp2);
        }
    }
    if(i==2){
        fp = fopen("file2.txt","r");
        printf("%s",credits);
        while((c=fgetc(fp))!=EOF){
            if(c==' '){
             printf(" ");
             continue;
            }
            if(c=='\n'){
                printf("\n");
                continue;
            }
            if(c=='\t'){
                printf("\t");
                continue;
            }
            if(c>122||c<97)
            {
                printf("%c",c);
                continue;
            }
            decryptwith = c+key;
            if(decryptwith>122)
                decryptwith = c+ key - 26;
            printf("%c",decryptwith);
        }
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
