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
#ifndef __SAM_AUDIO_PCH__
#define __SAM_AUDIO_PCH__

#include "SamCommon.h"

#ifdef SAM_PLATFORM_WIN
#   include <XAudio2.h>
#else
#   Unsupported platform.
#endif

// sam sound engine macro export
#ifdef SAM_SOUND_EXPORTS
#   define SAM_SOUND_API LIBRARY_EXPORT
#else
#   define SAM_SOUND_API LIBRARY_IMPORT
#endif

namespace sam
{
	class CAudioBus;
	class CAudioDevice;
	class CSound;
	class SSoundDef;
}

#endif // __SAM_AUDIO_PCH__
