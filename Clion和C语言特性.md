### printf( ) 遇到\0停止输出

printf遇到\0结束，前提是\0要在双引号之内

%c如果是\0则会正常读取

\0是字符串的最后一个字符

```c
printf("a b c\n");
printf("a \0 b c");

// output
a b c
a 

```

```c
printf("a %c b", '\0');

// output
有的IDE把\0当做空格，Clion是这样，VS2022不是这样
a  b
```

```c
printf("character%s long", len > 1 ? "s" : "");

// 取代
printf("character%c long", len > 1 ? 's' : '\0');
/* 只是''会报错 */
/* 缺点: CLion 会把\0当做空格，VS2022上\0是空字符，什么都不输出 */

```

### switch-case在break后缩进

![img](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/_O0G301I%7DSY%5D%60A~TK6%5BMII1.png)

正常输入冒号即可自动退格



### CLion到120个字符自动换行，除非之间有\n

![img](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/J%60%5D0F14HL5_H22$M82T%5B0FM.png)

为什么在第五行自动换行呢？

不含输入，到dat已经达到了120个字符

![img](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/O7P7X%7B1XT%60%7B1LQ%5B11T%5BKNEO.png)

![img](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/0D%5DF4PTSZGJ%7DFFA%7DY71RQ%60K.png)



==**ctrl + shift + a**==

![img](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/1ZL3~X$Q56X0OYVL0HGK$YF.png)



**取消选中**，不过重启Clion后又自动勾上了，需要修改文件bin\idea.properties

![image-20220208223120524](https://gitee.com/starriverflow/cloud-pictures/raw/master/img/image-20220208223120524.png)



**main首行加上setbuf(stdout, NULL);**





### 10w个0所消耗时间多十倍