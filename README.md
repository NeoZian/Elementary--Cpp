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
## Algorithms: 
It defines a collection of functions specially designed to be used on ranges of elements. Examples are sorting, searching, etc.
## Containers: 
Containers store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these  container adaptors.
## Functions: 
STL includes classes which overload the function call operator. Instances of such classes are called functors.
## Iterators: 
It is used for working upon a sequence of values.It provides generiality in STL.





