cmake_minimum_required(VERSION 3.21)
project(Lion001)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(ConstPointer Cpp_Primer_Plus/const/ConstAndPointer.cpp)
add_executable(Reference Cpp_Primer_Plus/Function/Reference.cpp)
add_executable(RefAndFunction Cpp_Primer_Plus/Function/RefAndFunction.cpp)
add_executable(StdDeque Cpp_Primer_Plus/DataStructure/StdDeque.cpp)
add_executable(Lambda Cpp_Primer_Plus/Lambda/LambdaExpr.cpp)