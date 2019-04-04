## Templates and Generic Functions

Template is simple and yet very powerful tool in C++. The simple idea is to pass data type as a parameter so that we don’t need to write same code for different data types. For example a software company may need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() and pass data type as a parameter. 

A class template provides a specification for generating classes based on parameters. Class templates are generally used to implement containers. 

```C++
// Creating a class template
template <typename T> 
class Array { 
private: 
    T *ptr; 
    int size; 
public: 
    Array(T arr[], int s); 
    void print(); 
}; 

main()
{
   Array<int> intarr;
   Array<string> strarr;
}
```

```C++
// Implementing a generic function
template <typename T> 
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 

main()
{
   // This can be called as
   cout << myMax<int> (1, 2) << endl;
   cout << myMax<double>(12.232, 145.22) << endl;
}
```

## Vectors

Vectors are dynamic arrays that can resize itself automatically when an element is inserted or deleted, with their storage being handled automatically.

```C++
// Creating Vectors
vector <int> v; // Creates an empty vector of size zero.
vector <int> v(10); // Creates a vector of size 10 with default values.
vector <int> v(10, 1); // Creates a vector of size 10 with each element set to 1.
```
[Program](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day3/vector.cpp)

### Vector Functions

- push_back() - Insert an element to the end of the vector.
- pop_back() - Remove the last element in the vector.
- size() - Return the number of elements present in the vector.
- capacity() - Return the current capacity of the vector.
- empty() - Returns whether the container is empty.
- begin() - Returns an iterator pointing to the first element of the vector.
- end() - Returns an iterator pointing to the theoretical last element(the element after the last element) of the vector.
- clear() - Clears the vector.

Refer [this link](https://www.geeksforgeeks.org/vector-in-cpp-stl/).

## The sort() Function

[Program](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day3/vector.cpp)

There is a sort() function that is already implemented in stl.
> sort(starting pointer, ending pointer, compare function)


## Recursive GCD Algorithm

[Program](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day3/gcd.cpp)

> GCD(a, b) = a, if b is 0  
>             GCD(b, a % b), otherwise
