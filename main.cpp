#include <iostream>
using namespace std;


//input validation
bool InputValid(int num){
    return(num>=-20 && num<=50);
}
//InputValid
void Input(int arr[],int size){
    for(int i=0;i<size;i++){
       int num;
        do{
            std::cout << "Enter number "<< i+1 << " between -20 & 50" << std::endl;
            std::cin >> num;
            if(!InputValid(num)){
                std::cout << "Invalid! Please try again" << std::endl;
            }
        }
    while(!InputValid(num));
    arr[i]=num;
    }
}
//Negative func
void NegativeValue(int arr[],int size){
    std::cout << "Negative numbers are in the array are"  << std::endl;
    bool found = false;
    for(int i=0; i<size;i++){
        if(arr[i]<0){
           cout << arr[i] << " ";
            found= true;
        }
    }
    if(!found){
        std::cout << "None" << std::endl;
    }
   cout << endl;
}
//Every other element function
void EveryOther(int arr[], int size) {
    cout << "Every other element in the array is:" << endl;
    for (int i = 0; i < size; i += 2) {   
        cout << arr[i] << " ";
    }
  cout <<  endl; 
}
//Sum of positive numbers 
void SumPositive(int arr[], int size) {
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {   
            sum += arr[i];  
        }
    }
    cout << "Sum of all positive numbers in the array is: " << sum << endl;
}
//Display the original array 
void DisplayOriginal(int arr[], int size) {
    cout << "Original array elements are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Display odd positive numbers function
void OddPositive(int arr[], int size) {
    cout << "Odd positive numbers in the array are:" << endl;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 != 0) {  
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;
}
int main()
{
 //array
  const int size = 15;
  int arr[size];
  //calling input
  Input(arr,size);
  //calling NegativeValue
  NegativeValue(arr,size);
  //calling EveryOther
  EveryOther(arr,size);
  //calling sumOfAll
  SumPositive(arr,size);
  //orignal array
  DisplayOriginal(arr,size);
  //odd positive numbers
  OddPositive(arr,size);
  //menu
  int choice= -10;
  while(choice != 0){
  std::cout << "Menu" << std::endl;
  std::cout << "Select 2 for displaying negative numbers" << std::endl;
  std::cout << "Select 3 for displaying every other element in the array" << std::endl;
  std::cout << "Select 4 for displaying sum of all positive numbers" << std::endl;
  std::cout << "Select 5 for displaying the original array" << std::endl;
  std::cout << "Select 6 for displaying odd positive numbers" << std::endl;
  std::cout << "Select 0 to exit programme" << std::endl;
  std::cout << "Enter your choice" << std::endl;
  std::cin >> choice;
  switch(choice){
     
      case 2: 
      NegativeValue(arr,size);
      break;
      
      case 3: 
      EveryOther(arr,size);
      break;
      
      case 4: 
      SumPositive(arr,size);
      break;
      
      case 5: 
      DisplayOriginal(arr,size);
      break;
      
      case 6: 
      OddPositive(arr,size);
      break;
      
      case 0: 
      std::cout << "Exiting program... Goodbye!" << std::endl;
      break;
      
      default:
      std::cout << "Invalid Choice! Please try again" << std::endl;
  }
  }
    return 0;
}
