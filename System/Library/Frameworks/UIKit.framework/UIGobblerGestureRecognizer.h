/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class UIView;

@interface UIGobblerGestureRecognizer : UIGestureRecognizer {

	UIView* _excludedView;

}
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 excludedView:(id)arg3 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
@end

