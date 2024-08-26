//----------------------------------------  NOTES  ----------------------------------------//
    // Object Oriented Programming Language
        // 1 :: Abstraction
        // 2 :: Encapsulation
        // 3 :: Inheritance
        // 4 :: Polymorphism
    // Not Pure OOP WHY???
    // ANSWER :: Because it supports function programming also and not always mandatory to write
    //           programs using oop concepts as it supports the concepts of C programming.
    // It is extension of C.
    // It was developed by Bjarne Stroustrup.
    // It was developed in Bell Labs.
    // Started Development in 1979.
    // First Release in 1983.
    // Previously known as "C with Classes" later changed to "C++".
    // C++ is a 
    //    statically typed
    //    free form
    //    compiled
    //    general-purpose language
    //    efficient performance

//--------------------------------------------------------------------------------//

// Sample Program in C++
#include <iostream>
using namespace std;

int main(){
  cout<<"Welcome Saurabh!"<<endl; // OUTPUT: Welcome Saurabh!
  return 0;
}

//-------------------------------------- THEORY ------------------------------------------//
// cin console input
// cout console output

// cin and cout both are objects of istream and ostream class respectively, these two classes
// resides inside istream and ostream header file and these two header files are included (merged) 
// in iostream.

// cin is used with stream extraction operator (>>)
// cout is used with stream insertion operator (<<)

// Example program 1
# include <iostream>
using namespace std;
int main(){
    
    int i; 
    cout<< "Enter a number:"<<endl;
    cin>>i;
    cout<< "The value you entered is "<< i << endl;
    return 0;
}

// OUTPUT:
Enter a number:
25
The value you entered is 25

// Example program 2
# include <iostream>
using namespace std;
int main(){
    
    string prof;
    cout<< "Enter your profession:"<<endl;
    cin>>prof;
    cout<< "So, you are a "<< prof << "!." << endl;
    return 0;
}

// OUTPUT:
Enter your profession:
student
So, you are a student!.

//-------------------------------------- THEORY ------------------------------------------//

  // OPERATORS
  +  -  *  /  %

//-------------------------------------- THEORY ------------------------------------------//
// goto statement
# include <iostream>
using namespace std;
int main(){
    
    cout<<"Saurabh is a good student."<<endl;
    goto a;
    cout<<"Saurabh is the best student."<<endl;
    a:
    cout<<"Saurabh is a brilliant student."<<endl;
    cout<<"Saurabh is a inovative student."<<endl;
    return 0;
}
//OUTPUT:
Saurabh is a good student.
Saurabh is a briliant student.
Saurabh is a inovative student.

//-------------------------------------- THEORY ------------------------------------------//
// Passing array to a fucntion
# include <iostream>
using namespace std;

void func(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
};

int main(){
    
    int arr[] = {3,4,6,1,29,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    func(arr, size);
    return 0;
}
//OUTPUT:
3
4
6
1
29
10

//-------------------------------------- THEORY ------------------------------------------//
// Function Overloading in C++











  
