/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKPrinter;


@protocol UIPrinterBrowserOwner <NSObject>
@property (nonatomic,retain) PKPrinter * printer; 
@optional
-(void)setUserSelectedPrinter:(BOOL)arg1;
-(BOOL)shouldShowPrinter:(id)arg1;

@required
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(void)dismissAnimated:(BOOL)arg1;
-(BOOL)filtersPrinters;
-(void)cancelPrinting;
-(PKPrinter *)printer;
-(void)setPrinter:(id)arg1;

@end
