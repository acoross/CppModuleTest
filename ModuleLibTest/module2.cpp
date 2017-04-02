#include "module2.h"
#include "module1.h"

namespace m1
{
	foo m2class::getfoo()
	{
		return m1::foo();
	}
}
