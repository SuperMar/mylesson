C++基本形态:数据类型(内置数据类型,自定义数据类型)+运算符+程序流控制语句
数据类型包括基本数据类型和自定义数据类型->基本数据类型包括算数类型和空类型->算数类型包括整型和浮点型->整型包括字符型,整型和bool类型
算术类型包括以下全部:
char(最小8bit)
unsigned char
signed char
wchar_t(最小16bit)
char16_t(最小16bit)
char32_t(最小32bit)
unsigned/signed:
short(最小16bit)
int(最小16bit)
long(最小32bit)
long long(最小64bit)
float(6位有效数字)
double(10位有效数字)
long double(10位有效数字)
bool(True/False)
void

C++复合数据类型:引用(引用必须被初始化,引用不是一个对象)和指针

计算机以比特序列存储数据，每个比特非0即1:
大多数计算机以2的整数次幂个比特作为块来存储数据,可寻址的最小内存块称为"字节(byte)",存储的基本单元称为"字(word)",它通常有几个字节组成,
C++中,一个字节要至少能容纳机器基本字符集中的字符
大多数计算机将内存中的每个字节与一个数字关联起来,例:
736424  0 0 1 1 1 0 1 1
736425  0 0 0 1 1 0 1 1
736426  0 1 1 1 0 0 0 1
736427  0 1 1 0 0 1 0 0
如果736424处的类型是float,并且该机器中float以32比特存储,那么这个对象的内容占满了整个字,这个float数的实际值依赖于该机器试如何存储浮点数的,
如果736424处的对象类型是unsigned char,并且该机器使用ISO-Latin-1字符集,则该位置处的字节表示一个分号
C++中以补码存储数据,-1的二进制原码为char(1000 0001),int(1000 0000 0000 0001),实际存储在计算机中的为char(1111 1110 + 1 = 1111 1111),
int(1111 1111 1111 1110 + 1 = 1111 1111 1111 1111),正数原码反码补码一致