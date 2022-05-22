// Copyright 2022 vlados2003

#include "Histogram.h"
void Histogram::AddItemScore(float score) {
  count++;
  sum += score;
  mean = score / static_cast<float>(count);
}
void Histogram::Clear() {
  /*sum = 0;
  count = 0;
  mean = 0;*/
  skipped = 0;
}
void Histogram::AddSkipped() { skipped++; }
