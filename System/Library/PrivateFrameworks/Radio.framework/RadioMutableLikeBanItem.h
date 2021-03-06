/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioLikeBanItem.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioMutableLikeBanItem : RadioLikeBanItem {

	long long _itemID;

}

@property (assign,nonatomic) long long albumID; 
@property (nonatomic,retain) RadioArtworkCollection * artworkCollection; 
@property (assign,nonatomic) BOOL isSeed; 
@property (assign,nonatomic) long long itemID;                                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) RadioSeedMetadata * seedMetadata; 
@property (assign,nonatomic) long long storeID; 
@property (assign,nonatomic) long long type; 
-(void)setType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(long long)itemID;
-(void)setAlbumID:(long long)arg1 ;
-(void)setIsSeed:(BOOL)arg1 ;
-(void)setSeedMetadata:(RadioSeedMetadata *)arg1 ;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setItemID:(long long)arg1 ;
@end

