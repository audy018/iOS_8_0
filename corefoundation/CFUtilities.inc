{ Parsed from CoreFoundation.framework (iPhoneOS8.2) CFUtilities.h }
{ Created on Fri Mar 20 2:11:36 2015 }

{$if  not (defined(__COREFOUNDATION_CFUTILITIES__))}
{$ifdef TYPES}
const
  __COREFOUNDATION_CFUTILITIES__ = 1;
{$endif}

{$ifdef FUNCTIONS}
function CFCopyHomeDirectoryURL: CFURLRef; cdecl; external; { available in 5_0 }
{$endif}

{$endif}
