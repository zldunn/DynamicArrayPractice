#include <iostream>
#include "dynamicArray.h"

using namespace std;

int main(){

  DArray arr = DArray(5);
   arr.insert(1);
   arr.insert(2);
   arr.insert(3);
   arr.insert(4);
   arr.insert(5);
   arr.insert(6);
   arr.insert(7);
   arr.insert(8);
   arr.insert(9);
   arr.insert(10);
   arr.insert(11);

   arr.print();

  return 1;
}
