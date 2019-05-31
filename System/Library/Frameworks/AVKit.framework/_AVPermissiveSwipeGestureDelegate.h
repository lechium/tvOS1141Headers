/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIGestureRecognizer, NSString;

@interface _AVPermissiveSwipeGestureDelegate : NSObject <UIGestureRecognizerDelegate> {

	UIGestureRecognizer* _parentGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIGestureRecognizer * parentGestureRecognizer;              //@synthesize parentGestureRecognizer=_parentGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)setParentGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)parentDelegate;
-(UIGestureRecognizer *)parentGestureRecognizer;
@end

