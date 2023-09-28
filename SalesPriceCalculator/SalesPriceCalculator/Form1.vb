Public Class Form1
    Private Sub btnCalcSales_Click(sender As Object, e As EventArgs) Handles btnCalcSales.Click
        Dim decRetail, decDiscount, decSalesPrice As Decimal


        If Decimal.TryParse(txtRetail.Text, decRetail) Then

            If Decimal.TryParse(txtDiscount.Text, decDiscount) Then

                'call the function to get sales price and convert Percentage
                decDiscount /= 100
                decSalesPrice = SalesPrice(decRetail, decDiscount)

                'display the sales price
                lblSalesPrice.Text = decSalesPrice.ToString("c")
            Else

                'error message for invalid discount percentage
                MessageBox.Show("Enter a numeric discount percentage")

            End If
        Else
            'error message for ivalid retail price
            MessageBox.Show("Enter a numeric retail price")
        End If
    End Sub


    'building Sales Price Function

    Function SalesPrice(ByVal decRetail As Decimal, ByVal decPercentage As Decimal)
        'declare a variable for Sales Price
        Dim decSalesPRice As Decimal



        'calculate the sales price
        decSalesPRice = decRetail - (decRetail * decPercentage)

        'return the Sales Price from the function'
        Return decSalesPRice

    End Function

    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        txtRetail.Text = String.Empty
        txtDiscount.Text = String.Empty
        lblSalesPrice.Text = ""



    End Sub
    'Function must not be in btn
    'Assignment 5, you build a function to convert and call it from the button

    'build the function to convert
    Function convertToMEters(ByVal intFeet As Integer, ByVal intInch As Integer) As Integer
        Dim sngFixedValue As Single

        'decalre a variable
        Dim sngMeters As Single = 0.0254

        sngMeters = ((intFeet * 12) + intInch) * sngFixedValue

        'return converted meters value
        Return sngMeters
    End Function

End Class





