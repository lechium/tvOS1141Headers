/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UISegment;

@interface UISegmentAccessibilityButton : UIButton {

	UISegment* _segment;

}

@property (nonatomic,retain) UISegment * segment;              //@synthesize segment=_segment - In the implementation block
+(id)buttonWithSegment:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSegment:(UISegment *)arg1 ;
-(UISegment *)segment;
@end

