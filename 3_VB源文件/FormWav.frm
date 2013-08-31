VERSION 5.00
Object = "{6BF52A50-394A-11D3-B153-00C04F79FAA6}#1.0#0"; "wmp.dll"
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "ComDlg32.OCX"
Begin VB.Form FormWav 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "波形声音处理"
   ClientHeight    =   8805
   ClientLeft      =   45
   ClientTop       =   450
   ClientWidth     =   8580
   Icon            =   "FormWav.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   8805
   ScaleWidth      =   8580
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  '窗口缺省
   Begin VB.Frame Frame2 
      Caption         =   "处理声音文件"
      Height          =   3375
      Left            =   360
      TabIndex        =   5
      Top             =   5160
      Width           =   7695
      Begin VB.CommandButton Command7 
         Caption         =   "录音"
         Height          =   1455
         Left            =   6120
         TabIndex        =   20
         Top             =   360
         Width           =   1455
      End
      Begin VB.Frame Frame5 
         Caption         =   "保存变换结果"
         Height          =   1095
         Left            =   360
         TabIndex        =   14
         Top             =   2160
         Width           =   6855
         Begin VB.CommandButton Command6 
            Caption         =   "保存"
            Height          =   495
            Left            =   5400
            TabIndex        =   17
            Top             =   240
            Width           =   1215
         End
         Begin VB.CommandButton Command5 
            Caption         =   "浏览"
            Height          =   495
            Left            =   4080
            TabIndex        =   16
            Top             =   240
            Width           =   1215
         End
         Begin VB.TextBox Text3 
            Height          =   375
            Left            =   240
            TabIndex        =   15
            Text            =   "c:\*.wav"
            Top             =   360
            Width           =   3735
         End
      End
      Begin VB.Frame Frame4 
         Caption         =   "声音变换"
         Height          =   1575
         Left            =   2760
         TabIndex        =   9
         Top             =   240
         Width           =   2895
         Begin VB.TextBox Text4 
            Height          =   375
            Left            =   1440
            TabIndex        =   18
            Text            =   "30000"
            Top             =   960
            Width           =   735
         End
         Begin VB.TextBox Text2 
            Height          =   375
            Left            =   1440
            TabIndex        =   11
            Text            =   "1"
            Top             =   360
            Width           =   495
         End
         Begin VB.Label Label4 
            Caption         =   "信噪比"
            Height          =   255
            Left            =   2160
            TabIndex        =   19
            Top             =   1080
            Width           =   855
         End
         Begin VB.Label Label3 
            Caption         =   "加入白噪声"
            Height          =   255
            Left            =   360
            TabIndex        =   13
            Top             =   1080
            Width           =   975
         End
         Begin VB.Label Label2 
            Caption         =   "倍速"
            Height          =   255
            Left            =   1920
            TabIndex        =   12
            Top             =   480
            Width           =   615
         End
         Begin VB.Label Label1 
            Caption         =   "变速变频"
            Height          =   255
            Left            =   360
            TabIndex        =   10
            Top             =   480
            Width           =   735
         End
      End
      Begin VB.Frame Frame3 
         Caption         =   "图谱分析"
         Height          =   1575
         Left            =   360
         TabIndex        =   6
         Top             =   240
         Width           =   1935
         Begin VB.CommandButton Command4 
            Caption         =   "频域图谱"
            Height          =   375
            Left            =   360
            TabIndex        =   8
            Top             =   960
            Width           =   1215
         End
         Begin VB.CommandButton Command3 
            Caption         =   "时域图谱"
            Height          =   375
            Left            =   360
            TabIndex        =   7
            Top             =   360
            Width           =   1215
         End
      End
   End
   Begin MSComDlg.CommonDialog FileDlg 
      Left            =   0
      Top             =   0
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
      DialogTitle     =   "请选择文件位置"
      Filter          =   "波形声音(*.wav)|*.wav"
   End
   Begin VB.Frame Frame1 
      Caption         =   "选择wav声音文件"
      Height          =   3495
      Left            =   360
      TabIndex        =   0
      Top             =   360
      Width           =   7695
      Begin VB.CommandButton Command2 
         Caption         =   "播放选择文件"
         Height          =   495
         Left            =   5880
         TabIndex        =   4
         Top             =   600
         Width           =   1215
      End
      Begin VB.CommandButton Command1 
         Caption         =   "浏览"
         Height          =   495
         Left            =   4440
         TabIndex        =   2
         Top             =   600
         Width           =   1215
      End
      Begin VB.TextBox Text1 
         Height          =   375
         Left            =   480
         TabIndex        =   1
         Text            =   "c:\*.wav"
         Top             =   720
         Width           =   3855
      End
      Begin WMPLibCtl.WindowsMediaPlayer WindowsMediaPlayer1 
         Height          =   735
         Left            =   480
         TabIndex        =   3
         Top             =   1320
         Width           =   6615
         URL             =   ""
         rate            =   1
         balance         =   0
         currentPosition =   0
         defaultFrame    =   ""
         playCount       =   1
         autoStart       =   -1  'True
         currentMarker   =   0
         invokeURLs      =   -1  'True
         baseURL         =   ""
         volume          =   50
         mute            =   0   'False
         uiMode          =   "full"
         stretchToFit    =   0   'False
         windowlessVideo =   0   'False
         enabled         =   -1  'True
         enableContextMenu=   -1  'True
         fullScreen      =   0   'False
         SAMIStyle       =   ""
         SAMILang        =   ""
         SAMIFilename    =   ""
         captioningID    =   ""
         enableErrorDialogs=   0   'False
         _cx             =   11668
         _cy             =   1296
      End
   End
