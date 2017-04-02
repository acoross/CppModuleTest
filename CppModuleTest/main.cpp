import std.core;

import module1;
import module2;

int main()
{
	std::cout << "Hello";
	m1::m2class m2c;

	m1::foo f = m2c.getfoo();
	f.val = 1;

	printf("%d\n", m1::func(f.val));

	return 0;
}