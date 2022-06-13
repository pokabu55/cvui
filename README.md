# cvui
* CVUIのお試しリポジトリ

# CVUIについて
## 公式
* 公式の [リンク](https://dovyski.github.io/cvui/)
* cvui 公式 の github [リポジトリ](https://github.com/Dovyski/cvui)
## 簡単な解説
* [英語の解説](https://learnopencv.com/cvui-gui-lib-built-on-top-of-opencv-drawing-primitives/)
* [日本語の解説](https://blog.negativemind.com/2017/06/22/cvui-gui-library-for-opencv/)
## 実装方法
* 公式リポジトリをクローンする
* cvui.h を このリポジトリの include ディレクトリにコピー
* main.cpp のヘッダ部分に以下を入れる
    ```c++
    #define CVUI_IMPLEMENTATION
    #include "cvui.h"

    #define WINDOW_NAME "CVUI Hello World!"
    ```
# サンプルのビルド方法
* ターミナルで `make` と叩く
* `./bin/cvui` と叩くとサンプルGUIが表示される
* ボタンを押すとカウントアップする
* やめる時は、ESCキーを押す