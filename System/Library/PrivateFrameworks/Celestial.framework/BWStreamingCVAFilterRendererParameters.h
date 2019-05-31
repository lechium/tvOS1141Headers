/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class CIFilter, BWColorLookupCache, NSData, NSString;

@interface BWStreamingCVAFilterRendererParameters : NSObject <BWFilterRendererParameters> {

	CIFilter* _colorFilter;
	BWColorLookupCache* _colorLookupCache;
	NSData* _foregroundColorLookupTable;
	NSData* _standbyForegroundColorLookupTable;
	NSData* _backgroundColorLookupTable;
	long long _renderingStrategy;

}

@property (nonatomic,retain,readonly) BWColorLookupCache * colorLookupCache;              //@synthesize colorLookupCache=_colorLookupCache - In the implementation block
@property (nonatomic,retain) NSData * foregroundColorLookupTable;                         //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain) NSData * standbyForegroundColorLookupTable;                  //@synthesize standbyForegroundColorLookupTable=_standbyForegroundColorLookupTable - In the implementation block
@property (nonatomic,retain) NSData * backgroundColorLookupTable;                         //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
@property (nonatomic,retain) CIFilter * colorFilter;                                      //@synthesize colorFilter=_colorFilter - In the implementation block
@property (nonatomic,readonly) long long renderingStrategy;                               //@synthesize renderingStrategy=_renderingStrategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) short type; 
+(void)initialize;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(NSData *)foregroundColorLookupTable;
-(NSData *)standbyForegroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(void)_ensureParametersForColorFilter:(id)arg1 outputRenderingStrategy:(long long*)arg2 ;
-(id)initWithColorFilter:(id)arg1 colorLookupCache:(id)arg2 ;
-(long long)renderingStrategy;
-(BWColorLookupCache *)colorLookupCache;
-(CIFilter *)colorFilter;
-(void)setForegroundColorLookupTable:(NSData *)arg1 ;
-(void)setStandbyForegroundColorLookupTable:(NSData *)arg1 ;
-(void)setBackgroundColorLookupTable:(NSData *)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
-(id)init;
-(void)dealloc;
-(short)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

