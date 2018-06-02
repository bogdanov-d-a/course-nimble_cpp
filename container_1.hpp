#include "util.hpp"

#include <vector>
#include <deque>
#include <list>
#include <boost\container\small_vector.hpp>

//////////////////////////// TASK 1 ////////////////////////////

using naive_container = std::vector<int>;
using optimized_container = boost::container::small_vector<int, 512>;


//////////////////////////// DETAIL ////////////////////////////
BENCH(iteration, naive_container_iteration, naive_container{})->Range(8, 8<<10);
BENCH(iteration, optim_container_iteration, optimized_container{})->Range(8, 8<<10);

BENCH(insertion, naive_container_insertion, naive_container{})->Range(8, 8<<10);
BENCH(insertion, optim_container_insertion, optimized_container{})->Range(8, 8<<10);
