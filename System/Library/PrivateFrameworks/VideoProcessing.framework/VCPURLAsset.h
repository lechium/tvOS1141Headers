/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAsset.h>

@class NSURL, NSDictionary;

@interface VCPURLAsset : VCPAsset {

	NSURL* _imageURL;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	BOOL _onceExif;
	NSDictionary* _cachedExif;

}
+(id)imageAssetWithURL:(id)arg1 ;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(CVBufferRef)imageWithPreferredDimension:(unsigned long long)arg1 ;
-(id)exif;
-(id)initWithImageURL:(id)arg1 ;
@end

