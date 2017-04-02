#pragma once

namespace m1
{
	class m2class
	{
	public:
		static int counter()
		{
			static int count = 0;
			return ++count;
		}

		class foo getfoo();
	};
}