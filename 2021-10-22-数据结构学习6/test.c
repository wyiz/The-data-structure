#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

             //双链表

// 双向链表也是链表的一种，它每个数据结点中都有两个结点，分别指向其直接前驱和直接后继。所以我们从双向链表的任意一个结点开始都可以很方便的访问其前驱元素和后继元素。
//双链表克服了单链表只能在一个方向上遍历的限制。 由于列表的每个结点都包含其先前结点的地址，因此可以通过使用存储在每个结点的前一部分内的先前地址来找到关于前一结点的所有细节。
//因此，双链表与单向链表相比有以下优势：插入删除不需要移动元素，可以原地插入删除，可以双向遍历


//双链表的特点是：结构复杂，操作简单



#include "List.h"

void TestList1()
{
    //方式1 节点初始化
   /* ListNode* phead = NULL;
    ListInit(&phead);
    */

    //方式2 节点初始化
    ListNode* phead = ListInit();

    ListPushBack(phead, 1);
    ListPushBack(phead, 2);
    ListPushBack(phead, 3);
    ListPushBack(phead, 4);

    ListPrint(phead);

}



int main()
{
    TestList1();


    return 0;
}
