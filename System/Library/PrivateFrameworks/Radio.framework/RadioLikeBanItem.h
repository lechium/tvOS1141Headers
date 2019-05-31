/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {

	long long _albumID;
	RadioArtworkCollection* _artworkCollection;
	BOOL _isSeed;
	RadioSeedMetadata* _seedMetadata;
	long long _storeID;
	long long _type;

}

@property (nonatomic,readonly) long long albumID;                                       //@synthesize albumID=_albumID - In the implementation block
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,readonly) BOOL isSeed;                                             //@synthesize isSeed=_isSeed - In the implementation block
@property (nonatomic,copy,readonly) RadioSeedMetadata * seedMetadata;                   //@synthesize seedMetadata=_seedMetadata - In the implementation block
@property (nonatomic,readonly) long long storeID;                                       //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
-(id)init;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithItemDictionary:(id)arg1 ;
-(long long)albumID;
-(long long)storeID;
-(RadioSeedMetadata *)seedMetadata;
-(BOOL)isSeed;
-(RadioArtworkCollection *)artworkCollection;
@end

