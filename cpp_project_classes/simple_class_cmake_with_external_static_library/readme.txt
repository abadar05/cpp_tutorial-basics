[include] public header files goes here example MathLibrary.h
[src] we have main.cpp.
[libs] third party libraries goes here Mathlibrary.a 

# CMakeLists.txt file under project root dir

# Linux
 1- mkdir build
 2- cd build
 3- cmake ..
 4- make

# Windows 10
 1- mkdir build
 2- cd build
 3- cmake -G <GeneratorName> -S <source-dir-of-CMakeLists.txt>
 4- cmake --build <source-dir-of-Makefile>

# Example create binary (exe)

   - Run the following command to create Makefile from CMakeLists.txt
     
     # cmake -G <GeneratorName> -S <source-dir-of-CMakeLists.txt>
       cmake -G "MinGW Makefiles" -S "C:\CPP\cpp_project_classes\simple_class_cmake_with_external_static_library"

  - Run following command to create Executable from Makefile
  
   [Option1] 
     
     # cmake --build <source-dir-of-Makefile>	
       cmake --build "C:\CPP\cpp_project_classes\simple_class_cmake_with_external_static_library\build"


   [Option2]
      
       mingw32-make

# Delete exe  
   mingw32-make clean