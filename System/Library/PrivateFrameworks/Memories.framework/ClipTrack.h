/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ClipTrack : NSObject {

	int _clipType;
	int _trackID;
	NSMutableArray* _clips;

}
+(id)nameForClipType:(int)arg1 trackID:(int)arg2 ;
-(int)clipType;
-(void)removeClip:(id)arg1 ;
-(id)initWithClipType:(int)arg1 trackID:(int)arg2 ;
-(id)trackName;
-(void)addClip:(id)arg1 ;
-(void)insertClip:(id)arg1 atIndex:(long long)arg2 ;
-(long long)indexOfClip:(id)arg1 ;
-(id)clips;
@end

