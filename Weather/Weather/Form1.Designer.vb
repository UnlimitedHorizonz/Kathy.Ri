<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.btnWeather = New System.Windows.Forms.Button()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.txtTempDegree = New System.Windows.Forms.TextBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.lblDisplayWeatherconditions = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnWeather
        '
        Me.btnWeather.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnWeather.Location = New System.Drawing.Point(125, 252)
        Me.btnWeather.Name = "btnWeather"
        Me.btnWeather.Size = New System.Drawing.Size(181, 39)
        Me.btnWeather.TabIndex = 0
        Me.btnWeather.Text = "How's weather"
        Me.btnWeather.UseVisualStyleBackColor = True
        '
        'btnClear
        '
        Me.btnClear.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClear.Location = New System.Drawing.Point(125, 313)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(133, 37)
        Me.btnClear.TabIndex = 1
        Me.btnClear.Text = "Clear"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnExit.Location = New System.Drawing.Point(125, 371)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(133, 31)
        Me.btnExit.TabIndex = 2
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(98, 37)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(190, 24)
        Me.Label1.TabIndex = 3
        Me.Label1.Text = "Enter Celcius Degree"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(247, 120)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(0, 24)
        Me.Label3.TabIndex = 5
        '
        'txtTempDegree
        '
        Me.txtTempDegree.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtTempDegree.Location = New System.Drawing.Point(306, 37)
        Me.txtTempDegree.Name = "txtTempDegree"
        Me.txtTempDegree.Size = New System.Drawing.Size(138, 28)
        Me.txtTempDegree.TabIndex = 6
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(88, 109)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(170, 24)
        Me.Label2.TabIndex = 7
        Me.Label2.Text = "How the weather is"
        '
        'lblDisplayWeatherconditions
        '
        Me.lblDisplayWeatherconditions.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblDisplayWeatherconditions.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.8!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblDisplayWeatherconditions.Location = New System.Drawing.Point(306, 98)
        Me.lblDisplayWeatherconditions.Name = "lblDisplayWeatherconditions"
        Me.lblDisplayWeatherconditions.Size = New System.Drawing.Size(198, 35)
        Me.lblDisplayWeatherconditions.TabIndex = 8
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.lblDisplayWeatherconditions)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.txtTempDegree)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.btnWeather)
        Me.Name = "Form1"
        Me.Text = "Weather Condition"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnWeather As Button
    Friend WithEvents btnClear As Button
    Friend WithEvents btnExit As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents txtTempDegree As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents lblDisplayWeatherconditions As Label

    Private Sub btnWeather_Click(sender As Object, e As EventArgs) Handles btnWeather.Click
        'declare input and output variables
        Dim intCelDegree As Integer 'input degree
        Dim strWeather As String  'output/display what the weather is

        ' store input into its assigned varaiable
        intCelDegree = txtTempDegree.Text

        'checking the weather based on entered temperature
        If intCelDegree > 35 Then
            lblDisplayWeatherconditions.Text = "it is very hot"
        ElseIf intCelDegree > 25 And intCelDegree <= 35 Then
            lblDisplayWeatherconditions.Text = "it is hot"
        ElseIf intCelDegree > 15 And intCelDegree <= 25 Then
            lblDisplayWeatherconditions.Text = "it is fine"
        ElseIf intCelDegree > 5 And intCelDegree <= 15 Then
            lblDisplayWeatherconditions.Text = "the is cold"
        ElseIf intCelDegree <= 5 Then
            lblDisplayWeatherconditions.Text = "its very cold"

        End If



        'use lblDisplayWeatherconditions.Text = strWeather as an alternatinve to diplaying the outcome of the weather
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
