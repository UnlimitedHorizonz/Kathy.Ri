Public Class BankAccount
    Public Property StartingAccountBalance As Decimal
        Get
            Return StartingAccountBalance

        End Get
        Set(ByVal Value As Decimal)
            StartingAccountBalance = Value
        End Set
    End Property


    Public Property AccountBalance As Decimal
        Get
            Return AccountBalance + StartingAccountBalance
        End Get
        Set(ByVal value As Decimal)
            AccountBalance = value
        End Set
    End Property

    Public Function Deposit(ByVal Amount As Decimal) As Boolean

        If Amount > 0 Then

            AccountBalance = AccountBalance + Amount
            Return True
        Else
            Return False
        End If
    End Function

    Public Function Withdraw(ByVal Amount As Decimal) As Boolean
        If Amount < 1 Then
            Return False
        End If

        Dim tempBalance As Decimal
        tempBalance = AccountBalance - Amount

        If StartingAccountBalance <= tempBalance Then
            AccountBalance = AccountBalance - Amount
            Return True
        Else
            Return False
        End If
    End Function
End Class
