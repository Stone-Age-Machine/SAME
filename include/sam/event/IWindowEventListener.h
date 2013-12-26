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
#ifndef __IWINDOW_EVENT_LISTENER__
#define __IWINDOW_EVENT_LISTENER__

namespace ds
{
	/// @brief Interface for window event listener
	class IWindowEventListener
	{
	public:
		/// @brief Callback when the window is closed
		virtual void Close() = 0;

		/// @brief Callback when the window has lost focus
		virtual void LostFocus() = 0;

		/// @brief Callback when the window has gained focus
		virtual void GainedFocus() = 0;

		/// @brief Callback when the window has been resized.
		/// 
		/// @param _iWidth New width.
		/// @param _iHeight New Height.
		virtual void Resized(size_t _iWidth, size_t _iHeight) = 0;
	};
}

#endif // __IWINDOW_EVENT_LISTENER__