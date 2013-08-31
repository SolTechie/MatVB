VERSION 5.00
Begin VB.Form FormIndex 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "欢迎来到李雨桥的MatVB"
   ClientHeight    =   4185
   ClientLeft      =   150
   ClientTop       =   855
   ClientWidth     =   5475
   Icon            =   "FormIndex.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   4185
   ScaleWidth      =   5475
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  '窗口缺省
   Begin VB.CommandButton Command3 
      Caption         =   "波形声音处理"
      Height          =   495
      Left            =   3720
      TabIndex        =   2
      Top             =   3480
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "数据拟合"
      Height          =   495
      Left            =   2040
      TabIndex        =   1
      Top             =   3480
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "矩阵运算"
      Height          =   495
      Left            =   360
      TabIndex        =   0
      Top             =   3480
      Width           =   1335
   End
   Begin VB.Image Image1 
      Height          =   1635
      Left            =   1200
      Picture         =   "FormIndex.frx":030A
      Top             =   840
      Width           =   3000
   End
   Begin VB.Menu file 
      Caption         =   "文件"
      Begin VB.Menu writer 
         Caption         =   "作者"
      End
      Begin VB.Menu exit 
         Caption         =   "退出"
      End
   End
   Begin VB.Menu fun 
      Caption         =   "功能"
      Begin VB.Menu matrix 
         Caption         =   "矩阵运算"
      End
      Begin VB.Menu datafit 
         Caption         =   "数据拟合"
      End
      Begin VB.Menu wavpro 
         Caption         =   "波形声音处理"
      End
   End
   Begin VB.Menu help 
      Caption         =   "帮助"
      Begin VB.Menu about 
         Caption         =   "关于"
      End
   End
End
Attribute VB_Name = "FormIndex"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub about_Click()
Load frmAbout
Call frmAbout.Show
End Sub

Private Sub Command1_Click()
Load FormMatrix
Call FormMatrix.Show
End Sub

Private Sub Command2_Click()
Load FormDatafit
Call FormDatafit.Show
End Sub

Private Sub Command3_Click()
Load FormWav
Call FormWav.Show
End Sub

Private Sub datafit_Click()
Load FormDatafit
Call FormDatafit.Show
End Sub

Private Sub exit_Click()
End
End Sub

Private Sub matrix_Click()
Load FormMatrix
Call FormMatrix.Show
End Sub

Private Sub wavpro_Click()
Load FormWav
Call FormWav.Show
End Sub

Private Sub writer_Click()
    MsgBox ("桥")
End Sub
