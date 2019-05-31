/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebFrameLoadDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
-(void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
-(void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;
-(void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2 forFrame:(id)arg3;

@end

