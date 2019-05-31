/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject, NSMutableSet, NSArray;

@interface FigDisplayMirroringChangeObserver : NSObject {

	OpaqueFigPlayerRef _player;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _clonedDisplays;
	NSMutableSet* _cloningSupportedDisplays;
	NSArray* _baseDisplayList;

}
-(void)removeReferenceToPlayer;
-(void)setBaseDisplayList:(id)arg1 ;
-(void)updatePlayerDisplayList;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPlayer:(OpaqueFigPlayerRef)arg1 ;
@end

