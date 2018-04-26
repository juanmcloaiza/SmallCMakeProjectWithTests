# SmallCMakeProjectWithTests

Repo to get the feeling of a CMake project which relies on googletest to do the unit testing: <https://github.com/google/googletest>.

Build:  

 $ mkdir /Wherever/build  
 $ cd /Wherever/build  
 $ cmake -A x64 -T host=x64 /Path/To/SmallCMakeProjectWithTests  
 $ cmake build .  
 $ ctest  
