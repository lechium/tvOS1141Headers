/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVHKMediaEntityType : NSObject <NSCopying> {

	unsigned long long _subtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _mediaCollectionType;
	unsigned long long _mediaItemType;

}

@property (assign,nonatomic) unsigned long long subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaItemType;                    //@synthesize mediaItemType=_mediaItemType - In the implementation block
+(id)mediaItemMediaEntityTypeWithMediaItemType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
+(id)mediaCollectionMediaEntityTypeWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
+(id)playlistMediaEntityType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_init;
-(unsigned long long)subtype;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(unsigned long long)mediaItemType;
-(void)setMediaItemType:(unsigned long long)arg1 ;
-(id)stringRepresentation;
-(unsigned long long)mediaCategoryType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(unsigned long long)mediaCollectionType;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
@end
