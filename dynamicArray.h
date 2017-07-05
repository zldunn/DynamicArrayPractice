class DArray{

public:

  DArray();
  DArray(int size);

  void insert(int val);
  ~DArray();
  void print();

private:

  static const int baseSize = 10;
  int *MainArray;
  int size;
  int maxSize;

  void extend();


};
