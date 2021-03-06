/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHSMediaServerIdentifier, TVHKMediaEntityShowsCache, TVHKMediaEntitySeasonsCache;

@interface TVHKMediaEntityFetchCache : NSObject <NSCopying> {

	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaEntityShowsCache* _showsCache;
	TVHKMediaEntitySeasonsCache* _seasonsCache;

}

@property (nonatomic,copy) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitySeasonsCache * seasonsCache;                   //@synthesize seasonsCache=_seasonsCache - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityShowsCache * showsCache;                       //@synthesize showsCache=_showsCache - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(id)initWithMediaServerIdentifier:(id)arg1 ;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(TVHKMediaEntityShowsCache *)showsCache;
-(TVHKMediaEntitySeasonsCache *)seasonsCache;
-(void)setShowsCache:(TVHKMediaEntityShowsCache *)arg1 ;
-(void)setSeasonsCache:(TVHKMediaEntitySeasonsCache *)arg1 ;
@end

