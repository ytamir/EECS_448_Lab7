#include "LinkedList.h"
LinkedList<int>* demoLinkedList = new LinkedList<int>();



int main(){

  std::cout<< "Can a LinkedList object be created?\n";

  std::cout<< "A LinkedList object has succesfully been implemented\n";
  demoLinkedList->addFront(5);
  if (demoLinkedList->search(5))
  {
    std::cout<< "A LinkedList object can take in a 5\n";
  }


  return 0;

}

public bool checkSize()
{

}
