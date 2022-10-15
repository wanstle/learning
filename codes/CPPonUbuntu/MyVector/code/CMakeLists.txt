# 设置CMake所需的最低版本
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# 声明了项目的名称(sample_001)和支持的编程语言(CXX代表C++)：
project(myvector VERSION 1.0 LANGUAGES CXX)

# 设置源文件
set( SRC_LIST
	 ./src/main.cpp
)
# 添加源文件
add_executable(myvector ${SRC_LIST})
# 添加头文件
include_directories (./include)
# 设置可执行文件位置
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
