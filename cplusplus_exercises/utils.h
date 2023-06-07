#pragma once
namespace jakeperry {
	class utils
	{
	public:
		template<typename T>
		inline static int find(const T arr[], T val) {
			size_t len = sizeof(arr) / sizeof(char);
			for (int i = 0; i < len; ++i) {
				if (arr[i] == val) {
					return i;
				}
			}
			return -1;
		}
	};
}
