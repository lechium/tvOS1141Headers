/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPCMediaPlayerLegacyPlaylistManager, NSString;

@interface MPCMediaPlayerLegacyPlayerQueueLazySectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	NSRange _hardQueueRange;
	NSRange _softQueueRange;
	MPCMediaPlayerLegacyPlaylistManager* _playlistManager;

}

@property (nonatomic,readonly) MPCMediaPlayerLegacyPlaylistManager * playlistManager;              //@synthesize playlistManager=_playlistManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)initWithPlaylistManager:(id)arg1 ;
-(MPCMediaPlayerLegacyPlaylistManager *)playlistManager;
@end

