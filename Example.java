//javac Example.java
//javac -h . Example.java  s
//生成Example.h

public class Example {
    // 声明本地方法
    public native void sayHello();
 
    // 加载库
    static {
        System.loadLibrary("example"); // 注意这里的库名不包括前缀"lib"和后缀".so"
    }
 
    public static void main(String[] args) {
        new Example().sayHello();
    }
}