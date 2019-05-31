/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)searchTimeout;
-(void)updateFont;
-(void)setSearching:(BOOL)arg1 ;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
@end

