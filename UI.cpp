
void __fastcall TMainForm::btnRemoveNonHexClick(TObject *Sender)
{
    UnicodeString S;

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    mmoRight->Lines->Clear();

    if(gDataType == HEX_TYPE)
    {
        AnsiString R = strRemoveNoneHex(S);
        mmoRight->Lines->Add(R);
    }
    else
    {
        UnicodeString R = strRemoveSpaceAndEnter(S);

        mmoRight->Lines->Add("[M]Remove Space As String:\r\n");
        mmoRight->Lines->Add(R);
    }

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnAddSpaceClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        return;
    }

    AnsiString SS = strFormatToAddStr(S, " ");

    mmoRight->Lines->Clear();
    mmoRight->Lines->Add(SS);

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnClearClick(TObject *Sender)
{
    mmoLeft->Lines->Clear();
    mmoRight->Lines->Clear();

    RzStatusPaneLeft->Caption = "";
    RzStatusPaneRight->Caption = "";

    gResult = CONVERT_NO_ERROR;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnCopyClick(TObject *Sender)
{
    mmoRight->SelectAll();
    mmoRight->CopyToClipboard();

    RzStatusPaneRight->Caption = "[M]Copy Right Side String";
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnCapsLockClick(TObject *Sender)
{
    if(gGlobalStatus.outputCapsLock)
    {
        gGlobalStatus.outputCapsLock = false;
        RzStatusPaneRight->Caption = "[M]Output Convert To Lowercase";

        mmoLeft->Lines->Text = mmoLeft->Lines->Text.LowerCase();
        mmoRight->Lines->Text = mmoRight->Lines->Text.LowerCase();
    }
    else
    {
        gGlobalStatus.outputCapsLock = true;
        RzStatusPaneRight->Caption = "[M]Output Convert To Uppercase";

        mmoLeft->Lines->Text = mmoLeft->Lines->Text.UpperCase();
        mmoRight->Lines->Text = mmoRight->Lines->Text.UpperCase();
    }

    console_printf("[M]CapsLock=%d\r\n", gGlobalStatus.outputCapsLock);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnGetLenClick(TObject *Sender)
{
    if(gDataType == HEX_TYPE)
    {
        AnsiString S;
        AnsiString R;

        if(mmoLeft->SelText.Length())/*Selected*/
        {
            S = mmoLeft->SelText;
            RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
        }
        else
        {
            S = mmoLeft->Lines->Text;
        }

        if(!S.Length())
        {
            return;
        }

        AnsiString SH = strRemoveNoneHex(S);
        AnsiString SHL = "";

        mmoRight->Lines->Clear();

        if(gOutputOperationMsgFlag)
            mmoRight->Lines->Add("[M]Length:");

        R = SH.Length() / 2;
        R += "  (0x" + SHL.IntToHex(SH.Length() / 2, 1) + ")";
        mmoRight->Lines->Add(R);

        if(SH.Length() % 2)
        {
            float sHexLen = SH.Length() / 2.0;
            mmoRight->Lines->Add(AnsiString(sHexLen)+" Not Even!");
        }
    }
    else
    {
        unsigned int strLen = 0;
        unsigned int DataLen = 0;

        if(mmoLeft->SelText.Length())/*Selected*/
        {
            strLen = mmoLeft->SelText.Length();
        }
        else
        {
            strLen = mmoLeft->Lines->Text.Length();
        }

        if(!strLen)
        {
            return;
        }

        mmoLeftDataMalloc(&DataLen);
        mmoLeftDataFree();

        mmoRight->Lines->Clear();
        mmoRight->Lines->Add("[M]Memory Space Usage:");

        if(gOutputOperationMsgFlag)
        {
            if(gStringDataType == STRING_ANSI)
            {
                mmoRight->Lines->Add("[M]Input As String, ANSI:");
            }
            else if(gStringDataType == STRING_UTF8)
            {
                mmoRight->Lines->Add("[M]Input As String, UTF8:");
            }
            else  if(gStringDataType == STRING_UTF16)
            {
                mmoRight->Lines->Add("[M]Input As String, UTF16:");
            }
        }

        mmoRight->Lines->Add(AnsiString(DataLen));
        mmoRight->Lines->Add("\r\n");

        mmoRight->Lines->Add("[M]String Length:");
        mmoRight->Lines->Add(strLen);
    }

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnAdd0xClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        return;
    }

    AnsiString R = strFormatToAddStr(S, ",0x");

    mmoRight->Lines->Clear();
    mmoRight->Lines->Add(R);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnHexToBackSlantStringClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    AnsiString R = strFormatToAddStr(S, "\\x");


    mmoRight->Lines->Clear();
    mmoRight->Lines->Add(R);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnRemove0xClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    mmoRight->Lines->Clear();
    mmoRight->Lines->Add(strFormatToRemoveStr(S, "0x", false));

    if(gTryOutputMoreFlag)
    {
        mmoRight->Lines->Add("\r\n\r\n[M]Remove 0x And Align:");
        mmoRight->Lines->Add(strFormatToRemoveStr(S, "0x", true));
    }
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::btnRemove0xAlignClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    AnsiString  R = strFormatToRemoveStr(S, "0x", true);

    mmoRight->Lines->Clear();
    mmoRight->Lines->Add(R);
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::btnSUMClick(TObject *Sender)
{
    AnsiString S = "";

    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    AnsiString SH = strRemoveNoneHex(S);

    AnsiString R = strToByteConvert(SH, BYTES_ADD_UP, false);

    mmoRight->Lines->Clear();

    if(gOutputOperationMsgFlag)
        mmoRight->Lines->Add("[M]Add Up Result:");
    mmoRight->Lines->Add(R);

    if(gResult)/*Left String Not Even, Need Padding Zero On Left*/
    {
        RzStatusPaneRight->Caption = ERROR_TABLE[gLanguage][gResult];
        //RzStatusPaneRight->Font->Color = clRed;

        gResult = CONVERT_NO_ERROR;

        AnsiString RP = strToByteConvert(SH, BYTES_ADD_UP, true);

        //mmoRight->Font->Color=clRed;
        mmoRight->Lines->Add("\n");
        mmoRight->Lines->Add("[M]Left String Length Not Even!");
        mmoRight->Lines->Add("[M]Left Padding Zero Result:");
        mmoRight->Lines->Add(RP);
    }
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::btnXORClick(TObject *Sender)
{
    AnsiString S = "";


    if(mmoLeft->SelText.Length())/*Selected*/
    {
        S = mmoLeft->SelText;
        RzStatusPaneLeft->Caption = CONVERT_PROMPTION[gLanguage][CONVERT_SOME_SELECTED];
    }
    else
    {
        S = mmoLeft->Lines->Text;
    }

    if(!S.Length())
    {
        mniClearRightClick(Sender);
        return;
    }

    AnsiString SH = strRemoveNoneHex(S);

    AnsiString R = strToByteConvert(SH, BYTES_XOR, false);

    mmoRight->Lines->Clear();

    //if(gOutputOperationMsgFlag)

    mmoRight->Lines->Add("[M]XOR Result:");
    mmoRight->Lines->Add(R);


    unsigned char output[32]= {0};
    unsigned char *pU8 = NULL;
    unsigned int inputLen = 0;


    /*8B*/
    pU8 = (unsigned char *)mmoLeftDataMalloc(&inputLen);
    if(pU8 == NULL)
        return;

    memcpy(output,pU8,8);

    for(int i = 8; i < inputLen; i += 8)
    {
        for(int j = 0; j < 8; j++)
        {
            output[j] =  output[j] ^ pU8[ i + j ];
        }
    }

    mmoRight->Lines->Add("\r\n[M]8B Block XOR:");
    mmoRight->Lines->Add(HexBuferToString(output, 8));

    /*16B*/
    memcpy(output,pU8,16);

    for(int i = 16; i < inputLen; i += 16)
    {
        for(int j = 0; j < 16; j++)
        {
            output[j] =  output[j] ^ pU8[ i + j ];
        }
    }

    mmoRight->Lines->Add("\r\n[M]16B Block XOR:");
    mmoRight->Lines->Add(HexBuferToString(output, 16));

    free(pU8);

    if(gResult)/*Left String Not Even, Need Padding Zero On Left*/
    {
        RzStatusPaneRight->Caption = ERROR_TABLE[gLanguage][gResult];
        //RzStatusPaneRight->Font->Color = clRed;

        gResult = CONVERT_NO_ERROR;

        AnsiString RP = strToByteConvert(SH, BYTES_XOR, true);

        //mmoRight->Font->Color=clRed;
        mmoRight->Lines->Add("\n");
        mmoRight->Lines->Add("[M]Left String Length Not Even!");
        mmoRight->Lines->Add("[M]Left Padding Zero Result:");
        mmoRight->Lines->Add(RP);
    }

}