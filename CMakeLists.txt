cmake_minimum_required(VERSION 4.3)
project(ed1_algorithms_list02_cpp)

set(CMAKE_CXX_STANDARD 20)

# dd_executable(ed1_algorithms_list02_cpp main.cpp
#        src/Exer01_PrefixSum.cpp
#        src/Exer02_MaxProfit.cpp
#        src/Exer03_RotateRight.cpp
#        src/Exer04_ProductExceptSelf.cpp)

# Cada arquivo .cpp com sua própria função main ganha seu próprio executável independente:
add_executable(Exer01_PrefixSum src/Exer01_PrefixSum.cpp)
add_executable(Exer02_MaxProfit src/Exer02_MaxProfit.cpp)
add_executable(Exer03_RotateRight src/Exer03_RotateRight.cpp)
add_executable(Exer04_ProductExceptSelf src/Exer04_ProductExceptSelf.cpp)

# Se ainda mantiver um main.cpp na raiz, declare-o aqui (ou pode apagá-lo se não for usar):
add_executable(main_app main.cpp)