/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLCheckerboardTexture : MDLTexture {

	int _divisions;
	CGColorRef _color1;
	CGColorRef _color2;

}

@property (assign,nonatomic) float divisions; 
@property (assign,nonatomic) CGColorRef color1; 
@property (assign,nonatomic) CGColorRef color2; 
-(void)dealloc;
-(id)generateDataAtLevel:(long long)arg1 ;
-(void)setDivisions:(float)arg1 ;
-(float)divisions;
-(void)setColor1:(CGColorRef)arg1 ;
-(CGColorRef)color1;
-(void)setColor2:(CGColorRef)arg1 ;
-(CGColorRef)color2;
-(id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(CGColorRef)arg5 color1:(CGColorRef)arg6 ;
@end

