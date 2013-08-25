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
#ifndef __CJOB_MANAGER__
#define __CJOB_MANAGER__

namespace sam
{
	class SAM_COMMON_API CJobManager : public IAllocated
	{
	public:
		CJobManager();
		~CJobManager();

		/// @brief Create and start n threads.
		/// 
		/// @param p_nMaxJobArrays Maximum of submittable job arrays.
		/// @param p_nThreads Number of thread to create.
		/// @param p_aAffinities Affinity per thread.
		void Initialize(uint32 p_nMaxJobArrays, uint32 p_nThreads, uint32 *p_aAffinities);

		/// @brief Shutdown the created threads.
		void Shutdown();

		/// @brief Submit job list to the worker threads.
		/// 
		/// @param p_pJobArray Job array to submit.
		void Submit(CJobArray *p_pJobArray);

		/// @brief Remove ended job array in the worker thread.
		/// 
		/// @param p_pJobArray Job array to remove. 
		void Remove(CJobArray *p_pJobArray);

		/// @brief Wait for job array completion.
		void WaitJobListsCompletion();

	private:
		uint32 m_pNbThreads; ///< Number of created threads.
		tpl::Vector<CJobArray*> m_aSubmitedJobArrays;
	};
}

#endif // __CJOB_MANAGER__

