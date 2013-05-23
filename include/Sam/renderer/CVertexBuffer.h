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
#ifndef __CVERTEX_BUFFER__
#define __CVERTEX_BUFFER__

namespace sam
{
    /// @enum Vertex semantics.
    enum EVertexSemantic
    {
        e_VertexSemantic_Position,
        e_VertexSemantic_Blend_Weights,
        e_VertexSemantic_Blend_Indices,
        e_VertexSemantic_Normal,
        e_VertexSemantic_Diffuse,
        e_VertexSemantic_Specular,
        e_VertexSemantic_Binormal,
        e_VertexSemantic_Tangent,
        e_VertexSemantic_Texture_Coord0,

        // More todo...
        e_VertexSemantic_Nb,
    };

    /// @enum Vertex usage.
    enum EVertexUsage
    {
        VU_Read_Only,
        VU_Dynamic,
        VU_Write_Only,
    };

    struct SVertexDeclaration //: public IAllocated
    {
        EVertexSemantic m_eSemantic;
        uint32 m_nOffset;
        uint32 m_nNbComponents;
        ETypeID m_eType;
    };
}

#include <renderer/CVertexBufferPlf.h>

#endif // __CVERTEX_BUFFER__
