# Mac CPP Excel Addin Example

Mac OSX Excel addin consisting of three components, the addin, a main program and an excel spreadsheet using the addin.

There are several CDT projects in this repo
* ExampleAddin c++ - uses CDT and clang to build the dylib
* ExampleAddinMain c++ - uses CDT and clang to build the main and references dylib
* ExampleAddinExcel excel - an example spreadsheet that uses the addin, via VBA not directly. *The excel absoulute paths need to changed for this to work in your environment*
* ExampleAddinBanditTest c++ - unit tests using Bandit to test the addin. *Requires bandit to be installed ie ${HOME}/lib*
* ExampleAddinCatchTest c++ - unit tests using Catch to test the addin
* ExampleAddinGoogleTest c++ - unit tests using GoogleTest to test the addin. *Requires GoogleTest to be installed ie ${HOME}/lib*

## Unit Test Notes
There doesn't appear to be a way to get unit tests to work inside the same project as the shared library for a CDT project which is why they are separated.

## Install
Clone the repo into an Eclipse CDT workspace and import the projects into Eclipse.
That is:
* git clone git@github.com:PollardsEtFilles/MacCPPExcelAddinExample.git
* In Eclipse:
  * menu File->Import
  * choose "Existing Projects into Workspace" and click next
  * choose "Select root directory:" and browse to the cloned git project base directory and select open
  * the projects: panel should show the new projects to be imported, press Finish to import

After the import cmd-B will build all of the projects.

The dylib local to the Excel spreadsheet directory has to be manually copied when the dylib changes to ~/lib

The absoluate paths in the spreadsheet need to be changed to refere to your path in the VBA module


### References
* https://developer.apple.com/library/mac/documentation/DeveloperTools/Conceptual/DynamicLibraries/100-Articles/DynamicLibraryDesignGuidelines.html
* http://www.realsoftwareblog.com/2011/12/how-to-create-dylib-on-mac-os-x-and.html
* http://macstuff.beachdogs.org/blog/?p=46
* https://social.msdn.microsoft.com/Forums/en-US/b060f291-0754-4e85-a7b9-e64259e6baad/vba-using-shared-library-office-2011-mac?forum=isvvba
* https://msdn.microsoft.com/en-us/library/cc668205.aspx
* https://social.msdn.microsoft.com/Forums/en-US/b060f291-0754-4e85-a7b9-e64259e6baad/vba-using-shared-library-office-2011-mac?forum=isvvba
