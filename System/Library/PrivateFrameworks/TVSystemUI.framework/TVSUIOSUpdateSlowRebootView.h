/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface TVSUIOSUpdateSlowRebootView : UIView {

	UILabel* _text;
	UIButton* _restart;
	/*^block*/id _rebootAction;

}

@property (nonatomic,copy) id rebootAction;              //@synthesize rebootAction=_rebootAction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusedView;
-(void)setRebootAction:(id)arg1 ;
-(void)_didSelectRestart:(id)arg1 ;
-(id)rebootAction;
@end

