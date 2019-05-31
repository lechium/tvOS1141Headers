/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUFontDescriptor.h>

@interface MPUMutableFontDescriptor : MPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) double defaultPointSizeAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL usesCondensedMetrics; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(void)setSystemFontSize:(double)arg1 ;
-(void)setDefaultPointSizeAdjustment:(double)arg1 ;
-(void)_resetToDefaultValues;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setUsesCondensedMetrics:(BOOL)arg1 ;
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
@end

