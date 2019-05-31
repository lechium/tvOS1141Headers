/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {

	NSSet* _touches;

}

@property (nonatomic,copy) NSSet * touches;              //@synthesize touches=_touches - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(NSSet *)touches;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)setTouches:(NSSet *)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_wantsPartialTouchSequences;
-(void)_updateTouchesFromEvent:(id)arg1 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg1 ;
@end
