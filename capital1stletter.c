#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int l,i;
    gets(s);
    l=strlen(s);
    for(i=0;s[i]!='\0';i++)
    if(i==0)
      if(s[i]>='a' && s[i]<='z')
         printf("%c",s[i]-32);
      else 
         printf("%c",s[i]);
    else if(s[i]==' ')
       if(s[i+1]>='a' && s[i+1]<='z')
         {   
         	printf("%c",s[i]);
         	i++;
	s[i]=s[i]-32;
            printf("%c",s[i]);
         }
         else 
         printf("%c",s[i]); 
    else
      printf("%c",s[i]);
    return 0;
}
