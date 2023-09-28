Public Class Account
    Private _name As String
    Private _accountNumber As String

    Protected Property Name As String
        Get
            Return _name
        End Get
        Set(value As String)
            _name = value
        End Set
    End Property

    Protected Property AccountNumber As String
        Get
            Return _accountNumber

        End Get
        Set(value As String)
            _accountNumber = value
        End Set
    End Property
End Class

