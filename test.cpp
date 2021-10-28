#include <glog/logging.h>
#include <x86intrin.h>
#include <cmath>
#include <iostream>

int main() {
  std::vector<int> tests = {0x418c0000, 0x41940000};

  for (auto test: tests) {
    float fp = *reinterpret_cast<float*>(&test);

    LOG(INFO) << fp;
    LOG(INFO) << std::round(fp);

    __m128 simd_fp = _mm_set1_ps(fp);
    __m128 simd_rd = _mm_round_ps(simd_fp,
                                _MM_FROUND_NEARBYINT | _MM_FROUND_NO_EXC);

    float simd_tmp;
    _MM_EXTRACT_FLOAT(simd_tmp, simd_rd, 0);
    LOG(INFO) << simd_tmp;
  }
}
