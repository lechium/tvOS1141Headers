/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MRLoadable.h>
#import <libobjc.A.dylib/MRRenderable.h>

@class NSString, MRAsset, NSDictionary, NSInvocationOperation, NSLock, MRImage;

@interface MRImageProvider : NSObject <MRLoadable, MRRenderable> {

	NSString* mAssetPath;
	MRAsset* mAsset;
	CGSize mDefaultSize;
	NSString* mImageSizeScript;
	NSDictionary* mEffectAttributes;
	NSInvocationOperation* mPreloadOperation;
	NSLock* mPreloadOperationLock;
	MRImage* mOriginalImage;
	CGSize mOriginalImageSize;
	BOOL mIsLoaded;
	CGSize mRequestedSize;
	double mShowTime;
	double mShowDuration;
	CGSize mLastImageSize;
	double mLastTime;
	CGSize mLastDaSize;
	BOOL mNeedsToUpdate;
	BOOL mIsUpdatingLive;
	BOOL mNeedsToUnloadOnEndLiveUpdate;
	BOOL mIsMonochromatic;
	BOOL mUseMipmapping;
	BOOL mUsePowerOfTwo;
	BOOL mIsCleanedUp;
	BOOL mJustHoldIt;

}

@property (assign,nonatomic) CGSize defaultSize; 
@property (nonatomic,copy) NSString * imageSizeScript; 
@property (nonatomic,retain) NSDictionary * effectAttributes; 
@property (nonatomic,copy) NSString * assetPath; 
@property (assign,nonatomic) CGSize originalImageSize; 
@property (assign,nonatomic) double showTime; 
@property (assign,nonatomic) double showDuration; 
@property (assign,nonatomic) BOOL isMonochromatic; 
@property (assign,nonatomic) BOOL useMipmapping; 
@property (assign,nonatomic) BOOL usePowerOfTwo; 
@property (nonatomic,readonly) CGSize requestedSize; 
@property (nonatomic,readonly) float imageAspectRatio; 
@property (nonatomic,readonly) BOOL isLoaded; 
@property (assign,nonatomic) BOOL justHoldIt; 
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
-(void)unload;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(CGSize)defaultSize;
-(BOOL)isOpaque;
-(BOOL)isLoaded;
-(void)cleanup;
-(void)cancelLoading;
-(CGSize)originalImageSize;
-(void)setOriginalImageSize:(CGSize)arg1 ;
-(NSDictionary *)effectAttributes;
-(void)setEffectAttributes:(NSDictionary *)arg1 ;
-(double)showTime;
-(double)showDuration;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)loadWithArguments:(id)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(BOOL)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(BOOL)isInfinite;
-(void)setAssetPath:(NSString *)arg1 ;
-(void)setImageSizeScript:(NSString *)arg1 ;
-(void)setUsePowerOfTwo:(BOOL)arg1 ;
-(void)setDefaultSize:(CGSize)arg1 ;
-(NSString *)assetPath;
-(void)setUseMipmapping:(BOOL)arg1 ;
-(void)setShowTime:(double)arg1 ;
-(void)setShowDuration:(double)arg1 ;
-(float)imageAspectRatio;
-(void)setJustHoldIt:(BOOL)arg1 ;
-(NSString *)imageSizeScript;
-(BOOL)beginLiveUpdate;
-(BOOL)endLiveUpdate;
-(void)setIsMonochromatic:(BOOL)arg1 ;
-(BOOL)isMonochromatic;
-(void)_loadTextureWithArguments:(id)arg1 ;
-(void)loadTextureWithArguments:(id)arg1 ;
-(CGSize)imageSizeForAspectRatio:(float)arg1 ;
-(BOOL)useMipmapping;
-(BOOL)usePowerOfTwo;
-(CGSize)requestedSize;
-(BOOL)justHoldIt;
@end

