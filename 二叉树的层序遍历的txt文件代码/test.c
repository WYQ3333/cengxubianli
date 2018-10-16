//二叉树：空树 根节点  左子树  右子树
//遍历：按照一定的规则来对结点进行操作，并且每个结点只能操作一次
//操作：打印数据， + ···
//二叉树遍历：前序遍历proder(BTNode *proot)、根左右
//
//中序遍历Inorder  左子树  根节点   右子树
//
//后序遍历：postorder  左子树   右子树    根节点
//创建二叉树：根据前序遍历规则---->每个结点的数据给过来（如果将书中的空指针域（没有左右孩子）标记出来）
//拷贝：拷贝根节点、拷贝左子树、拷贝右子树
//销毁：销毁左子树、销毁右子树、销毁根节点（后序）
//
//
//根据前序和中序将二叉树还原：
//1.从其前序中获取根
//2.在中序遍历中找到根的位置
//3.创建根节点
//4.递归创建左子树：左子树的区间
//5.递归创建右子树：右子树的区间
//
//
//已知中序与后序将将二叉树还原：
//1.通过后序从后往前遍历找到根节点
//2.从中序遍历中找到根节点
//3.创建根节点
//4.递归创建左子树：左子树的区间
//5.递归创建右子树：右子树的区间
//
//层序遍历：按照从上往下，每一层从左往右依次遍历
//根据队列的数据结构进行操作
//1.将根节点放入到队列中
//循环：循环结束条件（队列不为空（！EMptyQueue（&q）））
//从队列中取队头元素
//访问该元素
//如果该元素的左子树存在，入队列
//如果该元素的右子树存在，入队列
//将对头元素出队列
//void LeveBIntree(BTNode *pRoot)
//{
//	Queue q;
//	if (NULL == pRoot)
//	{
//		return;
//	}
//	QueueInit(&q);
//	QueuePush(pRoot);//将根节点放到队列中
//	while (!EmptyQueue(&q))
//	{
//		//访问队头元素
//		BTNNode* pCur = QueueFront(&q);
//		printf("%d ", pCur->data);
//		if (pCur->left != NULL)
//			QueuePush(pCur->left);
//		if (pCur->right != NULL)
//			QueuePush(pCUr->right);
//		QueuePop(&q)
//	}
//}
//
//镜像的非递归实现：
//void swap(BTNode **p1, BTNode **p2)
//{
//	assert(p1);
//	assert(p2);
//	BTNode *temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//void MirrorBIntree(BTNode *pRoot)
//{
//	Queue q;
//	if (NULL == pRoot)
//	{
//		return;
//	}
//	QueueInit(&q);
//	QueuePush(pRoot);//将根节点放到队列中
//	while (!EmptyQueue(&q))
//	{
//		//访问队头元素
//		BTNNode* pCur = QueueFront(&q);
//		swap(&pCUr->left, &pCur->right);
//		if (pCur->left != NULL)
//			QueuePush(&q, pCur->left);
//		if (pCur->right != NULL)
//			QueuePush(&q, pCUr->right);
//		QueuePop(&q)
//	}
//}
//
//判断是否为完全二叉树：(完全二叉树不可能出现只有右没有左的情况)
//分析：
//int IsCompleteBinTree(BTNode *pRoot)
//{
//	Queue q;
//	int flag = 0;
//	if (NULL == pRoot)
//		return 1;
//	QueueInit(&q);
//	QueuePush(pRoot);
//	while (!EmtyQueue(&q))
//	{
//		BTNode *pCur = QueueFront(&q);
//		//当左右子树中不全部存在时，flag变为1；
//		if (flag)
//		{
//			if (pCur->left || pCur->right)
//				return 0;//不是完全二叉树
//		}
//		else
//		{
//			if (pCur->left != NULL&&pCur->right != NULL)//左右子树都存在
//			{
//				QueuePush(&q, pCur->left);
//				QueuePush(&q, pCUr->right);
//			}
//			else if (pCUr->left)//左子树存在，右子树不存在
//				QueuePush(&q, pCur->left);
//			flag = 1;
//		}
//	else if (pCUr->right)//没有左子树，但存在右子树
//	{
//		return 0;//不是完全二叉树
//	}
//	else//没有左右子树
//		flag = 1;
//	}
//
//	QueuePop(&q);
//}
//return 1;
//}
//
//树的前序遍历的非递归实现：
//思路1：在栈中保存元素
//1.如果根节点存在，将根节点入栈
//2.打印根节点，将根节点出栈，判断pCur的当前节点的左右子树是否存在
//3.若存在, 先将右子树入栈
//持续执行上述三个步骤，直到栈为空（循环结束条件）
//void preorder(BTNode *pRoot)
//{
//	Stack s;
//	StackInit(&s);
//	if (pRoot == NULL)
//		return;
//	StackPush(&s, pRoot);
//	while (!StackEmpty(&s))
//	{
//		BTNode *pCur = Stacktop(&s);
//		printf("%d ", pCur->data);
//		StackPop(&s);
//		if (pCur->right)
//			StackPush(&s, pCur->right);
//		if (pCur->left)
//			StackPush(&s, pCur->left);
//	}
//}
//思路2：只保存了右子树
//void preorder(BTNode *pRoot)
//{
//	Stack s;
//	StackInit(&s);
//	if (pRoot == NULL)
//		return;
//	StackPush(&s, pRoot);
//	while (!StackEmpty(&s))
//	{
//		BTNode *pCur = StackTop(&s)
//			StackPop(&s);
//		while (pCur)
//		{
//			printf("%d ", pCur->data);
//			if (pCur->right)//有右子树才保存
//				StackPush(&s, pCur->right);
//			pCur = pCur->left;
//		}
//	}
//	树的中序遍历的非递归实现：
//		void Inorder(BTNode *pRoot)
//	{
//			Stack s;
//			StackInit(&s);
//			if (pRoot == NULL)
//				return;
//			BTNode *pCur = pRoot;
//			while (!StackEmpty(&s) || pCur != NULL)
//			{
//				while (pCur)
//				{
//					StackPush(&s, pCur);
//					pCur = pCur->left;
//				}
//				pCur = StackTop(&s);
//				printf("%d ", pCur->data);
//				StackPop(&s);
//				pCur = pCur->right;
//			}
//		}
//	树的后序遍历：
//		void postorder(BTNode *pRoot)
//	{
//			Stack s;
//			BTNode *pRev = NULL;//标记刚刚访问过的结点
//			StackInit(&s);
//			if (pRoot == NULL)
//				return;
//			BTNode *pCur = pRoot;
//			BTNode *pTop = NULL；
//			while (!StackEmpty(&s) || pCur != NULL)
//			{
//				while (pCur)
//				{
//					StackPush(&s, pCur);
//					pCur = pCur->left;
//				}
//				pTop = StackTop(&s);
//				if (NULL == pTop->right || pTop->right == pRev)//第二个条件表示刚刚访问过它的右子树
//				{
//					printf("%d ", pTop->data);
//					pRev = pTop;
//					StackPop(&s);
//				}
//				else
//				{
//					pCur = pTop->right;
//				}
//			}
//		}
//
//
