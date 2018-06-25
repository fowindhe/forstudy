#include <stdio.h>
#include <iostream>
using namespace std;
void QSort(char* src,int low,int high){
    if(low>high)
        return;
    int first=low;
    int last=high;
    int key=src[low];
    int tmpc=0;
    while(first<last){

        while(first<last&&src[first]<=key)
            first++;
        tmpc=src[first];
        src[first]=src[last];
        src[last]=tmpc;
        while(first<last&&src[last]>=key)
            last--;
        tmpc=src[first];
        src[first]=src[last];
        src[last]=tmpc;

    }
    QSort(src,low,first-1);
    QSort(src,first+1,high);

}

int main(){
    char src[]="891321ab456cdf";
    //char *p=src;
    cout<<src<<endl;
    QSort(src,0,strlen(src)-1);
    cout<<src<<endl;
}