# What is OOP?
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:
<ul>
<li>OOP is faster and easier to execute </li>
<li>OOP provides a clear structure for the programs</li>
<li>OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug</li>
<li>OOP makes it possible to create full reusable applications with less code and shorter development time</li>
</ul>

# Classes and Objects
Classes and objects are the two main aspects of object-oriented programming.

a class is a template for objects, and an object is an instance of a class.

When the individual objects are created, they inherit all the variables and functions from the class.

# creating class and object
syntax 
class myClass{
    public:
        int num;

};
myClass obj1; //creating object

obj1.num = 5;

# Class Methods

Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:
<ol>
<li>Inside class definition</li>
<li>Outside class definition</li>
</ol>

## Inside class definition
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout<< "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}