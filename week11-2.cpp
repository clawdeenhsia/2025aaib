///week11-2.cpp
///ㄧΑ,ㄧΑ﹚竡,ㄧΑ㊣
#include <stdio.h>

int addnum(int a,int b) ///2把计
{ ///玡琌 ㄧ计ㄧΑ  ﹚竡
    printf("瞷秈addnum()ㄧΑ柑, a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("ㄢ计, 眔计 %d 盢 return 肚\n",x);
    return x; ///肚倒璶ノよ
}

int main()
{
    int ans = addnum(10,30); ///иㄏノ/㊣ 璹ㄧ计
    printf("%d",ans);
}
