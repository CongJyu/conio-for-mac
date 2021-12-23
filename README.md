# conio-for-mac

💜 conio for macOS ｜ myconio_mac 头文件

## 基本概况：

- 这些头文件位于 `conio-for-mac` 文件夹内。
- 由于 macOS 无法使用 `conio.h` 头文件，所以有一位法国大神开发了 myconio 头文件供 macOS 用户使用，笔者根据原版头文件做了一些整理。大神的相关信息包含于头文件的注释中。

> 注意：部分附带的注释为法语，尚未翻译。

## 使用示例：

在 C++ 中这样：

```c++
#include "myconio_mac.h"
```

或者，
在 Objective-C++ 中这样：

```objective-c++
#import "myconio_mac.h"
```

## 食用方法：

把 `myconio_mac.cpp` 添加至项目中 `src` 文件夹中，把 `myconio_mac.h` 添加至项目 `include` 文件夹中。

## 目前存在的问题

```cpp
int KeyPressed(void) {
    struct timeval tv = {0, 0};
    fd_set readfds;

    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);

    return select(STDIN_FILENO + 1, &readfds, NULL, &tv) == 1;
}
```

这里 `return` 语句中 `&tv` 有一些错误，暂时未修复。
