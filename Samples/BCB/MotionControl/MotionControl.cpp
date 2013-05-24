//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------


























USEFORM("..\..\..\RDK\GUI\BCB\UDrawEngineFrameUnit.cpp", UDrawEngineFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UDrawEngineFormUnit.cpp", UDrawEngineForm);
USEFORM("..\..\..\RDK\GUI\BCB\UEngineMonitorFrameUnit.cpp", UEngineMonitorFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UEngineMonitorFormUnit.cpp", UEngineMonitorForm);
USEFORM("..\..\..\RDK\GUI\BCB\UCRPerseptronFormUnit.cpp", UCRPerseptronForm);
USEFORM("..\..\..\RDK\GUI\BCB\UCreateProjectWizardFormUnit.cpp", UCreateProjectWizardForm);
USEFORM("..\..\..\RDK\GUI\BCB\UCRSampleFormUnit.cpp", UCRSampleForm);
USEFORM("..\..\..\RDK\GUI\BCB\UCRTeacherPerseptronDLFormUnit.cpp", UCRTeacherPerseptronDLForm);
USEFORM("..\..\..\RDK\GUI\BCB\UCRTeacherPerseptronBPFormUnit.cpp", UCRTeacherPerseptronBPForm);
USEFORM("..\..\..\RDK\GUI\BCB\UFavoriteComponentInfoFormUnit.cpp", UFavoriteComponentInfoForm);
USEFORM("..\..\..\RDK\GUI\BCB\UWatchFrameUnit.cpp", UWatchFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UWatchFormUnit.cpp", UWatchForm);
USEFORM("..\..\..\RDK\GUI\BCB\ULinkSelectionFormUnit.cpp", ULinkSelectionForm);
USEFORM("..\..\..\RDK\GUI\BCB\UFavoriteComponentInfoFrameUnit.cpp", UFavoriteComponentInfoFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UListInputFormUnit.cpp", UListInputForm);
USEFORM("..\..\..\RDK\GUI\BCB\UShowProgressBarUnit.cpp", UShowProgressBarForm);
USEFORM("..\..\..\RDK\GUI\BCB\USeriesControlUnit.cpp", USeriesControlForm);
USEFORM("..\..\..\RDK\GUI\BCB\TUVisualControllerFrameUnit.cpp", UVisualControllerFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\TUVisualControllerFormUnit.cpp", UVisualControllerForm);
USEFORM("..\..\..\GUI\BCB\TNManipulatorControlForm.cpp", NManipulatorControlForm);
USEFORM("..\..\..\RDK\GUI\BCB\UClassesListFormUnit.cpp", UClassesListForm);
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsListFormUnit.cpp", UComponentsListForm);
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsControlFrameUnit.cpp", UComponentsControlFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsListFrameUnit.cpp", UComponentsListFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsPerformanceFrameUnit.cpp", UComponentsPerformanceFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsPerformanceFormUnit.cpp", UComponentsPerformanceForm);
USEFORM("..\..\..\RDK\GUI\BCB\UComponentIOFrameUnit.cpp", UComponentIOFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UClassesListFrameUnit.cpp", UClassesListFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UComponentLinksFormUnit.cpp", UComponentLinksForm);
USEFORM("..\..\..\RDK\GUI\BCB\UComponentsControlFormUnit.cpp", UComponentsControlForm);
USEFORM("..\..\..\RDK\GUI\BCB\UComponentLinksFrameUnit.cpp", UComponentLinksFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UGEngineControlFormUnit.cpp", UGEngineControlForm);
USEFORM("..\..\..\RDK\GUI\BCB\UImagesFrameUnit.cpp", UImagesFrame); /* TFrame: File Type */
USEFORM("..\..\..\RDK\GUI\BCB\UImagesFormUnit.cpp", UImagesForm);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
    {
        Application->Initialize();
        Application->MainFormOnTaskBar = true;
        Application->CreateForm(__classid(TUGEngineControlForm), &UGEngineControlForm);
		Application->CreateForm(__classid(TNManipulatorControlForm), &NManipulatorControlForm);
		Application->CreateForm(__classid(TUClassesListForm), &UClassesListForm);
		Application->CreateForm(__classid(TUComponentsListForm), &UComponentsListForm);
		Application->CreateForm(__classid(TUComponentsPerformanceForm), &UComponentsPerformanceForm);
		Application->CreateForm(__classid(TUEngineMonitorForm), &UEngineMonitorForm);
		Application->CreateForm(__classid(TUComponentLinksForm), &UComponentLinksForm);
		Application->CreateForm(__classid(TUWatchForm), &UWatchForm);
		Application->CreateForm(__classid(TUSeriesControlForm), &USeriesControlForm);
		Application->CreateForm(__classid(TUListInputForm), &UListInputForm);
		Application->CreateForm(__classid(TUVisualControllerForm), &UVisualControllerForm);
		Application->CreateForm(__classid(TUShowProgressBarForm), &UShowProgressBarForm);
		Application->CreateForm(__classid(TUCRPerseptronForm), &UCRPerseptronForm);
		Application->CreateForm(__classid(TUDrawEngineForm), &UDrawEngineForm);
		Application->CreateForm(__classid(TUFavoriteComponentInfoForm), &UFavoriteComponentInfoForm);
		Application->CreateForm(__classid(TULinkSelectionForm), &ULinkSelectionForm);
		Application->CreateForm(__classid(TUCreateProjectWizardForm), &UCreateProjectWizardForm);
		Application->CreateForm(__classid(TUCRSampleForm), &UCRSampleForm);
		Application->CreateForm(__classid(TUComponentsControlForm), &UComponentsControlForm);
		Application->CreateForm(__classid(TUCRTeacherPerseptronBPForm), &UCRTeacherPerseptronBPForm);
		Application->CreateForm(__classid(TUCRTeacherPerseptronDLForm), &UCRTeacherPerseptronDLForm);
		Application->CreateForm(__classid(TUImagesFrame), &UImagesFrame);
		Application->CreateForm(__classid(TUImagesForm), &UImagesForm);
		Application->Run();
    }
	catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    catch (...)
    {
        try
        {
            throw Exception("");
        }
        catch (Exception &exception)
        {
            Application->ShowException(&exception);
        }
    }
    return 0;
}
//---------------------------------------------------------------------------

