/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {

	AVPlayerItemMetadataCollectorInternal* _metadataCollectorInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataCollectorPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)finalize;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2 ;
-(id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5 ;
-(BOOL)_isAttachedToPlayerItem;
-(id)init;
-(id<AVPlayerItemMetadataCollectorPushDelegate>)delegate;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

