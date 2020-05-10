//---------------------------------------------------------------------------

#ifndef UIH
#define UIH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzPanel.hpp"
#include <ExtCtrls.hpp>
#include "RzButton.hpp"
#include "RzStatus.hpp"
#include <Menus.hpp>
#include "RzShellDialogs.hpp"
#include "RzTabs.hpp"
#include "RzSpnEdt.hpp"
#include <Buttons.hpp>
#include "RzRadChk.hpp"
#include "RzDBRGrp.hpp"
#include "RzRadGrp.hpp"
#include <ComCtrls.hpp>
#include <ImgList.hpp>
//---------------------------------------------------------------------------


class TMainForm : public TForm
{
__published:    // IDE-managed Components
    TRzStatusBar *TRzStatusBar_SB;
    TRzStatusPane *RzStatusPaneLeft;
    TRzStatusPane *RzStatusPaneRight;
    TRzStatusPane *TRzStatusPane;
    TPopupMenu *pmOpenOpenBinFile;
    TMenuItem *mniSelectAll;
    TMenuItem *mniCopyAll;
    TMenuItem *mniClear;
    TMenuItem *mniCopyToLeft;
    TMenuItem *mniCutAll;
    TRzOpenDialog *RzOpenDialog;
    TMenuItem *mniAbout;
    TMenuItem *mniCopy;
    TMenuItem *mniCut;
    TMenuItem *mniPaste;
    TMenuItem *mniDelete;
    TMenuItem *mniClearRight;
    TRzSaveDialog *RzSaveDialog;
    TMenuItem *mniSaveToFile;
    TMenuItem *mniSaveToBinFile;
    TMemo *mmoLeft;
    TMemo *mmoRight;
    TRzPanel *RzPanelF1;
    TRzButton *btnRemoveNonHex;
    TRzButton *btnAddSpace;
    TRzButton *btnGetLen;
    TRzButton *btnAdd0x;
    TRzButton *btnRemove0x;
    TRzButton *btnXOR;
    TRzButton *btnSUM;
    TRzButton *btnHexToBin;
    TRzButton *btnHexToDec;
    TRzButton *btnCopy;
    TRzButton *btnCapsLock;
    TRzButton *btnASCIIToHex;
    TRzButton *btnHexToASCII;
    TRzButton *btnHexToBackSlantString;
    TRzButton *btnUrlCoding;
    TRzButton *btnUrlDecoding;
    TRzButton *btnBinFileConvert;
    TRzButton *btnBytesInLine;
    TEdit *edtLineBytes;
    TRzButton *btnRemove0xAlign;
    TRzButton *btnToLeft;
    TRzButton *btnClear;
    TRzButton *btnSpaceToDot;
    TRzPageControl *RzPageControl;
    TRzTabSheet *F1;
    TRzTabSheet *F2;
    TRzPanel *RzPanelF2;
    TRzButton *btnCopyToNotepad;
    TTimer *tmrHandle;
    TRzButton *btnHashCalc;
    TRzButton *btnCrc16;
    TRzButton *btnCrc32;
    TRzButton *btnSha1;
    TRzButton *btnSha256;
    TMenuItem *mniSendToNotepad;
    TRzButton *btnBashe64Encode;
    TRzButton *btnBashe64Decode;
    TRzRadioButton *rbLengthAll;
    TRzRadioButton *rbLength8B;
    TRzRadioButton *rbLength4B;
    TRzButton *btnBigLittleConvert;
    TRzDBRadioGroup *rzdbrdgrpLength;
    TRzRadioButton *rbLength2B;
    TRzDBRadioGroup *rzdbrdgrpData;
    TRzRadioButton *rbDataString;
    TRzRadioButton *rbDataHex;
    TRzButton *btnCalculator;
    TRzDBRadioGroup *rzdbrdgrpUI;
    TRzRadioButton *rbUIS;
    TRzRadioButton *rbUIE;
    TRzRadioButton *rbUIC;
    TRzButton *btnCryptographyLab;
    TImageList *ImageListICO;
    TRzTabSheet *F3;
    TRzPanel *RzPannelF3;
    TRzCheckBox *rzchckbx1;



    void __fastcall FormResize(TObject *Sender);

    void __fastcall btnAddSpaceClick(TObject *Sender);

    void __fastcall btnCopyClick(TObject *Sender);
    void __fastcall btnClearClick(TObject *Sender);

