#include <stdio.h>
int main()
{
    char old_name[] = "Sruti.txt";
    char new_name[] = "Momo.txt";
    int value;
    value = rename(old_name, new_name);
    if (!value) {
        printf("%s", "File name changed successfully");
    }
    else {
        perror("Error");
    }
    return 0;
}