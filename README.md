# WebView2MFC
How to use a WebView2 control in an MFC dialog application
I could not find a single example of how to implement a WebView2 in MFC. Even the official Microsoft Webview2 examples have it for WPF, Win32, UWP etc. but not for MFC. So I looked up the current solutions and customized them for use in MFC.

In this sample, the dialog contains the browser a textbox to type in a URL and a button to navigate to the url.
IMPORTANT: There is a timer with a 3 second delay - this delay is needed for the Webview2 control to initialize. Executing the webview2 directly in the OnInitDialog() method gives a NULL pointer exception. I could not find the exact reason, but adding a couple of seconds delay solves the problem. If anyone can come up with a better solution. I would be most interested.



<img width="1018" height="639" alt="Capture" src="https://github.com/user-attachments/assets/20399276-9d29-4a17-ae68-ff9c84cf3db7" />
