/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntityCache.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface TVHKMediaEntitySeasonsCache : TVHKMediaEntityCache <NSCopying> {

	NSArray* _seasons;
	NSArray* _episodes;
	NSMutableDictionary* _showByIdentifier;

}

@property (nonatomic,copy) NSArray * seasons;                                     //@synthesize seasons=_seasons - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                    //@synthesize episodes=_episodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * showByIdentifier;              //@synthesize showByIdentifier=_showByIdentifier - In the implementation block
+(id)_titleSortDescriptor;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(NSMutableDictionary *)showByIdentifier;
-(NSArray *)seasons;
-(NSArray *)episodes;
-(id)_DAAPSeasonForIdentifier:(id)arg1 ;
-(void)setEpisodes:(NSArray *)arg1 ;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonsForShowIdentifier:(id)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
-(id)episodesForSeasonIdentifier:(id)arg1 ;
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
-(void)setShowByIdentifier:(NSMutableDictionary *)arg1 ;
@end
