#include <iostream>
using namespace std;


void swapmaxmin(int array[] , int size){
    int max = 0;
    int min = 0;
   
   for(int i = 0; i < size;i++){
       if(array[i] > array[max])
       {
           max = i;
       }
       if(array[i] < min){
          min = 1;
       }
   }
    swap(array[min] , array[max]);

}

int main()
{
    int array[] = {2 , 6 , 8 , 4 , 3 , 9 , 10};
    int size = 7;
    
    swapmaxmin(array , size);
    
    for(int i = 0;i < size;i++){
        cout << "the array:" << array[i] << endl;
    }
    
    return 0;
}