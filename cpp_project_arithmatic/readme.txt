[include] public header files goes here
[src] we have config_hanlder.h, function.cpp, function.h and main.cpp.
[libs] third party libraries goes here  

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
       cmake -G "MinGW Makefiles" -S "C:\CPP\cpp_project_arithmatic"

    
# OUTPUT

C:\CPP\cpp_project_arithmatic>mkdir build && cd build
C:\CPP\cpp_project_arithmatic\build>cmake -G "MinGW Makefiles" -S "C:\CPP\cpp_project_arithmatic"

-- The C compiler identification is GNU 8.1.0
-- The CXX compiler identification is GNU 8.1.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: C:/Program Files/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/gcc.exe - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/mingw-w64/x86_64-8.1.0-win32-seh-rt_v6-rev0/mingw64/bin/g++.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/CPP/cpp_project_arithmatic/build


  - Run following command to create Executable from Makefile
  
   [Option1] 
     
     # cmake --build <source-dir-of-Makefile>	
       cmake --build "C:\CPP\cpp_project_arithmatic\build"

# OUTPUT

C:\CPP\cpp_project_arithmatic\build>cmake --build "C:\CPP\cpp_project_arithmatic\build"

[ 33%] Building CXX object CMakeFiles/binary.dir/src/main.cpp.obj
[ 66%] Building CXX object CMakeFiles/binary.dir/src/function.cpp.obj
[100%] Linking CXX executable binary.exe
[100%] Built target binary


   [Option2]
      
       mingw32-make

# Delete exe  
   mingw32-make clean