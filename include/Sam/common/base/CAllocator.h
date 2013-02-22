//===========================================
// Copyright (C) 2013 Cedric Liaudet
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to
// do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//===========================================
#ifndef __CALLOCATOR__
#define __CALLOCATOR__

#include <common/SamConfig.h>

namespace sam
{
	/// @brief Helper class to allocate memory.
	class CAllocator
	{
	public:
		/// @brief Allocate memory
		/// 
		/// @param _iSize Memory size to allocate.
		/// @param _sFile Name of the file.
		/// @param _iLine Line number in the file.
		static void* Alloc(size_t _iSize, const char* _sFile = 0, int _iLine = 0)
		{
			void *pPtr = malloc(_iSize);
#ifdef SAM_PROFILING
            CMemoryTracker::GetInstance()->RegisterAlloc(pPtr, _iSize, _sFile, _iLine);
#endif
			return pPtr;
		}

		/// @brief Deallocate memory
		/// 
		/// @param _pPtr Pointer to free.
		static void Free(void* _pPtr)
		{
#ifdef SAM_PROFILING
			CMemoryTracker::GetInstance()->RegisterFree(_pPtr);
#endif
			free(_pPtr);
		}	
	};
}

#endif // __CALLOCATOR__
