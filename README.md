# Mac CPP Excel Addin Example

Mac OSX Excel addin consisting of three components, the addin, a main program and an excel spreadsheet using the addin.

There are three CDT projects in this repo
* MacExampleAddin cpp - uses CDT and clang to build the dylib
* MacExampleMain cpp - uses CDT and clang to build the main and references dylib
* MacExampleExcel excel - an example spreadsheet that uses the addin, via VBA not directly
** The excel absoulute paths need to changed for this to work in your environment

## Install
Clone the repo into an Eclipse CDT workspace and import the projects into Eclipse
cmd-B will build all of the projects

The dylib local to the Excel spreadsheet directory has to be manually copied when the dylib changes

The absoluate paths in the spreadsheet need to be changed to refere to your path in the VBA module


### References
* https://developer.apple.com/library/mac/documentation/DeveloperTools/Conceptual/DynamicLibraries/100-Articles/DynamicLibraryDesignGuidelines.html
* http://www.realsoftwareblog.com/2011/12/how-to-create-dylib-on-mac-os-x-and.html
* http://macstuff.beachdogs.org/blog/?p=46
* https://social.msdn.microsoft.com/Forums/en-US/b060f291-0754-4e85-a7b9-e64259e6baad/vba-using-shared-library-office-2011-mac?forum=isvvba
* https://msdn.microsoft.com/en-us/library/cc668205.aspx
* 
