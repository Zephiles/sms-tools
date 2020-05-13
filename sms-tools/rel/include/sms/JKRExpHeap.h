#pragma once

#include <cstdint>

namespace sms::JKRExpHeap {

extern "C" {

void *alloc_JKRExpHeap(void *heap, uint32_t size, uint32_t padding);
void free_JKRExpHeap(void *heap, void *ptr);

}

}