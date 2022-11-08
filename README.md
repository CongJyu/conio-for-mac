# conio-for-mac

💜 conio for macOS ｜ myconio_mac 頭文件

## Introduction 基本情況

由於 macOS 無法使用 `conio.h` 頭文件，所以有一位法國大佬開發咗 `myconio` 頭文件畀 macOS 用戶使用。本人根據初始版本嘅頭文件稍稍做咗一啲修改同整理。

> 注意：部分註釋係法語，暫未翻譯。

## Examples 使用示例

係 C++ 中咁寫：

```c++
#include "myconio_mac.h"
```

或者， 係 Objective-C++ 中咁寫：

```objective-c++
#import "myconio_mac.h"
```

## Usages 使用方法

將 `myconio_mac.cpp` 添加至專案（項目）嘅 `src` 目錄或者文件夾中，將 `myconio_mac.h` 添加至專案（項目）嘅 `include` 目錄或者文件夾中。

## Issues 目前存在嘅問題

```cpp
int KeyPressed(void) {
    struct timeval tv = {0, 0};
    fd_set readfds;

    FD_ZERO(&readfds);
    FD_SET(STDIN_FILENO, &readfds);

    return select(STDIN_FILENO + 1, &readfds, NULL, &tv) == 1;
}
```

呢度 `return` 語句中 `&tv` 有一啲錯誤，暫時未修復。

## Support 支持一下

<a href="https://www.buymeacoffee.com/rainchen" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" alt="Buy Me A Coffee" style="height: 60px !important;width: 217px !important;" ></a>
