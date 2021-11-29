#include <queue>

#include "bucket.h"

int main(int argc, char** argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << "the number of buckets" << std::endl;
    return 1;
  }
  if (!is_integer(argv[1])) {
    std::cerr << argv[1] << " is not an integer" << std::endl;
    std::cerr << "Usage: " << argv[0] << "the number of buckets" << std::endl;
    return 1;
  }
  int n = std::stoi(argv[1]);
  std::cout << "This is the answer of " << n << std::endl;
  auto bucket_list = BucketList(n);
  auto number_of_nodes = bucket_list.bfs_solve();
  std::cout << "The number of nodes is " << number_of_nodes << std::endl;
  return 0;
}
