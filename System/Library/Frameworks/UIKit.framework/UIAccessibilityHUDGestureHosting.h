/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIAccessibilityHUDGestureHosting
@optional
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
-(void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
-(void)_dismissAccessibilityHUDForGestureManager:(id)arg1;

@required
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end

