/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, NSCopying;
@class NSObject, NSArray;

@interface MPTiledArtworkRequest : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _artworkCatalogsCache;
	long long _artworkCatalogsCacheCount;
	BOOL _allowsSynchronousArtworkCatalogsBlockExecution;
	/*^block*/id _artworkCatalogsBlock;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	double _tileSpacing;
	id<NSCopying> _entityIdentifier;
	id<NSCopying> _namespaceIdentifier;
	id<NSCopying> _revisionIdentifier;

}

@property (nonatomic,copy) id artworkCatalogsBlock;                                            //@synthesize artworkCatalogsBlock=_artworkCatalogsBlock - In the implementation block
@property (assign,nonatomic) BOOL allowsSynchronousArtworkCatalogsBlockExecution;              //@synthesize allowsSynchronousArtworkCatalogsBlockExecution=_allowsSynchronousArtworkCatalogsBlockExecution - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                               //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                                  //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) double tileSpacing;                                               //@synthesize tileSpacing=_tileSpacing - In the implementation block
@property (nonatomic,copy) id<NSCopying> entityIdentifier;                                     //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> namespaceIdentifier;                                  //@synthesize namespaceIdentifier=_namespaceIdentifier - In the implementation block
@property (nonatomic,copy) id<NSCopying> revisionIdentifier;                                   //@synthesize revisionIdentifier=_revisionIdentifier - In the implementation block
-(id)init;
-(unsigned long long)numberOfColumns;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(BOOL)allowsSynchronousArtworkCatalogsBlockExecution;
-(id)artworkCatalogsWithCount:(unsigned long long)arg1 ;
-(id)existingArtworkCatalogsWithCount:(long long)arg1 ;
-(BOOL)hasExistingArtworkCatalogsWithCount:(long long)arg1 ;
-(id)artworkCatalogsBlock;
-(void)setArtworkCatalogsBlock:(id)arg1 ;
-(void)setAllowsSynchronousArtworkCatalogsBlockExecution:(BOOL)arg1 ;
-(double)tileSpacing;
-(void)setTileSpacing:(double)arg1 ;
-(id<NSCopying>)entityIdentifier;
-(void)setEntityIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)namespaceIdentifier;
-(void)setNamespaceIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)revisionIdentifier;
-(void)setRevisionIdentifier:(id<NSCopying>)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
@end