    void __fastcall btnCapsLockClick(TObject *Sender);
    void __fastcall btnRemoveNonHexClick(TObject *Sender);
    void __fastcall btnGetLenClick(TObject *Sender);
    void __fastcall btnAdd0xClick(TObject *Sender);
    void __fastcall btnHexToBackSlantStringClick(TObject *Sender);
    void __fastcall btnRemove0xAlignClick(TObject *Sender);
    void __fastcall btnSUMClick(TObject *Sender);
    void __fastcall btnXORClick(TObject *Sender);
    void __fastcall btnBytesInLineClick(TObject *Sender);
    void __fastcall btnRemove0xClick(TObject *Sender);
    void __fastcall edtLineBytesChange(TObject *Sender);
    void __fastcall btnHexToBinClick(TObject *Sender);
    void __fastcall btnHexToDecClick(TObject *Sender);
    void __fastcall btnASCIIToHexClick(TObject *Sender);
    void __fastcall btnHexToASCIIClick(TObject *Sender);
    void __fastcall btnUrlCodingClick(TObject *Sender);
    void __fastcall btnUrlDecodingClick(TObject *Sender);
    void __fastcall btnToLeftClick(TObject *Sender);
    void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
                                TShiftState Shift);
    void __fastcall mmoRightKeyDown(TObject *Sender, WORD &Key,
                                    TShiftState Shift);
    void __fastcall mniSelectAllClick(TObject *Sender);
    void __fastcall mniCopyAllClick(TObject *Sender);
    void __fastcall mniCopyToLeftClick(TObject *Sender);
    void __fastcall mniCutAllClick(TObject *Sender);
    void __fastcall mniClearClick(TObject *Sender);
    void __fastcall btnBinFileConvertClick(TObject *Sender);
    void __fastcall mniAboutClick(TObject *Sender);
    void __fastcall mniCopyClick(TObject *Sender);
    void __fastcall pmOpenOpenBinFilePopup(TObject *Sender);
    void __fastcall mniCutClick(TObject *Sender);
    void __fastcall mniPasteClick(TObject *Sender);
    void __fastcall mniDeleteClick(TObject *Sender);
    void __fastcall mniClearRightClick(TObject *Sender);
    void __fastcall btnSpaceToDotClick(TObject *Sender);
    void __fastcall mniSaveToFileClick(TObject *Sender);
    void __fastcall mniSaveToBinFileClick(TObject *Sender);
    void __fastcall AcceptFiles (TMessage &Msg);
    void __fastcall btnCopyToNotepadClick(TObject *Sender);
    void __fastcall tmrHandleTimer(TObject *Sender);
    void __fastcall btnHashCalcClick(TObject *Sender);
    void __fastcall mniSendToNotepadClick(TObject *Sender);
    void __fastcall btnCrc32Click(TObject *Sender);
    void __fastcall btnCrc16Click(TObject *Sender);
    void __fastcall btnSha256Click(TObject *Sender);
    void __fastcall btnSha1Click(TObject *Sender);
    int __fastcall CheckTrialVaild(void);
    void __fastcall btnBashe64EncodeClick(TObject *Sender);
    void __fastcall btnBashe64DecodeClick(TObject *Sender);
    void __fastcall RzPageControlPageChange(TObject *Sender);
    void __fastcall rzdbrdgrpDataMouseEnter(TObject *Sender);
    void __fastcall rzdbrdgrpDataMouseLeave(TObject *Sender);
    void __fastcall rzdbrdgrpLengthMouseEnter(TObject *Sender);
    void __fastcall rzdbrdgrpLengthMouseLeave(TObject *Sender);
    void __fastcall rbDataHexClick(TObject *Sender);
    void __fastcall rbDataStringClick(TObject *Sender);
    void __fastcall rbLength2BClick(TObject *Sender);
    void __fastcall rbLengthAllClick(TObject *Sender);
    void __fastcall rbLength4BClick(TObject *Sender);
    void __fastcall rbLength8BClick(TObject *Sender);
    void __fastcall btnBigLittleConvertClick(TObject *Sender);

    //          int __fastcall GetAppConfig();
    //          int __fastcall SaveAppConfig();

    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall btnBigLittleConvertMouseEnter(TObject *Sender);
    void __fastcall btnBigLittleConvertMouseLeave(TObject *Sender);

    void __fastcall btnCrc32MouseEnter(TObject *Sender);
    void __fastcall btnCrc32MouseLeave(TObject *Sender);
    void __fastcall btnCrc16MouseEnter(TObject *Sender);
    void __fastcall btnCrc16MouseLeave(TObject *Sender);

    void __fastcall btnSha256MouseEnter(TObject *Sender);
    void __fastcall btnSha256MouseLeave(TObject *Sender);
    void __fastcall btnSha1MouseEnter(TObject *Sender);
    void __fastcall btnSha1MouseLeave(TObject *Sender);
    void __fastcall rbUIEClick(TObject *Sender);
    void __fastcall rbUISClick(TObject *Sender);
    void __fastcall rbUICClick(TObject *Sender);
    void __fastcall btnCalculatorClick(TObject *Sender);
    void __fastcall btnCryptographyLabClick(TObject *Sender);
    void __fastcall mmoLeftChange(TObject *Sender);
    void __fastcall mmoRightChange(TObject *Sender);
    void __fastcall mmoLeftKeyDown(TObject *Sender, WORD &Key,
                                   TShiftState Shift);

    int __fastcall ansi_pharse(unsigned char *buffer, int len);

private:    // User declarations
    void __fastcall AltPlusKeyDown (TMessage &Msg);

public:     // User declarations
    __fastcall TMainForm(TComponent *Owner);

    BEGIN_MESSAGE_MAP
        MESSAGE_HANDLER(WM_DROPFILES, TMessage, AcceptFiles)
        //MESSAGE_HANDLER(WM_SYSKEYDOWN, TMessage, AltPlusKeyDown)
        //MESSAGE_HANDLER(WM_KEYUP, TMessage, AltPlusKeyDown)
        //MESSAGE_HANDLER(WM_SYSCHAR, TMessage, AltPlusKeyDown)
    END_MESSAGE_MAP(TForm)

    __fastcall TMainForm::~TMainForm();
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
