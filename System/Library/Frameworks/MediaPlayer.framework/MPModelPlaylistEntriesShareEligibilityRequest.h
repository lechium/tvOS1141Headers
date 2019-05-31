/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlaylist;

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying> {

	MPModelPlaylist* _playlist;

}

@property (nonatomic,readonly) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPModelPlaylist *)playlist;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaylist:(id)arg1 ;
@end

