// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the maximized profit 
int maxProfit(int seats[], int k, int n) 
{ 
  
    // Push all the vacant seats 
    // in a priority queue 
    priority_queue<int> pq; 
    for (int i = 0; i < k; i++) 
        pq.push(seats[i]); 
  
    // To store the maximized profit 
    int profit = 0; 
  
    // To count the people that 
    // have been sold a ticket 
    int c = 0; 
    while (c < n) { 
  
        // Get the maximimum number of 
        // vacant seats for any row 
        int top = pq.top(); 
  
        // Remove it from the queue 
        pq.pop(); 
  
        // If there are no vacant seats 
        if (top == 0) 
            break; 
  
        // Update the profit 
        profit = profit + top; 
  
        // Push the updated status of the 
        // vacant seats in the current row 
        pq.push(top - 1); 
  
        // Update the count of persons 
        c++; 
    } 
    return profit; 
} 
  
// Driver code 
int main() 
{ 
    int seats[] = { 2, 3, 4, 5, 1 }; 
    int k = sizeof(seats) / sizeof(int); 
    int n = 6; 
  
    cout << maxProfit(seats, k, n); 
  
    return 0; 
} 