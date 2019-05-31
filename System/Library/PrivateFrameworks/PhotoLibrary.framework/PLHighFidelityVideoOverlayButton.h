/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PLVideoOverlayButton.h>

@class UIButton, _UIBackdropView, UIImageView;

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	UIImageView* _overlayPlayBackground;
	id _target;
	SEL _action;

}
-(void)dealloc;
-(void)layoutSubviews;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end

