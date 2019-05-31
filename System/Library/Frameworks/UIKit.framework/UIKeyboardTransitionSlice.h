/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKBCacheToken;

@interface UIKeyboardTransitionSlice : NSObject {

	CGRect _startRect;
	CGRect _endRect;
	UIKBCacheToken* _startToken;
	UIKBCacheToken* _endToken;
	BOOL _shiftContents;
	BOOL _delayCrossfade;
	int _normalization;

}

@property (assign) CGRect startRect;                         //@synthesize startRect=_startRect - In the implementation block
@property (assign) CGRect endRect;                           //@synthesize endRect=_endRect - In the implementation block
@property (retain) UIKBCacheToken * startToken;              //@synthesize startToken=_startToken - In the implementation block
@property (retain) UIKBCacheToken * endToken;                //@synthesize endToken=_endToken - In the implementation block
@property (assign) int normalization;                        //@synthesize normalization=_normalization - In the implementation block
@property (assign) BOOL delayCrossfade;                      //@synthesize delayCrossfade=_delayCrossfade - In the implementation block
@property (readonly) BOOL hasGeometry; 
+(id)sliceWithStart:(CGRect)arg1 end:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGRect)endRect;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(CGRect)startRect;
-(void)addStartRect:(CGRect)arg1 end:(CGRect)arg2 ;
-(BOOL)hasGeometry;
-(UIKBCacheToken *)startToken;
-(void)setStartToken:(UIKBCacheToken *)arg1 ;
-(UIKBCacheToken *)endToken;
-(void)setEndToken:(UIKBCacheToken *)arg1 ;
-(int)normalization;
-(void)setNormalization:(int)arg1 ;
-(BOOL)delayCrossfade;
-(void)setDelayCrossfade:(BOOL)arg1 ;
@end

