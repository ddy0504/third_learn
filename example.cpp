#include <iostream>
#include <jni.h>
#include "Example.h"

//g++ -shared -fPIC -o libexample.so example.cpp -I/usr/lib/jvm/java-11-openjdk-amd64/include -I/usr/lib/jvm/java-11-openjdk-amd64/include/linux
 
extern "C" {
    void hello() {
        std::cout << "Hello from C++!" << std::endl;
    }
}


//实现JNI方法
extern "C" JNIEXPORT void JNICALL Java_Example_sayHello(JNIEnv *, jobject) {
    hello(); // 调用之前创建的 C++ 函数
}