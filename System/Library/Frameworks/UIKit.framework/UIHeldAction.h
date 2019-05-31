/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDelayedAction.h>

@class NSDate;

@interface UIHeldAction : UIDelayedAction {

	BOOL _holding;
	NSDate* _holdBegan;
	double _baseDelay;
	double _timeBalance;

}
-(void)cancel;
-(void)touchWithDelay:(double)arg1 ;
-(void)unschedule;
-(void)hold;
-(void)resume;
-(BOOL)isHolding;
@end

