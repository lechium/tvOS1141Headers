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

@class NSArray;

@interface TVHKMediaEntityShowsCache : TVHKMediaEntityCache <NSCopying> {

	NSArray* _DAAPShows;

}

@property (nonatomic,copy) NSArray * DAAPShows;                   //@synthesize DAAPShows=_DAAPShows - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shows; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
-(NSArray *)shows;
-(NSArray *)DAAPShows;
-(void)setDAAPShows:(NSArray *)arg1 ;
-(id)showForIdentifier:(id)arg1 ;
@end

