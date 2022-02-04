## 初次使用cmake

* 新建一个文件 -- create Cmake.txt

​		就会出现一个CmakeLists.txt

* 如果有子文件夹，在总的cmake中添加

  ```c
  add_subdirectory(dir-name)
  ```

  不需要添加额外的语句

​		然后在子文件夹中创建一个新的cmake，直接写

```c
add_executable(a a.c)
```



​		