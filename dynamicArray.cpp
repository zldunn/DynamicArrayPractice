#include <iostream>
#include <string>
#include "dynamicArray.h"

using namespace std;



  DArray::DArray(int initSize){

    MainArray = new int[initSize];
    maxSize = initSize;
    size = 0;


  }

  DArray::DArray(){
    DArray::DArray(baseSize);
  }


  void DArray::insert(int val){

    if(size < maxSize){

      MainArray[size] = val;
    }else{
      extend();
      insert(val);
    }
    ++size;
  }


void DArray::extend(){
  maxSize = maxSize*2;
  int * temp;
  temp = new int[maxSize];
  for(int i=0; i<(maxSize/2); ++i){
    temp[i] = MainArray[i];
  }

  delete[] MainArray;
  MainArray = temp;


}

DArray::~DArray(){
  delete[] MainArray;
}

void DArray::print(){
  cout <<"printing :) \n" << "size: " << maxSize << "\n [ ";
  for(int i=0; i<size; ++i){
    cout<< MainArray[i] ;
    if(i<size -1) cout<<", ";
  }

  cout << "]";
}
