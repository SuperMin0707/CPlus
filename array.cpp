#include <iostream>
using namespace std;
int main()
{
    //1. 初始化数组时候，可以只给部分元素数据赋值
    //2. 给全部元素赋值时，可以不指定数组长度，系统会根据初值个数自动确定数组长度
    //3. static数组不赋值时，系统会自动默认为0
    //4. 二维数组可以不指定第一维的长度，第二维必须指定

    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {1, 2};
    //int arr[4] = {0};//所有元素为0
    static int arr3[4];
    int arr4[4];
    int arr5[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //char类型的数组，在字符数组中最后一位为’\0’）时，可以看成时字符串。在C++中定义了string类，在Visual C++中定义了Cstring类。
    //字符串中每一个字符占用一个字节，再加上最后一个空字符。
    //字符串长度为8个字节,最后一位是'\0'。
    char array[10] = "yuanrui"; //yuanrui\0\0\0
    //也可以不用定义字符串长度，如：
    //char arr[] = "yuanrui"; //yuanrui\0
    cout << "arr1:" << arr1[0] << arr1[1] << arr1[2] << arr1[3] << endl;
    cout << "arr2:" << arr2[0] << arr2[1] << arr2[2] << arr2[3] << endl;
    cout << "arr3:" << arr3[0] << arr3[1] << arr3[2] << arr3[3] << endl;
    cout << "arr4:" << arr4[0] << arr4[1] << arr4[2] << arr4[3] << endl;
    cout << "arr[10]" << array[6] << endl;

    //指向数组的指针
    double *p;
    double arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    p = arr; //p = &arr[0];
    //*(p + 3); //arr[4]

    for (auto x : arr)
    {
        cout << "arr" << x << endl;
        cout << *(p + 3) << endl;
    }
    //一维动态数组
    //int* arr1 = new int[2];//delete []arr1;
    int *arr11 = new int[3]{1, 2}; //delete []arr2
    cout << arr11[1] << endl;
    //二维动态数组

    //获取数组大小
    //动态创建(new)的基本数据类型数组无法取得数组大小
    int a[3];
    //第一种方法
    cout << sizeof(a) / sizeof(a[0]) << endl;
    //第二种方法
    cout << end(a) - begin(a) << endl;
    //二维数组
    int arr2d[5][3];
    int lines = sizeof(arr2d) / sizeof(arr2d[0][0]);
    int row = sizeof(arr2d) / sizeof(arr2d[0]); //行
    int col = lines / row;                      //列
    cout << row << "::" << col << endl;
    cout << sizeof(arr2d) << endl;
    cout << sizeof(arr2d[0][0]) << endl;
    cout << end(arr2d) - begin(arr2d) << endl; //5行

    //数组与函数
    //如果传递二维数组，形参必须制定第二维的长度。
    void function(int a[][3], int size)
        //形式参数是一个指针
        void
        function(int *param)
        //形式参数是一个已定义大小的数组
        void
        function(int param[10])
        //形式参数是一个未定义大小的数组
        void
        function(int param[])
}
