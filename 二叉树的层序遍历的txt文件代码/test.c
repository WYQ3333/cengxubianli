//������������ ���ڵ�  ������  ������
//����������һ���Ĺ������Խ����в���������ÿ�����ֻ�ܲ���һ��
//��������ӡ���ݣ� + ������
//������������ǰ�����proder(BTNode *proot)��������
//
//�������Inorder  ������  ���ڵ�   ������
//
//���������postorder  ������   ������    ���ڵ�
//����������������ǰ���������---->ÿ���������ݸ���������������еĿ�ָ����û�����Һ��ӣ���ǳ�����
//�������������ڵ㡢����������������������
//���٣����������������������������ٸ��ڵ㣨����
//
//
//����ǰ������򽫶�������ԭ��
//1.����ǰ���л�ȡ��
//2.������������ҵ�����λ��
//3.�������ڵ�
//4.�ݹ鴴����������������������
//5.�ݹ鴴����������������������
//
//
//��֪��������򽫽���������ԭ��
//1.ͨ������Ӻ���ǰ�����ҵ����ڵ�
//2.������������ҵ����ڵ�
//3.�������ڵ�
//4.�ݹ鴴����������������������
//5.�ݹ鴴����������������������
//
//������������մ������£�ÿһ������������α���
//���ݶ��е����ݽṹ���в���
//1.�����ڵ���뵽������
//ѭ����ѭ���������������в�Ϊ�գ���EMptyQueue��&q������
//�Ӷ�����ȡ��ͷԪ��
//���ʸ�Ԫ��
//�����Ԫ�ص����������ڣ������
//�����Ԫ�ص����������ڣ������
//����ͷԪ�س�����
//void LeveBIntree(BTNode *pRoot)
//{
//	Queue q;
//	if (NULL == pRoot)
//	{
//		return;
//	}
//	QueueInit(&q);
//	QueuePush(pRoot);//�����ڵ�ŵ�������
//	while (!EmptyQueue(&q))
//	{
//		//���ʶ�ͷԪ��
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
//����ķǵݹ�ʵ�֣�
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
//	QueuePush(pRoot);//�����ڵ�ŵ�������
//	while (!EmptyQueue(&q))
//	{
//		//���ʶ�ͷԪ��
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
//�ж��Ƿ�Ϊ��ȫ��������(��ȫ�����������ܳ���ֻ����û��������)
//������
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
//		//�����������в�ȫ������ʱ��flag��Ϊ1��
//		if (flag)
//		{
//			if (pCur->left || pCur->right)
//				return 0;//������ȫ������
//		}
//		else
//		{
//			if (pCur->left != NULL&&pCur->right != NULL)//��������������
//			{
//				QueuePush(&q, pCur->left);
//				QueuePush(&q, pCUr->right);
//			}
//			else if (pCUr->left)//���������ڣ�������������
//				QueuePush(&q, pCur->left);
//			flag = 1;
//		}
//	else if (pCUr->right)//û����������������������
//	{
//		return 0;//������ȫ������
//	}
//	else//û����������
//		flag = 1;
//	}
//
//	QueuePop(&q);
//}
//return 1;
//}
//
//����ǰ������ķǵݹ�ʵ�֣�
//˼·1����ջ�б���Ԫ��
//1.������ڵ���ڣ������ڵ���ջ
//2.��ӡ���ڵ㣬�����ڵ��ջ���ж�pCur�ĵ�ǰ�ڵ�����������Ƿ����
//3.������, �Ƚ���������ջ
//����ִ�������������裬ֱ��ջΪ�գ�ѭ������������
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
//˼·2��ֻ������������
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
//			if (pCur->right)//���������ű���
//				StackPush(&s, pCur->right);
//			pCur = pCur->left;
//		}
//	}
//	������������ķǵݹ�ʵ�֣�
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
//	���ĺ��������
//		void postorder(BTNode *pRoot)
//	{
//			Stack s;
//			BTNode *pRev = NULL;//��Ǹոշ��ʹ��Ľ��
//			StackInit(&s);
//			if (pRoot == NULL)
//				return;
//			BTNode *pCur = pRoot;
//			BTNode *pTop = NULL��
//			while (!StackEmpty(&s) || pCur != NULL)
//			{
//				while (pCur)
//				{
//					StackPush(&s, pCur);
//					pCur = pCur->left;
//				}
//				pTop = StackTop(&s);
//				if (NULL == pTop->right || pTop->right == pRev)//�ڶ���������ʾ�ոշ��ʹ�����������
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
