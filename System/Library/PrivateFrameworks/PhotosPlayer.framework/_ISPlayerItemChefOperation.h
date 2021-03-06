/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAsset;

@interface _ISPlayerItemChefOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _includeVideo;
	BOOL _includeAudio;
	AVAsset* _asset;
	/*^block*/id _resultHandler;
	SCD_Struct_IS4 _photoTime;
	SCD_Struct_IS5 _trimmedTimeRange;

}

@property (nonatomic,readonly) AVAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS5 trimmedTimeRange;              //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS4 photoTime;                     //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) BOOL includeVideo;                            //@synthesize includeVideo=_includeVideo - In the implementation block
@property (nonatomic,readonly) BOOL includeAudio;                            //@synthesize includeAudio=_includeAudio - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(AVAsset *)asset;
-(SCD_Struct_IS4)photoTime;
-(id)initWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS5)arg2 photoTime:(SCD_Struct_IS4)arg3 includeAudio:(BOOL)arg4 includeVideo:(BOOL)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)_handleValuesDidLoad;
-(void)_preparePlayerItem;
-(BOOL)includeAudio;
-(SCD_Struct_IS5)trimmedTimeRange;
-(BOOL)includeVideo;
-(id)resultHandler;
@end

