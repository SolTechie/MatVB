VERSION 5.00
Begin VB.Form FormDatafit 
   BorderStyle     =   3  'Fixed Dialog
   Caption         =   "数据拟合"
   ClientHeight    =   6600
   ClientLeft      =   45
   ClientTop       =   450
   ClientWidth     =   5430
   Icon            =   "FormDatafit.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   6600
   ScaleWidth      =   5430
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  '窗口缺省
   Begin VB.Frame Frame4 
      Caption         =   "拟合结果(从高次到零次排列的多项式系数)"
      Height          =   1215
      Left            =   240
      TabIndex        =   8
      Top             =   5160
      Width           =   4935
      Begin VB.TextBox Text4 
         Height          =   855
         Left            =   120
         MultiLine       =   -1  'True
         ScrollBars      =   1  'Horizontal
         TabIndex        =   9
         Top             =   240
         Width           =   4695
      End
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   2880
      TabIndex        =   6
      Top             =   4560
      Width           =   2055
   End
   Begin VB.CommandButton Command1 
      Caption         =   "多项式拟合"
      Height          =   375
      Left            =   480
      TabIndex        =   5
      Top             =   4560
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "输入数据"
      Height          =   4095
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   4935
      Begin VB.Frame Frame3 
         Caption         =   "y轴数据"
         Height          =   3255
         Left            =   2640
         TabIndex        =   2
         Top             =   480
         Width           =   1815
         Begin VB.TextBox Text2 
            Height          =   2295
            Left            =   360
            MultiLine       =   -1  'True
            ScrollBars      =   2  'Vertical
            TabIndex        =   4
            Text            =   "FormDatafit.frx":030A
            Top             =   480
            Width           =   1095
         End
      End
      Begin VB.Frame Frame2 
         Caption         =   "x轴数据"
         Height          =   3255
         Left            =   480
         TabIndex        =   1
         Top             =   480
         Width           =   1815
         Begin VB.TextBox Text1 
            Height          =   2295
            Left            =   360
            MultiLine       =   -1  'True
            ScrollBars      =   2  'Vertical
            TabIndex        =   3
            Text            =   "FormDatafit.frx":0317
            Top             =   480
            Width           =   1095
         End
      End
   End
   Begin VB.Label Label1 
      Caption         =   "多项式阶数"
      Height          =   255
      Left            =   1800
      TabIndex        =   7
      Top             =   4680
      Width           =   975
   End
End
Attribute VB_Name = "FormDatafit"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private ObjData As mydatafit.mydatafit

Private Sub Command1_Click()
    
    On Error GoTo handle_error
    
    X1 = Text1.Text
    
    X2 = Text2.Text
    
    x3 = Text3.Text
    
    Call ObjData.conv2num(1, xx1, X1)

    Call ObjData.conv2num(1, xx2, X2)
    
    Call ObjData.conv2num(1, xx3, x3)
    
    Call ObjData.mypolyfit(1, y, xx1, xx2, xx3)
    
    Call ObjData.conv2str(2, yy, n, y)
    
    If n(1, 1) = 1 Then
        
        Text4.Text = yy
        
        Exit Sub
        
    End If
        
    For i = 1 To n(1, 1)
    
        For j = 1 To n(1, 2)
                
            Text4.Text = Text4.Text + yy(i, j)
            
        Next
        
        Text4.Text = Text4.Text + vbCrLf
        
    Next
    
    Exit Sub
    
handle_error:
    
    MsgBox (Err.Description)

End Sub

Private Sub Form_Load()
Set ObjData = New mydatafit.mydatafit
End Sub

