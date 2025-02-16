#include <stdio.h> 
int Check_Neon_Number(int num) { 
    int square = num * num; 
    int n = square; 
    int digit; 
    int sum = 0; 
    while (n != 0) { 
        digit = n % 10; 
        sum = sum + digit; 
        n = n / 10; 
    } 
    if (sum == num) 
        return 1; // If condition is true. 
    else
        return 0; // If condition is false. 
} 
int main() 
{ 
    int num = 9; 
    int ans = Check_Neon_Number(num); 
    if (ans == 1) 
        printf("true"); 
    else
        printf("false"); 
    return 0; 
}