# Elementary- C++

## To take absolute(+ve) value
-->abs()-for int
-->fabs()-for double
-->fabsf()-for float

# Sort() function
It is a built-in function of algorithm header file it is used to sort the containers like an array, vectors in a specified order. Internally this function is implemented as Quick-sort
Quicksort is a divide and conquer algorithm. Quicksort first divides a large list of elements into two smaller sub-lists: the lower elements and the higher elements. Quicksort then recursively sort the sub-lists.

### sort(array, array+n);
# reverse()
reverse() is a function in algorithm header file used to reverse a sequence in the given range.
In the following example, we shall include algorithm header file and use reverse() function. Pass the beginning and ending of the string as arguments to reverse() function as shown in the program. This process reverses the string in-place.
### C++ Program
![image](https://user-images.githubusercontent.com/26576892/190890324-34b247cd-a96a-4657-a008-16907c8ab4bd.png)

# (String) Full line taking as input

                        string fullName;
                        cin >> fullName;
reads the first word of the full name.

                        getline(cin, fullName);
reads the rest of the name over top of the first word. Computer programs do exactly what you tell them to do and show somewhat less than zero mercy if that's the wrong thing to do.

So given John Jacob Jingleheimer Schmidt

                        cin >> fullName; // reads John into fullname
                        getline(cin, fullName); // reads  Jacob Jingleheimer Schmidt into fullname, 
                        // replacing John
                        cout << fullName << endl; // prints  Jacob Jingleheimer Schmidt
### Solution
Remove the cin >> fullName;

                        getline(cin, fullName); // reads John Jacob Jingleheimer Schmidt into fullname, 
                        cout << fullName << endl; // prints John Jacob Jingleheimer Schmidt

# STL
STL stands for Standard Template Library. STL is a set of general-purpose classes and functions which are mainly used for storing and processing data. STL can be defined as a library of container classes, algorithms, and iterators and vectors in C++ is a part of STL. The main idea behind STL is to reuse codes already written and tested. It saves time and effort.

STL has four components
### Algorithms: 
It defines a collection of functions specially designed to be used on ranges of elements. Examples are sorting, searching, etc.
### Containers: 
Containers store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these  container adaptors.
### Functions: 
STL includes classes which overload the function call operator. Instances of such classes are called functors.
### Iterators: 
It is used for working upon a sequence of values.It provides generiality in STL.

# Vectors in C++?
Vectors are part of STL. Vectors in C++ are sequence containers representing arrays that can change their size during runtime. They use contiguous storage locations for their elements just as efficiently as in arrays, which means that their elements can also be accessed using offsets on regular pointers to its elements.

Vectors are the dynamic arrays that are used to store data.It is different from arrays which store sequential data and are static in nature, Vectors provide more flexibility to the program. Vectors can adjust their size automatically when an element is inserted or deleted from it.

Vectors are not ordered in C++. Vector elements are placed in adjacent storage and  can be easily accessed and traversed across using iterators. In vectors, data is inserted at the end when we use push_back() function . Inserting an element at the end of a vector takes differential time, as sometimes there may be a need of extending the vector,  but inserting the element at the beginning or at the middle takes linear time. Removing the last element takes only constant time because no resizing takes place.

# Declaration of Vectors in C++
It is mandatory to include 
````
                        #include<vector> 
````                       
  library before using vectors in C++.

For Vector declaration we need to follow the below syntax:

1
  ````
                        vector< object_type > vector_variable_name;
  ````
Initialization of Vectors
Pushing the values one-by-one in vector using push_back():
All the elements that need to be stored in the vector are pushed back one-by-one in the vector using the push_back() method. 
Syntax:
1
````
                        vector_name.push_back(element_value);
````                        
Using the overload constructor of the vector Class:
This method is used to populate a vector with multiple times the same value.
Syntax:
1
````
                        vector<object_type> vector_name (number_of_repetition,element_value);
````
Using Array:
This method uses array as a parameter to be passed in the vector constructor.
Syntax:
1
````
                        vector<object_type> vector_name {val1,val2,val3,....,valn};
````
Using already initialized vector:
This method uses an already created vector to create a new vector with the same values.
This method passes the begin() and end() of an already initialized vector.

|
Syntax:
````
                        vector<object_type> vector_name_1{val1,val2,…,valn};
                        vector<object_type> vector_name_2(vector_name_1.begin(),vector_name_1.end())
````
## Various Functions in Vectors are
### Iterators:

### begin() –  It returns an iterator pointing to the first element in the vector.
### end() – It returns an iterator pointing to the last element in the vector.
### rbegin() – It returns a reverse iterator pointing to the last element in the vector.
### rend() – It returns a reverse iterator pointing to the element preceding the first element in the vector. Basically considered as a reverse end.
### cbegin() – It returns a constant iterator pointing to the first element in the vector.
### cend() – It returns a constant iterator pointing to the element that follows the last element in the vector.
### crbegin() – It returns a constant reverse iterator pointing to the last element in the vector.
### crend() – It returns a constant reverse iterator pointing to the element preceding the first element in the vector.
### Example Code for Visualizing the use of Iterators:
```
//C++ Code to Visualize Use of Iterators in C++
#include <iostream> 
#include <vector> 
using namespace std;   
int main() 
{ 
    vector<int> a; //Declaration of vector in C++
   
   //Initializing vector ‘a’ with values from 1 to 7
    for (int i = 1; i <=7 ; i++) 
        a.push_back(i); 

    //Printing the Output of vector ‘a’ using iterators  begin() and end()  
    cout << "Output of begin and end Function: "; 
    for (auto i = a.begin(); i != a.end(); ++i) 
        cout << *i << " "; 
   
   //Printing the Output of vector ‘a’ using iterators cbegin() and cend()
    cout << "\nOutput of cbegin and cend Function: "; 
    for (auto i = a.cbegin(); i != a.cend(); ++i) 
        cout << *i << " "; 
   
   //Printing the output of vector ‘a’ using iterators rbegin() and rend()
    cout << "\nOutput of rbegin and rend Function: "; 
    for (auto ir = a.rbegin(); ir != a.rend(); ++ir) 
        cout << *ir << " "; 
  
    //Printing the output of vector ‘a’ using iterators crbegin() and crend()
    cout << "\nOutput of crbegin and crend Function: "; 
    for (auto ir = a.crbegin(); ir != a.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
} 
```
