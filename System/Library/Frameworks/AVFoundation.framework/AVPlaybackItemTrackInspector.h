/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(void)finalize;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)estimatedDataRate;
-(SCD_Struct_AV2)samplePresentationTimeForTrackTime:(SCD_Struct_AV2)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(SCD_Struct_AV3)timeRange;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(id)formatDescriptions;
-(int)trackID;
-(id)mediaType;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
@end

