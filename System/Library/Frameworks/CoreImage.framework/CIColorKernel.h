/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)kernelWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)_initWithDict:(id)arg1 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(void)setPreservesRange:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
@end

