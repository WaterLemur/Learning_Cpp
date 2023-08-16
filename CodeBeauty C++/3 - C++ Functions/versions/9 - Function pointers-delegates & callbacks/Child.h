//---------------------------------------------------------------------------

#ifndef ChildH
#define ChildH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TChildForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *ChildInputField;
	TButton *SendMessageToParent;
	TLabel *MessageLabel;
	void __fastcall SendMessageToParentClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TChildForm(TComponent* Owner, AnsiString message, void (__closure *funcPtr)(AnsiString));
};
//---------------------------------------------------------------------------
extern PACKAGE TChildForm *ChildForm;
//---------------------------------------------------------------------------
#endif
