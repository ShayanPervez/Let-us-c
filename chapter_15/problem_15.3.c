#include <stdio.h>
#include <string.h>

int main() {
    char f0[100] = "A";
    char f1[100] = "B";
    char fn[100];
    
    printf("%s\n", f0);
    printf("%s\n", f1);
    
    for (int i = 2; i < 5; i++) {
        strcpy(fn, f1);     
        strcat(fn, f0);      

        printf("%s\n", fn);  

        strcpy(f0, f1);      
        strcpy(f1, fn);      
    }

    return 0;
}
