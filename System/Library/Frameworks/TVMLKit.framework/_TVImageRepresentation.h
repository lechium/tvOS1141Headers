/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString;

@interface _TVImageRepresentation : NSObject {

	BOOL _fixedFrame;
	CGRect _sourceRect;
	CGRect _destinationRect;

}

@property (assign,nonatomic) CGRect sourceRect;                                //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) CGRect destinationRect;                           //@synthesize destinationRect=_destinationRect - In the implementation block
@property (assign,getter=isFixedFrame,nonatomic) BOOL fixedFrame;              //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
+(id)imageRepresentationWithURL:(id)arg1 ;
+(id)imageRepresentationWithImage:(id)arg1 ;
+(id)imageRepresentationWithImageProxy:(id)arg1 ;
+(id)imageRepresentationWithNamedLayerImage:(id)arg1 ;
+(id)_loadingQueue;
+(id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(NSString *)cacheKey;
-(void)setFixedFrame:(BOOL)arg1 ;
-(CGRect)destinationRect;
-(void)setDestinationRect:(CGRect)arg1 ;
-(id)_originalImageCacheKey;
-(CGImageRef)_originalImage;
-(CGImageRef)_imageForOriginalImage:(CGImageRef)arg1 ;
-(BOOL)isFixedFrame;
-(CGImageRef)newImage;
-(void)loadImageWithCompletion:(/*^block*/id)arg1 ;
@end

