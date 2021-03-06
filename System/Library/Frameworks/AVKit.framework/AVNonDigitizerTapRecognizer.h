/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITapGestureRecognizer.h>

@class UIPress;

@interface AVNonDigitizerTapRecognizer : UITapGestureRecognizer {

	UIPress* _recognizedPress;

}

@property (nonatomic,readonly) UIPress * recognizedPress;              //@synthesize recognizedPress=_recognizedPress - In the implementation block
+(id)pressType:(long long)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
+(id)arrowsRecognizerWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)setRecognizedPress:(UIPress *)arg1 ;
-(BOOL)_senderOfSelectPressHasTouchSurface:(id)arg1 withEvent:(id)arg2 ;
-(UIPress *)recognizedPress;
@end

