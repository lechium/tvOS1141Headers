/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {

	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _miniBackgroundImages;
	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _miniDividerImages;
	NSMutableDictionary* _textAttributesForState;
	NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
	NSMutableDictionary* _contentPositionOffsets;
	NSMutableDictionary* _miniContentPositionOffsets;
	BOOL _legacyDontHighlight;
	BOOL _legacySuppressOptionsBackground;
	BOOL _isTiled;
	unsigned long long _leftCapWidth;
	unsigned long long _rightCapWidth;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
-(id)init;
-(id)textAttributesForState:(unsigned long long)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3 ;
-(id)anyDividerImageForMini:(BOOL)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4 ;
-(void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(BOOL)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(BOOL)arg4 ;
-(void)takeTextAttributesFrom:(SCD_Struct_UI37)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)wantsTrackingSuppressed;
-(void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
-(id)anyDividerImage;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(BOOL)legacySuppressOptionsBackground;
-(void)setDetail:(SCD_Struct_UI38*)arg1 ;
-(void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3 ;
-(UIImage *)optionsBackgroundImage;
-(void)setOptionsBackgroundImage:(UIImage *)arg1 ;
@end

