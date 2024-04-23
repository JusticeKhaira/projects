#include <iostream>
#include<string>

using namespace std;

int main() {

    string myArray[8] = {"12B3","C234","A345","C15","B177","G3003","C235","B179"};
     for(int i=0; i <8 ; i++)
     {
         string str = myArray[i];
         for(int i=0; i <str.length(); i++){
            char c = str.at(i);
             if (c == 'B' || c == 'b') {
                std::cout << str << std::endl;
                break; 
         }
     
     }


     }
  
   


    return 0;
}
