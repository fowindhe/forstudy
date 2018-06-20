#include <stdio.h>
#include <string.h>
 void findmaxchar(const char* src,char& maxchar,size_t &maxcount){
    int counts[256];
    memset(counts,0,256*sizeof(int));
    char c='\0';
    for(const char* p=src;*p;p++){
        ++counts[*p];
        if(counts[*p]>counts[c])
            c=*p;

    }
    maxchar=c;
    maxcount=counts[c];
    return;

}
int main(int argc, char const *argv[])
{
  const char* ps = "fjasjfasdjfdas;lkfj;asj"; 
  char maxchar;
  size_t maxcount=0; 
  findmaxchar(ps,maxchar,maxcount);
  
    // char c = '\0';  
    // size_t counts[256] = { 0 };  
    // for( const char* p=ps; *p; ++p )  
    // {  
    //     ++counts[*p];  
    //     if( counts[*p] > counts[c] )  
    //         c = *p;  
    // }  
  
    printf( "Character=%c, count=%zu\n", maxchar, maxcount ); 
    return 0;
}

