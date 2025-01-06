set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=UTF-8")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -fexec-charset=UTF-8")
cmake_minimum_required(VERSION 3.20)
project(C_Primer_Plus)

set(CMAKE_C_STANDARD 99)

## 通过指定的源文件列表构建出可执行目标文件  practise123 生成的可执行文件名  MyPrimerPlus/Chapter2/practise.c 编译对象
add_executable(practise123  MyPrimerPlus/Chapter2/practise.c)
