// Created by estar on 2022/1/29.
#include <stdio.h>
int main() {
    int a = 0, b = 1;
    char str[10];
    scanf("%d", &a);
    scanf("%*[^\n]%*c");
    scanf("%s", str);
    printf("%d\n", a);
    printf("%s", str);
    return 0;
}
//#include<stdio.h>
//
//
//int read()
//{
//    int value=0;
//    printf("please:\n");
//    while(!scanf("%d",&value))
//    {
//        scanf("%*[^\n]");//表示读入所有不是换行的字符串，这些都不保存，然后返回
//        scanf("%*c");//表示读入一个字符，但是这个字符不保存到变量里
//        printf("again:\n");
//    }
//    scanf("%*[^\n]");
//    scanf("%*c");
//    return value;
//}
//
//
//int main()
//{
//    int value=0;
//    value=read();
//    printf("%d\n",value);
//    return 0;
//}


