/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPNondurableMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, MPStoreOfferContentRating, MPStoreOfferMediaItemArtworkDescriptor;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying> {

	NSDictionary* _lookupCollectionPropertyValues;
	NSNumber* _itemID;
	long long _preferredStoreOfferVariant;
	MPStoreOfferContentRating* _contentRating;
	MPStoreOfferMediaItemArtworkDescriptor* _offerArtworkDescriptor;
	long long _offerArtworkDescriptorOnceToken;
	id _pid;
	id _discNumber;
	id _trackNumber;
	id _title;

}
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)defaultPropertyValues;
+(BOOL)canRequestStoreOfferForLocalMediaItems:(id)arg1 ;
+(BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 mediaProperty:(id)arg3 ;
+(id)contentRatingForCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(BOOL)canMergeStoreOfferWithLocalMediaItems:(id)arg1 ;
+(id)offerArtworkDescriptorForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemID:(id)arg2 ;
+(id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 ;
+(id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2 ;
+(id)mediaItemsByRemovingRestrictedContentFromMediaItems:(id)arg1 ;
+(id)preferredAssetDictionaryInOfferDictionary:(id)arg1 ;
+(id)collectionLookupKeyForMediaProperty:(id)arg1 ;
+(id)itemLookupKeyForMediaProperty:(id)arg1 ;
+(id)offerLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1 ;
+(id)assetLookupKeyForItemMediaProperty:(id)arg1 ;
+(id)localRepresentativeItemPropertyForMediaProperty:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(unsigned long long)discNumber;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)persistentID;
-(id)mediaLibrary;
-(id)offerArtworkDescriptor;
-(id)screenshotArtworkCatalog;
-(long long)preferredStoreOfferVariant;
-(id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3 ;
-(id)buyOfferForVariant:(long long)arg1 ;
-(BOOL)_offeredItemAlreadyExists;
-(id)_lookupOfferDictionaries;
-(BOOL)isDownloadable;
@end

