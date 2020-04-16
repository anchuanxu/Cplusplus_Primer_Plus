# 第四章读书笔记

### 1. 数组初始化规则

```$xslt
int cards[4] = {3,6,8,10}; // okay
int hand[4]; // okay
hand[4] = {5,6,7,9}; // not allowed
hand = cards; // not allowed
int cards[4]  {3,6,8,10}; // okay with C++11
```

### 2. strlen()和sizeof()

在对字符数组进行求值的时候，strlen只计算可见的字符，而sizeof则把空字符也计算在内。

### 3. cin.getline()和cin.get()

1. 面向行的输入：cin.getline()

在读取指定数目的字符或者遇到换行符时停止读取。但是不保存换行符，用空字符来替换换行符。

2. 面向行的输入：cin.get()

在读取指定数目的字符或者遇到换行符时停止读取。保存换行符。

3. cin.get(array, ArSize)和cin.get()

- cin.get(array, ArSize) : 读取一个字符串；
- cin.get() ： 读取一个字符。

此处为函数的重载。git()更容易检查出错误，gitline()使用更加的简单。常见的问题场景，如何判断停止读取的原因是由于已经读取完成还是数组被填满，检查下一个输入字符是否是换行符。


