//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTStorePlatformUtil : NSObject
{
}

+ (id)_offerNameForOfferFlavor:(id)arg1;	// IMP=0x00000001000fdb18
+ (id)_storeOfferDownloadDictionaryForStoreOfferItemDictionary:(id)arg1;	// IMP=0x00000001000fd884
+ (id)_storeDownloadOffersForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000fd6b0
+ (id)_unmodifiedTitleForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000fd5fc
+ (id)_genreNameForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000fd568
+ (id)_storeDownloadArtworkArrayForStoreItemDictionary:(id)arg1;	// IMP=0x00000001000fd3b0
+ (id)storeDownloadDictionaryFromStorePlatformDictionary:(id)arg1;	// IMP=0x00000001000fcf18
+ (id)pubDateFromStoreMediaDictionary:(id)arg1;	// IMP=0x00000001000fcea4
+ (id)dateFromFormattedString:(id)arg1;	// IMP=0x00000001000fce04
+ (id)formatDate:(id)arg1;	// IMP=0x00000001000fcce0
+ (id)encodedQueryStringFromDictionary:(id)arg1;	// IMP=0x00000001000fcaf4
+ (id)stringFromDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000fc9f8
+ (_Bool)isAValue:(id)arg1;	// IMP=0x00000001000fc97c
+ (void)loadTopPodcastsChartsWithCompletionHandler:(CDUnknownBlockType)arg1 withLimit:(unsigned long long)arg2;	// IMP=0x00000001000fc7dc
+ (id)artworkDictionary:(id)arg1 closestToSize:(double)arg2;	// IMP=0x00000001000fc5e4
+ (id)latestEpisodeDictionaryFromPodcastDictionary:(id)arg1;	// IMP=0x00000001000fc428
+ (_Bool)isExplicitForStorePlatformDictionary:(id)arg1;	// IMP=0x00000001000fc340
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 restricted:(_Bool *)arg3 isNotSubscribeable:(_Bool)arg4;	// IMP=0x00000001000fb6a8
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 restricted:(_Bool *)arg3;	// IMP=0x00000001000fb698
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2 isNotSubscribeable:(_Bool)arg3;	// IMP=0x00000001000fb684
+ (id)storeMediaDictionaryFromStorePlatformDictionary:(id)arg1 artworkSize:(double)arg2;	// IMP=0x00000001000fb674

@end

