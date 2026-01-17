#include <iostream>
using namespace std;

int main()
{
      int marks;
      cout << "enter the Marks:";
      cin >> marks;

      if(marks >= 90){
        cout << "grade A";
      }else if(marks >= 75){
        cout << "grade B";
      }else if(marks >=50){
        cout << "grade C";
      }else{
        cout << "grade F";
      }
      return 0;

}