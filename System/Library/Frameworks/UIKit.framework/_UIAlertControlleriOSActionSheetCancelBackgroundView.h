/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class UIView, _UIDimmingKnockoutBackdropView, _UIBlendingHighlightView, NSString;

@interface _UIAlertControlleriOSActionSheetCancelBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	UIView* backgroundView;
	_UIDimmingKnockoutBackdropView* blurView;
	_UIBlendingHighlightView* highlightView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
@end

