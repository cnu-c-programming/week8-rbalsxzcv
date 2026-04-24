#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int i = 0, count = 0;
    while (count != (argc-1)*(argc))
    {
        if(strcmp(*(argv+i),*(argv+i+1))==1){
            char* tmp = *(argv+i);
            *(argv+i) = *(argv+i+1);
            *(argv+i+1) = tmp;
        }
        if(i+2 == argc){
            i = 0;
        }else{ i++;}
        count++;
    }
    

    for(int i = 0;i<argc;i++){
        printf("%s\n",argv[i]);
    }

    return 0;
}
