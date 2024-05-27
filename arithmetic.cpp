module;
export module arithmetic;

// export int add(int a, int b) { return a + b; } 
export template <typename T>
T add(const T &a, const T &b) {
  return a + b;
}
