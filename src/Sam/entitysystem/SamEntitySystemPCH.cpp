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
#include <entitysystem/SamEntitySystemPCH.h>

//===================================//
// DLL Create/Destroy implementation //
//===================================//
#include <common/SamModuleInit.h>

namespace sam
{
	// Create entity system.
	CEntitySystem *CreateEntitySystem(Env *p_pEnv)
	{
		SAM_ASSERT(p_pEnv->m_pEntitySystem == NULL, "Entity System was already created.");

		ModuleInit(p_pEnv);

		// TODO: creer le module.

		return NULL;
	}

	// Destroy entity system.
	void DestroyEntitySystem()
	{
		SAM_ASSERT(g_Env->m_pEntitySystem != NULL, "Entity System was already freed");

		// TODO: supprimer le module.
	}
}
