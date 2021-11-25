#include <iostream>
#include <string>
#include <vector>

class Bucket {
 private:
  int left_ball;
  int right_ball;

 public:
  Bucket::Bucket(int left_ball, int right_ball) {
    this->left_ball = left_ball;
    this->right_ball = right_ball;
  }
  int Bucket::get_left_ball() { return this->left_ball; }
  int Bucket::get_right_ball() { return this->right_ball; }
  void Bucket::set_left_ball(int left_ball) { this->left_ball = left_ball; }
  void Bucket::set_right_ball(int right_ball) { this->right_ball = right_ball; }
};

class BucketList {
 private:
  std::vector<Bucket> bucket_list;
  int bucket_size;

 public:
  BucketList::BucketList(const int& bucket_size) {
    this->bucket_size = bucket_size;
    this->bucket_list.resize(bucket_size);
    for (int i = 0; i < bucket_size; i++) {
      this->bucket_list[i] = Bucket(bucket_size - i, bucket_size - i);
    }
  }
  void BucketList::print_bucket_list() {
    for (int i = 0; i < this->bucket_list.size(); i++) {
      std::cout << "Bucket " << i << ": "
                << this->bucket_list[i].get_left_ball() << " "
                << this->bucket_list[i].get_right_ball() << std::endl;
    }
  }
  int BucketList::get_left_ball(int bucket_index) {
    return this->bucket_list[bucket_index].get_left_ball();
  }
  int BucketList::get_right_ball(int bucket_index) {
    return this->bucket_list[bucket_index].get_right_ball();
  }
  void BucketList::set_left_ball(int bucket_index, int left_ball) {
    this->bucket_list[bucket_index].set_left_ball(left_ball);
  }
  void BucketList::set_right_ball(int bucket_index, int right_ball) {
    this->bucket_list[bucket_index].set_right_ball(right_ball);
  }
  void swap(int bucket_index1, int bucket_index2);
  bool is_valid();
  int bfs_solve();
  int dfs_solve();
  int a_star_solve();
};

int BucketList::bfs_solve() {
  // implement
}

int BucketList::dfs_solve() {
  // implement
}

int BucketList::a_star_solve() {
  // implement
}

bool is_integer(std::string str) {
  for (size_t i = 0; i < str.size(); i++)
    if (isdigit(str[i]) == false) return false;
  return true;
}