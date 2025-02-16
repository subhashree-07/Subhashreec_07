#include <stdio.h>
#include <string.h>
void print(char *s) {
    int first = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && first) {
            printf("%c ", s[i]);
            first = 0;        
        }
        if (s[i] == ' ')
            first = 1;
    }
}

int main() {
    char s []="Green garden";
  
      // Printing first character of each word in s
    print(s);
    return 0;
}
