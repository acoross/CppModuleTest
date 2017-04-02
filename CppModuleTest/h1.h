#pragma once

import module1;

class myclass
{
public:
	m1::foo* makefoo()
	{
		return new m1::foo();
	}
};