/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface TVHKMediaEntityFetchResponse : NSObject {

	unsigned long long _type;
	unsigned long long _mediaEntitySubtype;
	NSArray* _mediaEntities;
	NSArray* _sortHeaders;
	NSSet* _deletedMediaEntityIdentifiers;

}

@property (assign,nonatomic) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long mediaEntitySubtype;              //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                              //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * sortHeaders;                                //@synthesize sortHeaders=_sortHeaders - In the implementation block
@property (nonatomic,copy) NSSet * deletedMediaEntityIdentifiers;                //@synthesize deletedMediaEntityIdentifiers=_deletedMediaEntityIdentifiers - In the implementation block
-(id)init;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSArray *)mediaEntities;
-(unsigned long long)mediaEntitySubtype;
-(NSArray *)sortHeaders;
-(void)setSortHeaders:(NSArray *)arg1 ;
-(void)setMediaEntitySubtype:(unsigned long long)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(NSSet *)deletedMediaEntityIdentifiers;
-(void)setDeletedMediaEntityIdentifiers:(NSSet *)arg1 ;
@end

