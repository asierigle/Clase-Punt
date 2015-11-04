#include "p2Defs.h"

#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__	

#define BLOCK 32


template <class TYPE> 
class DynamicArray
{
public:
	//Constructors and destructors
	DynamicArray():memCapacity(BLOCK){
		data = new TYPE[BLOCK];
	}
	DynamicArray(const DynamicArray<TYPE>& DynA):numElements(DynA.numElements){
		
			memCapacity = DynA.memCapacity;
			data = new TYPE[BLOCK];
			memcpy(data, DynA.data, sizeof(DynA.data));
	}
	void PushBack(const TYPE& DynA){
		if (memCapacity > numElements + 1){
			data[numElements++] = DynA;
		}

	}
	~DynamicArray(){
		if (data != NULL)delete[] data;
	}

private:
	TYPE* data = NULL;
	uint numElements = 0;
	uint memCapacity = 0;
};

#endif // !__DYNAMICARRAY_H__
