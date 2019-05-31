/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWVideoFormat : BWFormat {

	unsigned long long _width;
	unsigned long long _height;
	unsigned _pixelFormat;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _extendedWidth;
	unsigned long long _extendedHeight;
	unsigned _cacheMode;
	BOOL _prewireBuffers;
	NSDictionary* _pixelBufferAttributes;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                 //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long extendedWidth;                     //@synthesize extendedWidth=_extendedWidth - In the implementation block
@property (assign,nonatomic) unsigned long long extendedHeight;                    //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) unsigned cacheMode;                                   //@synthesize cacheMode=_cacheMode - In the implementation block
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes;               //@synthesize pixelBufferAttributes=_pixelBufferAttributes - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                           //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
+(id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 ;
+(int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned)arg3 sourceDimensions:(SCD_Struct_BW13)arg4 requestedPixelFormat:(unsigned)arg5 ;
+(id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2 ;
+(int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned)arg2 sourceDimensions:(SCD_Struct_BW13)arg3 requestedPixelFormat:(unsigned)arg4 ;
+(void)initialize;
-(unsigned)pixelFormat;
-(int)colorSpaceProperties;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(BOOL)prewireBuffers;
-(unsigned)cacheMode;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)planeAlignment;
-(id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 ;
-(unsigned long long)extendedWidth;
-(void)setExtendedWidth:(unsigned long long)arg1 ;
-(void)setCacheMode:(unsigned)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(unsigned long long)height;
-(unsigned long long)extendedHeight;
-(void)setExtendedHeight:(unsigned long long)arg1 ;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned)mediaType;
@end

