#include <stdio.h>
#include <string.h>

int main() {
    
    char *names[] = {"apple", "mango","ant","banana","cat","anaconda"};

    int n = sizeof(names) / sizeof(names[0]);
    char **arr = names;
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1-i;j++){
            printf("%d\n",strcmp(*(arr+j),*(arr+j+1)));
            if(strcmp(*(arr+j),*(arr+j+1))==1){
                printf("%p and %p swap\n",*(arr+j),*(arr+j+1));
                char* tmp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = tmp;
            }
        }
    }
    
    for(int i = 0;i<n;i++){
        printf("%s\n",names[i]);
    }

    return 0;
}
