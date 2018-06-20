#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int flag=0;
    for(int i=0;i<2;i++){
        flag=fork();
        printf("%d=%d-\n",getpid(),flag);
    }
    printf("\n");
    // int n=20;
    // for(int i=0;i<n;n--)
    //     printf("-");
    return 0;
}