End
Attribute VB_Name = "FormWav"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private ObjWav As mywav.mywav
Private Sub Command1_Click()

    On Error GoTo handle_error
    
    Call FileDlg.ShowOpen
    
    Text1.Text = FileDlg.FileName
    
    Exit Sub
    
handle_error:

    MsgBox (Err.Description)
    
End Sub

Private Sub Command2_Click()
    
    On Error GoTo handle_error

    WindowsMediaPlayer1.URL = Text1.Text
    
    Exit Sub
    
handle_error:
    
    MsgBox (Err.Description)
    
End Sub

Private Sub Command3_Click()

    On Error GoTo handle_error
    
    x = Text1.Text
    
    Call ObjWav.tzone(1, y, x)
    
    Exit Sub
    
handle_error:

    MsgBox (Err.Description)
    
End Sub

Private Sub Command4_Click()

    On Error GoTo handle_error
    
    x = Text1.Text
    
    Call ObjWav.fzone(1, y, x)
    
    Exit Sub
    
handle_error:
    
    MsgBox (Err.Description)
    
End Sub

Private Sub Command5_Click()

    On Error GoTo handle_error
    
    Call FileDlg.ShowSave
    
    Text3.Text = FileDlg.FileName
    
    Exit Sub
    
handle_error:

    MsgBox (Err.Description)
    
End Sub

Private Sub Command6_Click()
    
    On Error GoTo handle_error
    
    opn = Text1.Text
    
    sav = Text3.Text
    
    spd = Text2.Text
    
    awg = Text4.Text
    
    X1 = Val(spd)
    
    X2 = Val(awg)
    
    Call ObjWav.myprowav(1, y, opn, sav, X1, X2)
    
    Exit Sub
    
handle_error:

    MsgBox (Err.Description)
    
End Sub

Private Sub Command7_Click()

    On Error GoTo handle_error

    Shell ("sndrec32.exe")
    
    Exit Sub
    
handle_error:
    
    MsgBox (Err.Description)

End Sub

Private Sub Form_Load()

    Set ObjWav = New mywav.mywav
    
End Sub

