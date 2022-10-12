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
## Iterators:

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
### output:
![image](https://user-images.githubusercontent.com/26576892/191549594-4a6a3487-dd06-45fb-bed6-d4d8a55703f1.png)

# Capacity

### size() –
Returns the number of elements in the vector.
### max_size() –
Returns the maximum number of elements that the vector can hold.
### capacity() –
Returns the size of the storage space currently allocated to the vector expressed as number of elements.
### resize(n) –
Resizes the container so that it contains ‘n’ elements.
### empty() – 
Returns whether the container is empty.
### shrink_to_fit() –
Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
### reserve() – 
Requests that the vector capacity be at least enough to contain n elements.
```
// C++ program to illustrate the
// capacity function in vector
#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
 
    // resizes the vector size to 4
    g1.resize(4);
 
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
 
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
 
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
 
    return 0;
}
```
### Output:
### Size : 5
### Capacity : 8
### Max_Size : 4611686018427387903
### Size : 4
### Vector is not empty
### Vector elements are: 1 2 3 4


## Element access:

### reference operator [g] – 
Returns a reference to the element at position ‘g’ in the vector
### at(g) – 
Returns a reference to the element at position ‘g’ in the vector
### front() – 
Returns a reference to the first element in the vector
### back() – 
Returns a reference to the last element in the vector
### data() – 
Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

```
// C++ program to illustrate the
// element access in vector
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);
 
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
 
    cout << "\nat : g1.at(4) = " << g1.at(4);
 
    cout << "\nfront() : g1.front() = " << g1.front();
 
    cout << "\nback() : g1.back() = " << g1.back();
 
    // pointer to the first element
    int* pos = g1.data();
 
    cout << "\nThe first element is " << *pos;
    return 0;
}
```
### Output:
 ![image](https://user-images.githubusercontent.com/26576892/191591461-51b9f924-c5f7-4cfc-8b6d-f1a61b270056.png)

  
  
  ## Modifiers: 

![image](https://user-images.githubusercontent.com/26576892/191592116-8878427c-15a1-4b99-9100-29d77e3a5a7e.png)
```
// C++ program to illustrate the
// Modifiers in vector
#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main()
{
    // Assign vector
    vector<int> v;
 
    // fill the array with 10 five times
    v.assign(5, 10);
 
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // removes last element
    v.pop_back();
 
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
 
    cout << "\nThe first element is: " << v[0];
 
    // removes the first element
    v.erase(v.begin());
 
    cout << "\nThe first element is: " << v[0];
 
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
 
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
 
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
 
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 
    // Swaps v1 and v2
    v1.swap(v2);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}
```
### Output:
![image](https://user-images.githubusercontent.com/26576892/191591852-27d8fff8-b160-448d-9a43-35b23c1ff2f0.png)


## The time complexity for doing various operations on vectors is-

### Random access – constant O(1)
### Insertion or removal of elements at the end – constant O(1)
### Insertion or removal of elements – linear in the distance to the end of the vector O(N)
### Knowing the size – constant O(1)
### Resizing the vector- Linear O(N)

 # Set in C++
 
### When to use sets?
Sets are frequently used containers in competitive programming; whenever there is a need of storing the elements in a sorted manner, we can think of using the sets, but remember that the set does not allow us to store the duplicates value. The value can’t be modified once it is stored. 

### Implementing sets
Sets are traversed using the iterators. 
We have to include the two main header files to work with the sets.
#include< set >

#include< iterator >

  Instead of using the above two header files, we can also use only this one header file.
             This one header file contains all the header file , so we can only use this one header file ,     
    instead of all the other header files .

    #include< bits/stdc++.h >
 
### Some Basic Functions Related To Sets
begin() :- 
Returns an iterator to the first element of the set .
end() :- 
Returns an iterator to the theoretical element that follows last element in the set .
Empty() :-
check wheather the set is empty or not .
max_size() :-
Returns the maximum number of element that set can hold .
Size() :- 
Returns the number of elements in the set .
### Initialising a set in C++
We define the type of values to be stored in a set at the time of its initialisation in C++. By default, the numeric values in a set are stored in increasing order. If we want to store in decreasing order, we can use `greater<int>` . We can initialise a set in multiple ways:

Empty set
Set with Values
Set initialised with another Set
Set initialised with an Array.
Here is an example to describe the initialisation and printing of a set in C++.
```
#include<iostream>
#include<set>

using namespace std;
 
int main()
{
 
    // Empty Set
    set<int> set1;
    // set1 = {}
 
    // Empty Set - Decreasing Order
    set<int, greater<int>> set2;
    // set2 = {} 
 
    // Set with values
    set<int, greater<int>> set3 = {6, 10, 5, 1};
    // set3 = {10, 6, 5, 1}
 
    // Initialize Set using other set
    set<int, greater<int>> set4(set3);
    // set4 = {10, 6, 5, 1} 
 
    // Initializing a set from array
    int arr[] = {10, 4, 5, 61};
    set<int> set5(arr, arr+4);  // Since the array has four elements, thus arr+4 

     // Defining iterator for the set
    set<int> :: iterator it;

    //Printing a set using for loop – (1)
    for (auto it = set5.begin(); it!=set5.end();it++)
    {
        cout<<endl<<*it;
    }
    return 1;
}
```
Output:

4

5

10

61

### Properties:
**Storing order** – The set stores the elements in sorted order.
**Values Characteristics** – All the elements in a set have unique values.
**Values Nature** – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
**Search Technique** – Sets follow the Binary search tree implementation.
**Arranging order** – The values in a set are unindexed.

## Some Basic Functions Associated with Set: 
**begin()** – Returns an iterator to the first element in the set.
**end()** – Returns an iterator to the theoretical element that follows the last element in the set.
**size()** – Returns the number of elements in the set.
**max_size()** – Returns the maximum number of elements that the set can hold.
**empty()** – Returns whether the set is empty.

## The time complexities for doing various operations on sets are:

**Insertion of Elements** – O(log N)

**Deletion of Elements** – O(log N)

```
// CPP program to demonstrate various functions of
// Set in C++ STL
#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main()
{
    // empty set container
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40) << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40) << endl;
 
    return 0;
}
Output
The set s1 is : 
60 50 40 30 20 10 

The set s2 after assign from s1 is : 
10 20 30 40 50 60 

s2 after removal of elements less than 30 :
30 40 50 60 
s2.erase(50) : 1 removed
30 40 60 
s1.lower_bound(40) : 
40
s1.upper_bound(40) : 
30
s2.lower_bound(40) :
40
s2.upper_bound(40) : 
60
```

## Different Function of Set in C++ STL
## Function	Description
**begin()** Returns an iterator to the first element in the set.

**end()**	Returns an iterator to the theoretical element that follows the last element in the set.

**rbegin()**	Returns a reverse iterator pointing to the last element in the container.

**rend()**	Returns a reverse iterator pointing to the theoretical element right before the first element in the set container.

**crbegin()**	Returns a constant iterator pointing to the last element in the container
.
**crend()**	Returns a constant iterator pointing to the position just before the first element in the container.

**cbegin()**	Returns a constant iterator pointing to the first element in the container.

**cend()**	Returns a constant iterator pointing to the position past the last element in the container.

**size()**	Returns the number of elements in the set.

**max_size()**	Returns the maximum number of elements that the set can hold.

**empty()**	Returns whether the set is empty.

**insert(const g)** 	Adds a new element ‘g’ to the set.

**iterator insert (iterator position, const g)**	Adds a new element ‘g’ at the position pointed by the iterator.

**erase(iterator position)** 	Removes the element at the position pointed by the iterator.

**erase(const g)**	Removes the value ‘g’ from the set.

**clear()** 	Removes all the elements from the set.

**key_comp() / value_comp()**	Returns the object that determines how the elements in the set are ordered (‘<‘ by default).

**find(const g)**	Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to end.

**count(const g)**	Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.

**lower_bound(const g)**	Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.

**upper_bound(const g)**	Returns an iterator to the first element that will go after the element ‘g’ in the set.

**equal_range()**	The function returns an iterator of pairs. (key_comp). The pair refers to the range that includes all the elements in the container which have a key equivalent to k.

**emplace()**	This function is used to insert a new element into the set container, only if the element to be inserted is unique and does not already exist in the set.

**emplace_hint()**	Returns an iterator pointing to the position where the insertion is done. If the element passed in the parameter already exists, then it returns an iterator pointing to the position where the existing element is.

**swap()**	This function is used to exchange the contents of two sets but the sets must be of the same type, although sizes may differ.

**operator=**	The ‘=’ is an operator in C++ STL that copies (or moves) a set to another set and set::operator= is the corresponding operator function.

**get_allocator()**	Returns the copy of the allocator object associated with the set.

# Map

Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

## Some basic functions associated with Map: 

**begin()** – Returns an iterator to the first element in the map.
**end()** – Returns an iterator to the theoretical element that follows the last element in the map.
**size()** – Returns the number of elements in the map.
**max_size()** – Returns the maximum number of elements that the map can hold.
**empty()** – Returns whether the map is empty.
**pair insert(keyvalue, mapvalue)** – Adds a new element to the map.
**erase(iterator position)** – Removes the element at the position pointed by the iterator.
**erase(const g)** – Removes the key-value ‘g’ from the map.
**clear()** – Removes all the elements from the map

```
// CPP Program to demonstrate the implementation in Map
// divyansh mishra --> divyanshmishra101010
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
  
int main()
{
  
    // empty map container
    map<int, int> gquiz1;
  
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
      
      gquiz1[7]=10;     // another way of inserting a value in a map
     
  
    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
  
    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
  
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
  
    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
  
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
  
    cout << endl;
  
    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;
  
    return 0;
}

```






