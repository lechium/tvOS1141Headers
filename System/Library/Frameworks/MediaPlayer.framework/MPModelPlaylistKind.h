/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind {

	unsigned long long _variants;
	MPModelPlaylistEntryKind* _playlistEntryKind;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long variants;                               //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) MPModelPlaylistEntryKind * playlistEntryKind;              //@synthesize playlistEntryKind=_playlistEntryKind - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(unsigned long long)variants;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(MPModelPlaylistEntryKind *)playlistEntryKind;
@end

