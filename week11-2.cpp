///week11-2.cpp
///�禡�ŧi,�禡�w�q,�禡�I�s
#include <stdio.h>

int addnum(int a,int b) ///�ŧi2�ӰѼƪ��Ϊ��W�r
{ ///�e���O ��ƨ禡 �� �w�q
    printf("�{�b�i�Jaddnum()�禡��, a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("��Ƭۥ[��, �o��ƭ� %d �N return �^��\n",x);
    return x; ///�^�ǵ����n�Ϊ��a��
}

int main()
{
    int ans = addnum(10,30); ///�ڭ̨ϥ�/�I�s��� �ۭq���
    printf("%d",ans);
}
