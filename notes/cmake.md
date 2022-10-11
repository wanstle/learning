### cmake
#### 1. 如何在已有条件下使用？

  - 进入源代码目录，执行

```cmake
mkdir build
cd build
# 编译
cmake ..
# 执行
cmake --build .
# 库的安装
cmake --install .
```

  - 在自己项目中添加

```cmake
find_package(Libevent REQUIRED core)
target_link_libraries(你的可执行目标 libevent::core)
//这里以Libevent库为例
```

#### 2. cmake的语法

> cmake中，固定参数为全大写，其余不区分大小写

  #####     1.设置最低要求版本，项目名和版本号

``` cmake
#3.10为最低要求版本
cmake_minimum_required(VERSION 3.10)
# 设置项目名和版本号,Tutorial为名，1.0为版本号
project(<Tutorial> VERSION 1.0)
```

  ##### 2.添加源文件

```cmake
# 生成的elf文件叫main，源文件有main.cpp和test.cpp
add_executable(main main.cpp test.cpp)
```

```cmake
# 将dir下所有源文件存在SRC_LIST中
aux_source_directory(dir SRC_LIST)
# 将指定源文件存在SRC_LIST中
set( SRC_LIST
	 ./main.c
	 ./testFunc1.c
	 ./testFunc.c)
# 调用变量
add_executable(main ${SRC_LIST})
```

  ##### 3.添加头文件

```cmake
# 添加头文件路径
include_directories (test_func test_func1)
```

  ##### 4.添加源文件子目录

```cmake
# 添加源文件子目录，src中另有CMakeLists.txt，不需要在当前CMakeLists.txt再使用add_executable()，差不多相当于两个lists动态联系起来
add_subdirectory (src)
```

  ##### 5.设置可执行文件位置

```cmake
# 设置elf位置在根目录下bin文件夹内
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
```



