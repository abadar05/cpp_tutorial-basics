# https://www.oreilly.com/library/view/c-cookbook/0596007612/ch01s04.html

The project has 2 files
  MathLibrary.cpp
  MathLibrary.h

Q: What is static library
     It is library which can be used by other applications

Q: How Building static library from command line
   The program must be build in two steps

Note: If you compile static library for x86 architecture, it will not work on armv32 architecture
       
    
Step1:
     g++ -c MathLibrary.cpp

     It will create MathLibrary.o object file in src directory	

Step2:
    ar ru MathLibrary.lib MathLibrary.o
    ranlib MathLibrary.lib

    it will create MathLibrary.lib library in src directory
  
    OR
  
    ar ru MathLibrary.a MathLibrary.o
    ranlib MathLibrary.a

    it will create MathLibrary.a Unix library in src directory