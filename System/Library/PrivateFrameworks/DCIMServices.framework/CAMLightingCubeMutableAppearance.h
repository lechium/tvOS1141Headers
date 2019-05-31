/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <DCIMServices/CAMLightingCubeAppearance.h>

@interface CAMLightingCubeMutableAppearance : CAMLightingCubeAppearance

@property (assign,nonatomic) CGGradientRef background; 
@property (assign,nonatomic) CGColorRef topFill; 
@property (assign,nonatomic) CGGradientRef topGlow; 
@property (assign,nonatomic) CGGradientRef topMask; 
@property (assign,nonatomic) CGColorRef bottomFill; 
@property (assign,nonatomic) CGGradientRef bottomGlow; 
@property (assign,nonatomic) CGGradientRef bottomMask; 
@property (assign,nonatomic) CGColorRef verticalFillColor; 
@property (assign,nonatomic) CGGradientRef topOver; 
@property (assign,nonatomic) CGColorRef stroke; 
-(CGColorRef)stroke;
-(CGGradientRef)background;
-(void)setBackground:(CGGradientRef)arg1 ;
-(void)setTopFill:(CGColorRef)arg1 ;
-(void)setTopGlow:(CGGradientRef)arg1 ;
-(void)setTopMask:(CGGradientRef)arg1 ;
-(void)setBottomFill:(CGColorRef)arg1 ;
-(void)setBottomGlow:(CGGradientRef)arg1 ;
-(void)setBottomMask:(CGGradientRef)arg1 ;
-(void)setVerticalFillColor:(CGColorRef)arg1 ;
-(CGColorRef)verticalFillColor;
-(CGGradientRef)topGlow;
-(CGColorRef)bottomFill;
-(CGGradientRef)bottomGlow;
-(CGGradientRef)topMask;
-(CGColorRef)topFill;
-(CGGradientRef)bottomMask;
-(CGGradientRef)topOver;
-(void)setTopOver:(CGGradientRef)arg1 ;
-(void)setStroke:(CGColorRef)arg1 ;
@end

