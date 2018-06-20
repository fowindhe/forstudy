#include <stdio.h>
#include <iostream>
#include <assert.h>
using namespace std;
char* mystrcpy(char* dest,const char*src){
    assert((dest!=NULL)&&(src!=NULL));
    char *addrp=dest;
    while((*dest++=*src++)!='\0');
    return addrp;

}
char *strcpy(char *strDest, const char *strSrc)

{

   // assert((strDest!=NULL) && (strSrc !=NULL));    // 2分

    char *address = strDest;                                          // 2分

    while( (*strDest++ = * strSrc++) != '\0' )         // 2分

              NULL ;

    return address ;                                                  // 2分

}
int main(int argc, char const *argv[])
{
      char *dest=(char*)malloc(20);
    const char *src="abcdef";

    cout<<mystrcpy(dest,src)<<endl;
    return 0;
}
