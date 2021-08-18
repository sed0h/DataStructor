// CircularQueue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "CircularQueue.h"

int main()
{
    circular_queue_t q;
    init(&q);
    //std::cout << std::dec << "q size=" << q._elements_count << "\n";
    printf("q size=%d\n", q._elements_count);

    for (size_t i = 0; i < 50; i++) {
        enqueue(&q, i);
    }
    //head=0, tail=48, count=48!!, !=QUEUE_SIZE
    
    printf("q elements cout:%d\n", q._elements_count);
    size_t count = get_size(&q);
    for (size_t i = 0; i < 51; i++) {
        //std::cout << std::dec << dequeue(&q);
        //std::cout << "size=" << std::dec << get_size(&q) << "\n";
        if (!is_empty(&q)) {
            printf("%d ", dequeue(&q));
        }
        printf("size=%d\n", get_size(&q));
    }
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
