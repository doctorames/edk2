/** @file
  pewp
**/

//#include "PiPei.h"
//#include "Platform.h"
#include <Library/DebugLib.h>
//#include <Library/HobLib.h>
#include <Library/PeiServicesLib.h>
#include <Library/PcdLib.h>

// go
EFI_STATUS
EFIAPI
EntryPoint (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )
{

  DEBUG ((DEBUG_INFO, "meme start\n"));

  UINT32 var = PcdGet32(PcdPatchTest);

  DEBUG ((DEBUG_INFO, "PcdPatchTest: %x\n", var));

  return EFI_SUCCESS;
}
