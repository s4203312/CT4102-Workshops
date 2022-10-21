//#include <iostream>
//
//int main()
//{
//    float aBasicArray[5];
//    float usernumber = 0;
//    int valueToRemove = 0;
//    bool found = false;
//
//    for (int i = 0; i < 5; i++) {           //Setting up the array with the user inputs
//        std::cout << "Enter a float value: ";
//        std::cin >> usernumber;
//        aBasicArray[i] = usernumber;
//    }
//
//    std::cout << "Enter a position you want to remove: ";
//    std::cin >> valueToRemove;                          //Collecting the position they wish to remove
//
//    for (int i = 0; i < 5; i++) {
//        if (i == valueToRemove) {                       //Finding the position in the array
//            aBasicArray[i] = aBasicArray[i + 1];        //Moving the position of the array by 1
//            found = true;
//        }
//        else if (found == true) {
//            aBasicArray[i] = aBasicArray[i + 1];        //Moving all of the inputs after the removed file up the array by one
//        }
//    }
//
//    aBasicArray[4] = 0;                 //Setting the last input in the array to be 0 (e.g. removed)
//
//    for (int i = 0; i < 5; i++) {
//        std::cout << "aBasicArray[" << i << "] :" << aBasicArray[i] << "\n";        //Printing the array back out
//    }
//}
