#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

	template <class linsea>
	int64_t find(const linsea& value, linsea array[], size_t size) {
		if (array == NULL) return -1;
		for (int i = 0; i < size; i++) {
			if (value == array[i]) return i;
		}
		return -1;
	}
}}}}
