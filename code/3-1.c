#include <stdio.h>
#include <string.h>

int main() {
    
    char *names[] = {"apple", "mange","ant","banana","cat","anaconda"};
    int n = sizeof(names) / sizeof(names[0]);

    int i = 0, count = 0;
    while (count != (n-1)*(n-1))
    {
        if(strcmp(*(names+i),*(names+i+1))==1){
            char* tmp = *(names+i);
            *(names+i) = *(names+i+1);
            *(names+i+1) = tmp;
        }
        if(i+2 == n){
            i = 0;
        }else{ i++;}
        count++;
    }
    

    for(int i = 0;i<n;i++){
        printf("%s\n",names[i]);
    }

    return 0;
}
