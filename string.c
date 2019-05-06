#include <stdio.h>
#include "_string.h"  ///this must be included

size_t strlen(const char* str);
int strcmp(const char* str1, const char* str2);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t n);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, size_t n);
const char* strchr(const char* str, int c);
const char* strrchr(const char* str, int c);

///ststr is the hardest function.  It uses a tricky nested loop and must return an address.
///Here are some hints:
/// Loop thru str1, looking for the first char of str2
/// if(str1[i] == str2[0]) Then start inner loop, j=0
/// loop while str1[i+j] is not null and str2[j] is not null

/// inside loop, if(str1[i+j] != str2[j]) Then break out of inner loop
/// when inner loop completes, if(str2[j] == '\0') Then return &str1[i]
/// if outer loop completes, then return NULL
const char* strstr(const char* str1, const char* str2);
int isalnum(int c);




int main(void){
    
}  ///Add your own unit tests here.  When uploading, you can leave it blank.

size_t strlen(const char* str){
    
    size_t i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
    
}
int strcmp(const char* str1, const char* str2){
    int i;
    
    for(i = 0; str1[i] != '\0' && str2[i] != '\0' ; i++){
        
        if(str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
    }
    
    return strlen(str1) - strlen(str2);
    
    
}

char* strcpy(char* dest, const char* src)
{
    int i;
    
    
    for(i = 0; dest[i] != '\0' || src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    
    return dest;
}

char* strncpy(char* dest, const char* src, size_t n){
    
    int i;
    
    
    for(i = 0; i < n; i++){
        dest[i] = src[i];
    }
    
    return dest;
}
char* strcat(char* dest, const char* src){
    
    size_t i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
    
    return dest;
}

char* strncat(char* dest, const char* src, size_t n){
    
    size_t i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; j < n; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
    
    return dest;
}
const char* strchr(const char* str, int c){
    
    while (*str != (char)c)
        if (!*str++)
            return 0;
    return (char *)str;
}

const char* strrchr(const char* str, int c){
    
    char* back = 0;
    do {
        if( *str == (char)c )
            back=str;
    } while(*str++);
    return back;
}

const char* strstr(const char* str1, const char* str2)
{
    size_t n = strlen(str2);
    while(*str1)
        if(!memcmp(str1++,str2,n))
            return str1-1;
    return 0;
}

int isalnum(int c){
    return (isalpha(c) || isdigit(c));
}
///Server unit testers will only tell you if it failed or not
///Unit test your own code and study the specifications provided in the description



