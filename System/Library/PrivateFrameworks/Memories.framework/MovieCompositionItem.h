/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

@interface MovieCompositionItem : CompositionItem {

	AVAsset* m_asset;
	AVURLAsset* m_audioProxyAsset;

}

@property (nonatomic,retain) AVAsset * asset; 
@property (nonatomic,retain) AVURLAsset * audioProxyAsset; 
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(SCD_Struct_Mi11)applySpeed:(SCD_Struct_Mi11)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
-(id)audioAsset;
-(id)speedRangesForSourceRange:(SCD_Struct_Mi11)arg1 destinationRange:(SCD_Struct_Mi11)arg2 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_Mi11)arg2 destinationRange:(SCD_Struct_Mi11)arg3 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV2)arg1 paddedFromTime:(SCD_Struct_TV2)arg2 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV2)arg1 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
@end

