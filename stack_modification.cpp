// We will be modifing the Stack Implementation such that we could find the minimum element of the stack in O(1) time

// For this, we will simply be inserting two numbers at once in the stack, first one is the new element to be inserted and 2nd one would be the 
// smallest element in the stack until that element.

#include <bits/stdc++.h>
using namespace std;

stack<pair<int, int>> add(stack<pair<int, int>> s, int new){
  if (!s.empty()){
    int smallest_element = min(new, s.top().second);
  }
  else{
    int smallest_element = new;
  }
  s.push({new, smallest_element});           // every time we add an element we would need just one comparison to know the next smallest value of the stack
  return s;                                  // this would help in determining the smallest element of the stack in O(1) time
}


  
