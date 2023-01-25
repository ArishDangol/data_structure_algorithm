//4. wap to find solution of TOH problem using recursion.
/*
 * Tower of Hanoi Program in C
 */
 
#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char from_rod, char to_rod, char aux_rod)
{
    // Base Condition if no of disks are
    if (num == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
 
    // Recursively calling function twice
    towers(num - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", num, from_rod, to_rod);
    towers(num - 1, aux_rod, to_rod, from_rod);
}