//
//
///////////////////////////////////////
//
////ANOTHER IMP
//
//
//int const oo =1<<25;
//        
//int fail[100010];
//
//
//void genFail(string pattern)
//{
//	int len = pattern.length();
//    int i=1,j=0;
//    fail[0]=0;
//    while(i<len)
//    {
//        if(pattern[i]==pattern[j])
//        {
//            j++;
//            fail[i]=j;
//            i++;
//        }
//        else if(j>0)
//            j=fail[j-1];
//        else
//        {
//            fail[i]=0;
//            i++;
//        }
//    }
//}
//
//int kmp(string text, string pattern)
//{
//	int i=0,j=0,count=0,length=text.length();
//	while(i<length)
//	{
//		if(text[i]==pattern[j])
//		{
//			i++;
//			j++;
//			count=j;
//		}
//		else if(j>0)
//			j=fail[j-1];
//		else
//			i++;
//	}
//	return count;
//}