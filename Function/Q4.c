# include<stdio.h>
#include <string.h>
char lower_to_Upper(char *s);
int main()
{
    char s[1000];  
    int i;
 
    printf("Enter  the string in lower case: ");
    gets(s);
    
    printf("string in lowercase ='%s'\n",s);
 
    lower_to_Upper(&s); 
    
 	printf("string in uppercase ='%s'\n",s);
    return 0;
}

char lower_to_Upper(char *s){ 
    for(int i=0;s[i];i++)  
    {
        if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}
}