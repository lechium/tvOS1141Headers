/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface MotionGeneratorCompositionItem : MovieCompositionItem
-(id)initWithClip:(id)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_TV2)arg1 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
@end

