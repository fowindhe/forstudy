#include <stdio.h>
#include <string.h>
#include "c++/4.2.1/backward/iostream.h"
using namespace std;
void getMaxC(char *src,char&thec,int &count){
    int counts[256]={0};
    int tmpc='\0';
    for(char* curp=src;curp;curp++){
        counts[*curp]++;
        if(counts[*curp]>counts[tmpc]){
            tmpc=*curp;
        }
    }
    thec=tmpc;
    count=counts[tmpc];
    return;
}

int get1Counts(int src){
    int counts=0;
    for(int tmpa=src;tmpa;tmpa&=tmpa-1)
        counts++;
    return counts;
}

void QSort(char* src,int low,int high){
    if(low>=high)
        return;
    int first=low;
    int last=high;
    int key=src[low];
    int tmpc=0;
    while(first<last){
        while(low<last&&src[last]>=key)
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
    char src[]="hello my brother 123321";
    cout<<src<<endl;
    QSort(src,0,strlen(src)-1);
    cout<<src<<endl;
     char maxc;
     int counts;
     getMaxC(src,maxc,counts);
    printf("%c===%d\n",maxc,counts);
    //int inter=9;
    // counts=get1Counts(inter);
    // printf("1counts=%d",counts);

    return 0;
}
