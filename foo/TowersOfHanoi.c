/*The Towers of Hanoi problem is a problem that is used to teach the fundementals of Recursion. 
Towers of Hanoi is a mathematical puzzle where we have three rods and n disks. 
The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk.*/
#include <stdio.h>

void hanoi(int n, char from, char to, char temp)
{
  if (n > 0){
    hanoi(n-1, from, temp, to);
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
    hanoi(n-1, temp, to, from);
  }
}

int main()
{
  int n;
  
  printf("Enter the number of disks: \n");
  scanf("%d", &n);
  
  hanoi(n, 'A', 'C', 'B');
  
  return 0;
}
