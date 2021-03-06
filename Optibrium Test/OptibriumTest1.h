//---------------------------------------------------------------------------

#ifndef OptibriumTest1H
#define OptibriumTest1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Rtti.hpp>
#include "DataTableDef.h"
#include <FMX.Memo.hpp>
//---------------------------------------------------------------------------
class TTestForm : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *DataGrid1;
	TStringGrid *DataGrid2;
	TLabel *Grid1Label;
	TLabel *Grid2Label;
	TStringGrid *OutputGrid;
	TButton *OutputGrid1Button;
	TButton *Output1Plus2Button;
	TButton *SetUnionButton;
	TButton *SetDifferencesButton;
	TButton *IntersectionButton;
	TLabel *OutputGrid1;
	void __fastcall OutputGrid1ButtonClick(TObject *Sender);
	void __fastcall Output1Plus2ButtonClick(TObject *Sender);
	void __fastcall SetUnionButtonClick(TObject *Sender);
	void __fastcall SetDifferencesButtonClick(TObject *Sender);
	void __fastcall IntersectionButtonClick(TObject *Sender);
private:	// User declarations
	void __fastcall PopulateSourceDataGrids();

	void __fastcall LoadTable( TStringGrid *Grid, TDataTable *Table);
	void __fastcall PopulateOutputGrid( TStringGrid *OutputGrid, TDataTable *OutputTable );
	int __fastcall IsHeaderInGrid( TStringGrid *Grid, std::string String );
public:		// User declarations
	__fastcall TTestForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTestForm *TestForm;
//---------------------------------------------------------------------------
#endif
