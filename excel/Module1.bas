Attribute VB_Name = "Module1"

Private Declare Function addFunctionLocal _
Lib "libMacExampleAddin.dylib" _
Alias "addNum" (ByVal a As Double, ByVal b As Double) As Double

Private Declare Function addFunctionRelative _
Lib "../addin/Debug/libMacExampleAddin.dylib" _
Alias "addNum" (ByVal a As Double, ByVal b As Double) As Double

Private Declare Function addFunctionRelativeMac _
Lib "addin:Debug:libMacExampleAddin.dylib" _
Alias "addNum" (ByVal a As Double, ByVal b As Double) As Double

Private Declare Function addFunctionAbsolute _
Lib "/Users/peter/Documents/eclipse/workspace-cdt/MacCPPExcelAddinExample/addin/Debug/libMacExampleAddin.dylib" _
Alias "addNum" (ByVal a As Double, ByVal b As Double) As Double

Private Declare Function addFunctionMac _
Lib "MacSSD:Users:peter:Documents:eclipse:workspace-cdt:MacCPPExcelAddinExample:addin:Debug:libMacExampleAddin.dylib" _
Alias "addNum" (ByVal a As Double, ByVal b As Double) As Double

Function mypath() As String
mypath = ThisWorkbook.Path
End Function

Function addLocal(a As Double, b As Double)
addLocal = addFunctionLocal(a, b)
End Function

Function addRelative(a As Double, b As Double)
addRelative = addFunctionRelative(a, b)
End Function

Function addRelativeMac(a As Double, b As Double)
addRelativeMac = addFunctionRelativeMac(a, b)
End Function

Function addAbsolute(a As Double, b As Double)
addAbsolute = addFunctionAbsolute(a, b)
End Function

Function addAbsoluteMac(ByVal x As Double, ByVal y As Double) As Double
addAbsoluteMac = addFunctionMac(x, y)
End Function

Function addVBA(ByVal x As Integer, ByVal y As Integer) As Integer
addVBA = x + y
End Function

