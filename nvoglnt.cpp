/*nvoglnt.dll WrapperThis is a Wrapper for the nvoglnt.dll used at Windows NT.- Usage: Rename the Original nvoglnt.dll in the /Windows/System32 Folder to "orig_nvoglnt.dll"          and copy the nvoglnt.dll Wrapper in to the /Windows/System32 Folder.
*/

#include <Windows.h>

#define ORIGINAL_DLL "orig_nvoglnt.dll"

HANDLE hmodule;

HMODULE hOglICD = NULL;

DWORD Org_DrvValidateVersion;
DWORD Org_DrvSwapLayerBuffers; 
DWORD Org_DrvSwapBuffers; 
DWORD Org_DrvShareLists; 
DWORD Org_DrvSetPixelFormat; 
DWORD Org_DrvSetLayerPaletteEntries; 
DWORD Org_DrvSetContext; 
DWORD Org_DrvSetCallbackProcs;  
DWORD Org_DrvReleaseContext; 
DWORD Org_DrvRealizeLayerPalette;  
DWORD Org_DrvGetProcAddress;   
DWORD Org_DrvGetLayerPaletteEntries;  
DWORD Org_DrvDescribePixelFormat;  
DWORD Org_DrvDescribeLayerPlane;   
DWORD Org_DrvDeleteContext;  
DWORD Org_DrvCreateLayerContext;
DWORD Org_DrvCreateContext;   
DWORD Org_DrvCopyContext;   
DWORD Org_DllMain; 

void __declspec( naked ) MyDllMain( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DllMain" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DllMain
	}
}

void __declspec( naked ) DrvCopyContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvCopyContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvCopyContext
	}
}

void __declspec( naked ) DrvCreateContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvCreateContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvCreateContext
	}
}

VOID __declspec( naked ) DrvCreateLayerContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvCreateLayerContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvCreateLayerContext
	}
}

void __declspec( naked ) DrvDeleteContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvDeleteContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvDeleteContext
	}
}

void __declspec( naked ) DrvDescribeLayerPlane( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvDescribeLayerPlane" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvDescribeLayerPlane
	}
}

void __declspec( naked ) DrvDescribePixelFormat( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvDescribePixelFormat" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvDescribePixelFormat
	}
} 

void __declspec( naked ) DrvGetLayerPaletteEntries( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvGetLayerPaletteEntries" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvGetLayerPaletteEntries
	}
}

void __declspec( naked ) DrvGetProcAddress( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvGetProcAddress" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvGetProcAddress
	}
}  

void __declspec( naked ) DrvRealizeLayerPalette( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvRealizeLayerPalette" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvRealizeLayerPalette
	}
}

void __declspec( naked ) DrvReleaseContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvReleaseContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvReleaseContext
	}
}

void __declspec( naked ) DrvSetCallbackProcs( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSetCallbackProcs" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSetCallbackProcs
	}
} 

void __declspec( naked ) DrvSetContext( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSetContext" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSetContext
	}
}

void __declspec( naked ) DrvSetLayerPaletteEntries( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSetLayerPaletteEntries" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSetLayerPaletteEntries
	}
}

void __declspec( naked ) DrvSetPixelFormat( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSetPixelFormat" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSetPixelFormat
	}
} 

void __declspec( naked ) DrvShareLists( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvShareLists" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvShareLists
	}
}

void __declspec( naked ) DrvSwapBuffers( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSwapBuffers" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSwapBuffers
	}
}

void __declspec( naked ) DrvSwapLayerBuffers( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvSwapLayerBuffers" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvSwapLayerBuffers
	}
}

void __declspec( naked ) DrvValidateVersion( )
{
	__asm { pushfd }
	__asm { pushad }	

	//LogMe( "DrvValidateVersion" );

	__asm { popad }
	__asm { popfd } 

	__asm
	{
		jmp Org_DrvValidateVersion
	}
}

BOOL APIENTRY DllMain( HANDLE hModule, 
					   DWORD  ul_reason_for_call, 
					   LPVOID lpReserved )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		{
			hmodule = hModule;

			char sysdir[MAX_PATH];

			GetSystemDirectory (sysdir, sizeof(sysdir));
			strcat (sysdir, "\");
			strcat (sysdir, ORIGINAL_DLL );

			hOglICD = LoadLibrary( sysdir );

				Org_DrvValidateVersion        = ( DWORD ) GetProcAddress( hOglICD, "DrvValidateVersion");
				Org_DrvSwapLayerBuffers       = ( DWORD ) GetProcAddress( hOglICD, "DrvSwapLayerBuffers");
				Org_DrvSwapBuffers            = ( DWORD ) GetProcAddress( hOglICD, "DrvSwapBuffers" ); 
				Org_DrvShareLists             = ( DWORD ) GetProcAddress( hOglICD, "DrvShareLists" );
				Org_DrvSetPixelFormat         = ( DWORD ) GetProcAddress( hOglICD, "DrvSetPixelFormat" );
				Org_DrvSetLayerPaletteEntries = ( DWORD ) GetProcAddress( hOglICD, "DrvSetLayerPaletteEntries" ); 
				Org_DrvSetContext             = ( DWORD ) GetProcAddress( hOglICD, "DrvSetContext" );
				Org_DrvSetCallbackProcs       = ( DWORD ) GetProcAddress( hOglICD, "DrvSetCallbackProcs" );  
				Org_DrvReleaseContext         = ( DWORD ) GetProcAddress( hOglICD, "DrvReleaseContext" ); 
				Org_DrvRealizeLayerPalette    = ( DWORD ) GetProcAddress( hOglICD, "DrvRealizeLayerPalette" ); 
				Org_DrvGetProcAddress         = ( DWORD ) GetProcAddress( hOglICD, "DrvGetProcAddress" );   
				Org_DrvGetLayerPaletteEntries = ( DWORD ) GetProcAddress( hOglICD, "DrvGetLayerPaletteEntries" );  
				Org_DrvDescribePixelFormat    = ( DWORD ) GetProcAddress( hOglICD, "DrvDescribePixelFormat" );  
				Org_DrvDescribeLayerPlane     = ( DWORD ) GetProcAddress( hOglICD, "DrvDescribeLayerPlane" );  
				Org_DrvDeleteContext          = ( DWORD ) GetProcAddress( hOglICD, "DrvDeleteContex" );  
				Org_DrvCreateLayerContext     = ( DWORD ) GetProcAddress( hOglICD, "DrvCreateLayerContext" );
				Org_DrvCreateContext          = ( DWORD ) GetProcAddress( hOglICD, "DrvCreateContext" );   
				Org_DrvCopyContext            = ( DWORD ) GetProcAddress( hOglICD, "DrvCopyContext " );  
				Org_DllMain                   = ( DWORD ) GetProcAddress( hOglICD, "DllMain" ); 
		}
	}

	return TRUE;
}