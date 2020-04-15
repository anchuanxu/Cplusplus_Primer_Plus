# 第三章复习题

### 1. 为什么C++有多种整型？

A：为了应对各种尺寸的整型数据。

### 2. 声明与下述描述相符的变量

- a.A short int a = 80;
- b.A unsigned int b = 42110;
- c.A long c = 300000000;

### 3. C++提供了什么措施来防止超出整型的范围？

long long unsign double

### 4. 33L与33的区别？

33L是long整型，33是int型.

### 5. 下面两条C++语句是否等价？

```$xslt
char grade = 65;
char grade = 'A';
```

A:相等.第一行直接将65的ASCII码给了char类型的grade，对应的就是字符‘A’，所以上下两行相等。

### 6. 如何使用C++来找出编码88表示的字符？指出两种方法。

第一种方法：

```$xslt
char a = 88;
cout << a << endl;
//直接输出ASCII值为88的字符.
```

第二种方法：

```$xslt
putchar(88);
```

### 7. 将long值复制给float变量会导致舍入误差，将long值赋值给double变量呢？将long long值赋值给double变量呢？


>这个问题的答案取决于这两个类型的长度。如果long为4个字节，则没有损失。因为最大的long值将是20亿，即有10位数。由于double提供了至少13位有效数字，因而不需要进行任何舍入。long long类型可提供19位有效数字，超过了double保证的13位有效数字。

### 8. 下列表达式的结果为？

 - 8 * 9 + 2 = 74
 - 6 * 3 / 4 = 4
 - 3 / 4 * 6 = 0
 - 6.0 * 3 / 4 = 4.5
 - 15 % 4 = 3
 
 ### 9. 假设x1和x2是两个double变量，您要将它们作为整数相加，再将结果赋值给一个整型变量，请编写一条完成这项任务的C++语句，如果要将它们作为double值相加并转换为int呢？
 
step1
 
 ```$xslt
double x1, x2;
int x;
x = int (x1) + int (x2);
```

step2

```$xslt
double x1, x2;
int x;
x = x1 + x2;
```
### 10. 下面每条语句声明的变量都是什么类型？

- a. auto cars = 15; //int
- b. auto iou = 150.37f; //float
- c. auto level = 'B'; // char
- d. auto crat = U'/U00002155'; //unicode char
- e. auto fract = 8.25f / 2.5; //double