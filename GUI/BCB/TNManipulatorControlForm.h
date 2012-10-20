//---------------------------------------------------------------------------

#ifndef TNManipulatorControlFormH
#define TNManipulatorControlFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include "TUVisualControllerFormUnit.h"
#include <string>

#include "nmsdk_cpp_initdll.h"
#include "nmsdk.bcb.h"

//---------------------------------------------------------------------------
class TNManipulatorControlForm : public TUVisualControllerForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TStatusBar *StatusBar1;
	TImageList *ImageList;
	TMainMenu *MainMenu;
	TMenuItem *Communication1;
	TMenuItem *Connect1;
	TMenuItem *Disconnect1;
	TMenuItem *Move1;
	TMenuItem *MoveLeft1;
	TMenuItem *MoveRight1;
	TMenuItem *SelectManipulator1;
	TMenuItem *N1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TGroupBox *GroupBox1;
	TComboBox *ComPortComboBox;
	TLabel *Label1;
	TRadioButton *DeviceModeRadioButton;
	TRadioButton *EmulatorModeRadioButton;
	TLabel *Label2;
	TComboBox *ControlModeComboBox;
	TGroupBox *GroupBox2;
	TPanel *ComponentSelectionPanel;
	TGroupBox *GroupBox3;
	TButton *ConnectButton;
	TButton *DisconnectButton;
	TButton *ResetButton;
	TMenuItem *Reset1;
	TButton *StartButton;
	TButton *StopButton;
	TMenuItem *Start1;
	TMenuItem *Stop1;
	TGroupBox *GroupBox4;
	TLabel *�����;
	TLabel *��������;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button2;
	TTrackBar *TrackBarTime;
	TTrackBar *TrackBarPWM;
	TComboBox *ComboBoxDir;
	TComboBox *CBoxServoMove;
	TMenuItem *SelectControlSystem1;
	TGroupBox *GroupBox6;
	TPanel *ControlSystemSelectionPanel;
	TGroupBox *GroupBox5;
	TLabel *Label5;
	TLabel *Label6;
	TTrackBar *IIAfferentTrackBar;
	TEdit *IIAfferentEdit;
	TTrackBar *IINumAfferentTrackBar;
	TEdit *IINumAfferentEdit;
	TCheckBox *IaCheckBox;
	TCheckBox *IbCheckBox;
	TCheckBox *IICheckBox;
	TCheckBox *ControlVoltageCheckBox;
	TPanel *Panel1;
	TGroupBox *GroupBox7;
	TLabel *Label8;
	TLabel *Label10;
	TTrackBar *PACActivatorTimeTrackBar;
	TEdit *PACActivatorTimeEdit;
	TEdit *PACDeactivatorTimeEdit;
	TTrackBar *PACDeactivatorTimeTrackBar;
	TGroupBox *GroupBox8;
	TLabel *Label12;
	TEdit *VaEdit;
	TEdit *VdEdit;
	TLabel *Label11;
	TButton *SendVButton;
	TTrackBar *VoltageMulTrackBar;
	TTrackBar *TimeDurationTrackBar;
	TLabel *Label7;
	TLabel *Label9;
	TEdit *VoltageMulEdit;
	TEdit *TimeDurationEdit;
	TCheckBox *MulToNumberOfControlElementsCheckBox;
	TLabel *Label13;
	TTrackBar *PACMultiplicatorTrackBar;
	TEdit *PACMultiplicatorEdit;
	TGroupBox *GroupBox9;
	TImage *Image;
	void __fastcall Disconnect1Click(TObject *Sender);
	void __fastcall MoveLeft1Click(TObject *Sender);
	void __fastcall MoveRight1Click(TObject *Sender);
	void __fastcall SelectManipulator1Click(TObject *Sender);
	void __fastcall Connect1Click(TObject *Sender);
	void __fastcall DeviceModeRadioButtonClick(TObject *Sender);
	void __fastcall EmulatorModeRadioButtonClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall ComponentSelectionPanelDblClick(TObject *Sender);
	void __fastcall ConnectButtonClick(TObject *Sender);
	void __fastcall DisconnectButtonClick(TObject *Sender);
	void __fastcall Reset1Click(TObject *Sender);
	void __fastcall ResetButtonClick(TObject *Sender);
	void __fastcall StartButtonClick(TObject *Sender);
	void __fastcall StopButtonClick(TObject *Sender);
	void __fastcall Start1Click(TObject *Sender);
	void __fastcall Stop1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SelectControlSystem1Click(TObject *Sender);
	void __fastcall ControlSystemSelectionPanelDblClick(TObject *Sender);
	void __fastcall IaCheckBoxClick(TObject *Sender);
	void __fastcall IIAfferentTrackBarChange(TObject *Sender);
	void __fastcall IINumAfferentTrackBarChange(TObject *Sender);
	void __fastcall IbCheckBoxClick(TObject *Sender);
	void __fastcall IICheckBoxClick(TObject *Sender);
	void __fastcall ControlVoltageCheckBoxClick(TObject *Sender);
	void __fastcall VoltageMulTrackBarChange(TObject *Sender);
	void __fastcall TimeDurationTrackBarChange(TObject *Sender);
	void __fastcall PACDeactivatorTimeTrackBarChange(TObject *Sender);
	void __fastcall PACActivatorTimeTrackBarChange(TObject *Sender);
	void __fastcall SendVButtonClick(TObject *Sender);
	void __fastcall PACMultiplicatorTrackBarChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TNManipulatorControlForm(TComponent* Owner);

std::string ManipulatorName;

std::string ControlSystemName;

RDK::UEPtr<NMSDK::NWPhysicalManipulator> Manipulator;
RDK::UEPtr<NMSDK::UANet> UniversalManipulator;

RDK::UEPtr<NMSDK::NManipulatorSource> Engine;
RDK::UEPtr<NMSDK::NConstGenerator> Source;
RDK::UEPtr<NMSDK::NEngineMotionControl> ControlSystem;

RDK::UEPtr<NMSDK::NPulseGenerator> IIPosAfferent,IINegAfferent;
RDK::UEPtr<NMSDK::NPulseGenerator> MN1PosControl,MN1NegControl;

// ������������ �����������
RDK::UBitmap BmpCanvas;
RDK::UGraphics BmpGraphics;

// ���������� �����������
int CanvasWidth,CanvasHeight;

// ���������� ���� �����
double X,Y;

// ���� �������� �����
double Angle;

// ����� ����� (����)
double Length;

// ��� ���������� � �������� ��������� ������
std::string ReadComponentName;


// ��������� ��������� ���������� � xml
virtual void ASaveParameters(RDK::Serialize::USerStorageXML &xml);

// ��������� ��������� ���������� �� xml
virtual void ALoadParameters(RDK::Serialize::USerStorageXML &xml);


void AUpdateInterface(void);

// ��������� ������ ���� ���������� �� ���� � ���������� � ��������������� ������� �������� ����������
void LoadInterfaceInfoFromNet(void);

bool ManipulatorCSConnect(const std::string &cs_name, const std::string &man_name);

// ��������� ������ �� ����������
void ReadComponentData(void);

};
//---------------------------------------------------------------------------
extern PACKAGE TNManipulatorControlForm *NManipulatorControlForm;
//---------------------------------------------------------------------------
#endif
