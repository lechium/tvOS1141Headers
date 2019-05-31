/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	BOOL _connected;
	BOOL _shouldAnimateConnection;

}
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)performPendedActions;
-(double)alphaForConnected:(BOOL)arg1 ;
-(void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

