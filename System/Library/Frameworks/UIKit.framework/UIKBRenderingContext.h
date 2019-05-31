/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIKBRenderConfig;

@interface UIKBRenderingContext : NSObject <NSCopying> {

	unsigned long long _shiftState;
	UIKBRenderConfig* _renderConfig;
	long long _keyboardType;
	long long _handBias;

}

@property (assign,nonatomic) unsigned long long shiftState;                //@synthesize shiftState=_shiftState - In the implementation block
@property (assign,nonatomic) long long keyboardType;                       //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) long long handBias;                           //@synthesize handBias=_handBias - In the implementation block
+(id)renderingContextForRenderConfig:(id)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(unsigned long long)shiftState;
-(void)setShiftState:(unsigned long long)arg1 ;
-(void)setHandBias:(long long)arg1 ;
-(long long)handBias;
-(id)initWithRenderConfig:(id)arg1 ;
@end

