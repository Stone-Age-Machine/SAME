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
#ifndef __SAMBOX_IRESOURCE_FACTORY__
#define __SAMBOX_IRESOURCE_FACTORY__

namespace sam
{
	namespace box
	{
		/// @brief Interface for resource factory.
		///        Factory is used to import specific resource.
		///        Type resource are detected by extension.
		class IResourceFactory : public IAllocated
		{
		public:
			/// @brief Initialize it !
			/// 
			/// @return True if no error occurred.
			virtual bool Initialize() = 0;

			/// @brief Shutdown it !
			virtual void Shutdown() = 0;

			/// @brief Import the resource.
			/// 
			/// @param p_sSourcePath Path of the source file.
			/// 
			/// @return Created resource or NULL.
			virtual IResource *Import(const QString &p_sSourcePath) = 0;

			/// @brief Import the resource.
			/// 
			/// @param p_sSourcePath Absolute path of the resource to import.
			/// 
			/// @return Created resource or NULL.
			virtual IResource *Create(const String &p_sPath) = 0;

			/// @brief Check if the resource is supported.
			/// 
			/// @param p_sExtension File extension.
			/// 
			/// @return True if it is supported.
			virtual bool IsSupported(const QString &p_sExtension) const = 0;

		private:
		};
	}
}

#endif // __SAMBOX_IRESOURCE_FACTORY__
