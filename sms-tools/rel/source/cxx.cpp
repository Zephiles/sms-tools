#include <sms/JKRHeap.h>
#include <sms/JKRExpHeap.h>

#include <cstddef>
#include <cstring>

void *operator new(std::size_t size)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	void *newPtr = sms::JKRExpHeap::alloc_JKRExpHeap(heapPtr, size, 0x20);
	return memset(newPtr, 0, size);
}
void *operator new[](std::size_t size)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	void *newPtr = sms::JKRExpHeap::alloc_JKRExpHeap(heapPtr, size, 0x20);
	return memset(newPtr, 0, size);
}
void operator delete(void *ptr)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	return sms::JKRExpHeap::free_JKRExpHeap(heapPtr, ptr);
}
void operator delete[](void *ptr)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	return sms::JKRExpHeap::free_JKRExpHeap(heapPtr, ptr);
}
void operator delete(void *ptr, std::size_t size)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	return sms::JKRExpHeap::free_JKRExpHeap(heapPtr, ptr);
}
void operator delete[](void *ptr, std::size_t size)
{
	void *heapPtr = sms::JKRHeap::sSystemHeap;
	return sms::JKRExpHeap::free_JKRExpHeap(heapPtr, ptr);
}