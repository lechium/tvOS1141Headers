/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationRotationFollowingWindow.h>

@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {

	long long _interfaceOrientation;
	BOOL _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
-(void)commonInit;
@end
