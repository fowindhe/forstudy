#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void QSort(char *src,int low,int high){
    if(low>=high)
        return;
    int key=src[low];
    int first=low;
    int last=high;
    int tmpc;
    while(first<last){
        while(first<last&&src[last]>=key)
            last--;
        tmpc=src[first];
        src[first]=src[last];
        src[last]=tmpc; 
        while(first<last&&src[first]<=key)
            first++;
        tmpc=src[first];
        src[first]=src[last];
        src[last]=tmpc;
        
    }
    QSort(src,low,first-1);
    QSort(src,first+1,high);

}
int main(int argc, char const *argv[])
{
    // printf("hello");
    char first[]="hello ";
    char middle[]="my dear ";
    char end []="brother!";
    char out[256];
    memset(out,0,256);
    strcat(out,first);
    strcat(out,middle);
    strcat(out,end);
    cout<<out<<"len=="<<strlen(out)<<endl;
    QSort(out,0,strlen(out)-1);
    cout<<out<<"outlen=="<<strlen(out)<<endl;
    return 0;
}
