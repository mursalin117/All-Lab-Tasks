#include <bits/stdc++.h> 

using namespace std; 
  
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod){  
    
    if (n == 1){  
        cout << "Move disk 1 from rod " << fromRod << " to rod " << toRod << endl;  
        return;  
    }  
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);  
    cout << "Move disk " << n << " from rod " << fromRod << " to rod " << toRod << endl;  
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);  
}  
  
// Driver code 
int main()  
{  
    int n; // Number of disks
    printf("Enter the number of disk :\n");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods  
    return 0;  
}  
