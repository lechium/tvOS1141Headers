/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class NSString, TVHKMediaEntityType, TVHKMediaEntityIdentifier, TVHKDMAPPlaylistIdentifier;

@interface TVHKDAAPPlaylistMediaCollection : TVHKMediaCollection {

	NSString* _imageIdentifier;
	TVHKMediaEntityType* _type;
	unsigned long long _playlistType;
	TVHKMediaEntityIdentifier* _parentPlaylistIdentifier;
	TVHKDMAPPlaylistIdentifier* _playlistIdentifier;

}

@property (nonatomic,copy) TVHKDMAPPlaylistIdentifier * playlistIdentifier;              //@synthesize playlistIdentifier=_playlistIdentifier - In the implementation block
+(/*^block*/id)sortComparator;
+(unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1 ;
-(id)identifier;
-(id)type;
-(TVHKDMAPPlaylistIdentifier *)playlistIdentifier;
-(void)setPlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
-(unsigned long long)playlistType;
-(id)imageIdentifier;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 ;
-(id)mediaItemCount;
-(id)isAutoGenerated;
-(id)isOrganizational;
-(id)parentPlaylistIdentifier;
@end

