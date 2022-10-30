### Js

1. 在html里面，全局作用域是window对象

​	通过var定义的全局变量属于window对象

​	通过let定义的全局变量不属于window对象

2. 在相同的作用域中，js中只能通过var重新声明对象，let不能，并且let声明对象后也不能重新声明对象；但在不同的作用域或块里面可以通过let声明对象

3. var声明的变量会提升到顶端，let声明不会提升到顶端

4. const对象可以更改属性和添加属性，但是不能直接对const对象赋值

5. 同一作用域或块内，不可以用const重新声明

6. const对象不会提升到顶端

7. ```javascript
   var length = 7;                             // 数字
   var lastName = "Gates";                      // 字符串
   var cars = ["Porsche", "Volvo", "BMW"];         // 数组
   var x = {firstName:"Bill", lastName:"Gates"};    // 对象
   ```

8. js的数据类型

| 数据                | 类型      |
| ------------------- | --------- |
| “bill”              | string    |
| 1                   | number    |
| null、{}、[]        | object    |
| true                | boolean   |
| x                   | undefined |
| function myFunc(){} | function  |

9. JavaScript 对象无法进行对比

10. `search()` 方法不能接受第二个起始位置参数。

    `indexOf()` 方法不能采用强大的搜索值（正则表达式）