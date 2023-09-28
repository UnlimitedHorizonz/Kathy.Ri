Public Class Form1
    Private Sub btnCalculate_Click(sender As Object, e As EventArgs) Handles btnCalculate.Click
        'Declare variables for input And output
        Dim intQuarters, intDimes, intNickels, intPennies As Integer
        Dim intCents As Integer


        'store the value from textbox(whatever number you type into it)
        intCents = CInt(txtNumber.Text) 'C followed by the data type(Int) makes sure your text wentry is displayed in Integer


        'calculations (these calculations break down the change that a customer gets after paying).
        intQuarters = intCents \ 25               'calculate quarters in entered Cents
        intCents = intCents Mod 25                 'calculate the remainder from quarters calculation'
        intDimes = intCents \ 10                    'calculate the dimes
        intCents = intCents Mod 10                  'remainder of dimes
        intNickels = intCents \ 5
        intCents = intCents Mod 5
        intPennies = intCents

        'Display the output
        lblQuarters.Text = intQuarters
        lblDimes.Text = intDimes
        lblNickels.Text = intNickels
        lblPennies.Text = intPennies


    End Sub
    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        txtNumber.Text = " "
        lblQuarters.Text = " "
        lblDimes.Text = " "
        lblNickels.Text = " "
        lblPennies.Text = " "
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class