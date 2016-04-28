#include "LinkedList.h"
LinkedList<int>* demoLinkedList = new LinkedList<int>();



 bool checkSize( int expected)
  {
      if (demoLinkedList->size() == expected)
        {
          return true;

        }
        else
        {
          return false;
        }

  }

  void printContents()
  {
    std::vector<int> path = demoLinkedList->toVector();
for (std::vector<int>::const_iterator i = path.begin(); i != path.end(); ++i)
    std::cout << *i << ' ';
    std::cout<< "\n";

  }

void checkEmpty()
{
  if(demoLinkedList->isEmpty())
  {
    std::cout<< "There is a substantial issue aqui\n";
  }
}
  bool checkElementInside( int expected)
   {
       if (demoLinkedList->search(expected))
         {
           return true;

         }
         else
         {
           return false;
         }

   }


   void checkOneElement()
   {
     demoLinkedList->addFront(5);
     //bool flag = checkElement(5);
     if(checkElementInside(5))
     {
       std::cout<< "There is not an issue in the checking the element\n";
     }
     else
     {
       std::cout<< "There is an issue in the checking the element\n";
     }

     demoLinkedList->removeFront();
     if(checkSize(0))
     {
       std::cout<< "There is not an issue and the size is not 0\n";
     }
     else
     {
        demoLinkedList->removeFront();
        if(checkSize(0))
        {
          std::cout<< "There is not an issue and the size is not 0\n";
        }
        else
        {
          std::cout<< "There is an issue and the size is not 0\n";
        }



     }

     delete demoLinkedList;
   }


void checkMultipleElements()
{
  LinkedList<int>* demoLinkedList = new LinkedList<int>();
    std::cout<<"Adding a 5 to the beginning of the list\n";
    demoLinkedList->addFront(5);
    printContents();
    std::cout<<"Adding a 7 to the beginning of the list\n";
    demoLinkedList->addFront(7);
    printContents();
    checkEmpty();
    std::cout<<"removing the front of the list\n";
    demoLinkedList->removeFront();
    checkEmpty();
    printContents();
    std::cout<<"Add a 5 to the front of the list\n";
    demoLinkedList->addFront(5);
    printContents();
    checkEmpty();
    std::cout<<"removeBack\n";
    demoLinkedList->removeBack();
    printContents();
    checkEmpty();
    std::cout<<"removeFront\n";
    demoLinkedList->removeBack();
    printContents();
    checkEmpty();






}

int main(){
    std::cout<< "Checking One Element\n\n";
  checkOneElement();
  std::cout<<"\n\n\n";


  std::cout<< "Checking Multiple Elements\n\n";
  checkMultipleElements();
    std::cout<<"\n\n\n";


  return 0;

}
