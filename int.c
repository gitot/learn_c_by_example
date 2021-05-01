/*
 * =====================================================================================
 *
 *       Filename:  int.c
 *
 *    Description:  int data type in c programming language demo
 *
 *        Version:  1.0
 *        Created:  04/30/21 22:13:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  guyot (), guyotwang@gmail.com
 *        Company:  xtransfer.cn
 *
 * =====================================================================================
 */

void demo_int ()
{ printf("sizeof(short):%d\n",sizeof(short)); printf("sizeof(short):%d\n",sizeof(unsigned short));

        printf("sizeof(int):%d\n",sizeof(int));
        printf("sizeof(unsigned int):%d\n",sizeof(unsigned int));

        printf("sizeof(long):%d\n",sizeof(long));
        printf("sizeof(unsigned long):%d\n",sizeof(unsigned long));

        printf("sizeof(long long):%d\n",sizeof(long long));
        printf("sizeof(unsigned long long):%d\n",sizeof(unsigned long long));
	return ;
}
		
int main ( int argc, char *argv[] )
{
        demo_int();
	return 0;
}				
