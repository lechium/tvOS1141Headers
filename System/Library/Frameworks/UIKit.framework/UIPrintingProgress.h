/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertView* _alert;
	UIPrintingProgressViewController* _viewController;
	BOOL _donePrinting;
	BOOL _forceDisplayAsAlert;
	BOOL _creatingPDF;
	double _lastPageUpdate;
	double _progressAlertDelay;

}

@property (readonly) NSString * title; 
@property (assign) BOOL creatingPDF;                       //@synthesize creatingPDF=_creatingPDF - In the implementation block
@property (assign) double lastPageUpdate;                  //@synthesize lastPageUpdate=_lastPageUpdate - In the implementation block
@property (assign) double progressAlertDelay;              //@synthesize progressAlertDelay=_progressAlertDelay - In the implementation block
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)setPrintInfoState:(int)arg1 ;
-(id)initPDFCreationWithCancelHandler:(/*^block*/id)arg1 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(void)endProgress;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)setProgressAlertDelay:(double)arg1 ;
-(BOOL)progressVisible;
-(void)progressCancel;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(double)lastPageUpdate;
-(void)setLastPageUpdate:(double)arg1 ;
-(double)progressAlertDelay;
-(BOOL)creatingPDF;
-(void)setCreatingPDF:(BOOL)arg1 ;
@end

