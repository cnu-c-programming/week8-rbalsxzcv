#include <stdio.h>

char *my_strcat(char *dst, const char *src){
    int i = 0;
    while (1 ==1)
    {
        if(*(dst+i) == '\0'){
            for(int j = 0;*(src+j) != '\0';j++){
                *(dst+i+j) = *(src + j);
            }
            break;
        }else{
            i++;
        }
    }
    
}

int main() {
    char str1[20]= "Hello";
    char str2[] = "World";

    printf("%s\n",str1);
    my_strcat(str1,str2);
    printf("%s\n",str1);

    return 0;
}
