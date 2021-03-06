#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//通过前面顺序表的学习，我们知道，顺序表其实就是一个数组，只不过这个数组是可以随要求进行变长的

//顺序表

//1.可动态增长的数组
//2.数据在数组中存储必须是连续的


//顺序表的缺点：

//1.中间或者头部插入和删除时，需要挪动数据，时间复杂度是O(N)
//2.空间不够时，增容会有一定的消耗和空间浪费（增容一般都是增2倍）


//顺序表的优点：

//1.可以随机访问
//2.缓存利用率比较高




       //链表

//概念：链表是一种物理存储结构上非连续的，在逻辑存储上时连续的。数据元素的逻辑顺序是通过链表中的指针链接次序实现的

#include "SList.h"

int main()
{
    SListNode* pList = NULL;//这里是定义了一个头指针，表明这是一个链表


    return 0;
}