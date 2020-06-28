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

### 4. C++11特性,函数/变量/结构 初始化的时候 等号可选

此外,大括号内如果为空,则全部成员被置为0.

不允许缩窄转换.

### 5. 指针的危险－－最难以追踪的bug

指针，我们来看看各种形态分别表示的是什么：

第一种形态：

`int * p；`

p 现在是一个指针，也就是可以指向一个地址，但是是谁的地址，这个谁的值是多少均无从可知．

紧接着来这么一句：

`*p = 23333;` 

BUG来了,这句话是赋值语句，相当与是int a = 1; 但是这个＂谁＂已经明确了是23333，但是它该存在哪里呢，也就是p还没有初始话，地址是未知的
，所以，这里编译器就会随机给一个地址，把23333给存下来，但是问题是，build和run都不会报错，结果却不对，隐藏的bug极其凶残．

### 6. 数组与指针

- 在很多情况下，可以使用数组方括号表示法，也可以使用解除引用运算符（*）。他们都表示地址，区别是指针的值可以修改。
- 另一个区别是使用sizeof的时候，指针的结果是指向数据的数据类型字节，而数组名是整个数组数组的大小
- 数组名代表的是第一个数组元素所在地址，而引用数组名则代表着整个数组的内存块地址。

### 7. 指针小结

part1. 声明指针

要声明特定类型的指针，请使用下面的格式：

```asm
typeName * pointerName;

eg:

double * pn;
char * pc;
```

part2. 给指针赋值

应将**内存地址**赋给指针，可以对变量名应用&运算符来获取地址，new运算符返回未命名的内存地址。

```asm
eg:

double * pn;
double * pa;
char * pc;
double bubble = 3.2;
pn = &bubble;
pc = new char;
pa = new double[30];
```

part3. 对指针解除引用

对指针解除引用意味着获取指针指向的值。

```asm
eg:

cout << *pn <<endl;
//输出3.2 
```

part4. 区分指针和指针指向的值

如果pt是指向int的指针，则*pt指向一个int型的变量。

part5. 数组名

在多数情况下，C++将数组名视为数组的第一个元素的地址。

part6. 指针算术

C++允许将指针和整数相加。加1的结果等于原来的地址值加上指向对象占用的总字节数。也可以将两个指向同一数组的指针相减。

```
eg:

int tacos[10] = {5,2,8,4,1,2,2,4,6,8};
int * pt = tacos;
pt = pt + 1;
int * pe = &tacos[9];
pe = pe - 1;
int diff = pe - pt;
```

part7. 数组的动态联编和静态联编

使用数组声明来创建数组时，将采用静态联编，即数组的长度在编译时设置：

`int tacos[10];`

使用new[]运算符创建数组时，将采用动态联编(动态数组)，即将在运行时为数组分配空间，其长度也将在运行时设置
，使用完这种数组后，应该使用delete[]释放其占用的内存：

```asm
int size;
cin >> size;
int * pz = new int [size];
...
delete [] pz;
```
part8. 数组表示法和指针表示法

使用方括号数组表示法等同与对指针解除引用：

```asm
int * pt = new int [10];
*pt = 5;
pt[0] = 6;
pt[9] = 44;
int coats[10];
*(coats + 4) = 12; //将12赋值给coats[4]
```

### 8. C-风格

strcpy()和strncpy()

在数组的赋值中，应该使用上述函数来完成，而不应该使用赋值运算符。

```asm
eg:

char food[20] = "carrots";
strcpy(food, "flan");
strcpy(food, "a picnic basket filled with many doodies");
strncpy(food, "a picnic basket filled with many doodies",19);
food[19] = '\0';
```

C++中更加简单，无需担心数组越界。可以使用赋值运算符。