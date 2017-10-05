# faulthandler-spam
When throwing and catching c++ errors in a python extension compiled with the MSVC (14) compiler, faulthandler dumps a traceback of 'Windows fatal exception: code 0xe06d7363'.

Run 'build.bat' in a suitable environment (Python 3.6.2, MSVC 14 Compiler) to get the following output:
```
Windows fatal exception: code 0xe06d7363

Current thread 0x0000462c (most recent call first):
  File "test.py", line 5 in <module>
caught test error: c++ error message
```
The traceback to 'Windows fatal exception: code 0xe06d7363' is spaming the faulthandler's output (especially in larger projects), despitethe fact that the error is caught correctly.
