Public Class MainForm
    Dim myAccount As New BankAccount()
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Application.Exit()
    End Sub

    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        txtStartingAccountBalance.Text = String.Empty
        txtTransactionAmount.Text = String.Empty
        txtAccountBalance.Text = String.Empty
    End Sub

    Private Sub btnDeposit_Click(sender As Object, e As EventArgs) Handles btnDeposit.Click
        Dim transactionAmount As Decimal
        Dim startingAmount As Decimal
        Try


            Decimal.TryParse(txtTransactionAmount.Text.Trim(), transactionAmount)
            Decimal.TryParse(txtStartingAccountBalance.Text.Trim(), startingAmount)
            myAccount.StartingAccountBalance = startingAmount

            myAccount.Deposit(transactionAmount)
            txtAccountBalance.Text = myAccount.AccountBalance.ToString("0.00")
        Catch ex As Exception
            MessageBox.Show("Deposit failed.")
            MessageBox.Show("Please make sure that you use numeric only!")
        End Try
    End Sub

    Private Sub btnWithdraw_Click(sender As Object, e As EventArgs) Handles btnWithdraw.Click
        Dim transactionAmount As Decimal

        If myAccount.Withdraw(transactionAmount) Then
            txtAccountBalance.Text = myAccount.AccountBalance.ToString("0.00")
        Else
            MessageBox.Show("The amount to withdraw exceeds account balance", "withdraw failed", MessageBoxButtons.OK, MessageBoxIcon.Hand)
            MessageBox.Show("Please make sure that you entered numeric only!")
        End If
    End Sub
End Class