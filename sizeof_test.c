#include <stdio.h>

int main()
{
	char ch[] = "helloworld";
	char *p = "helloworld";
	char a[]={'h','e','l','l','o','w','o','r','l','d'};
	char b[10]={"hellowrld"};
	char c[]={"hellowrld"};
	printf("ch:%s\np:%s\na:%s\nb:%s\nc:%s\n",ch,p,a,b,c);
	printf("sizeof\nch:%ld\np:%ld\na:%ld\nb:%ld\nc:%ld\n",sizeof(ch),sizeof(p),sizeof(a),sizeof(b),sizeof(c));	
	return 0;
}
