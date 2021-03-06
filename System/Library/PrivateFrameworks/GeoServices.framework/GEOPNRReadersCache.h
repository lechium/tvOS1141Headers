/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, GEOPNRCCTrieReader, GEOPNRAccessTrieReader, NSObject;

@interface GEOPNRReadersCache : NSObject {

	NSMutableDictionary* _phNoTries;
	NSMutableDictionary* _stringsFiles;
	GEOPNRCCTrieReader* _ccTrie;
	GEOPNRAccessTrieReader* _accessTrie;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}
+(id)sharedCache;
-(id)phoneNumReaderForCC:(id)arg1 ;
-(id)ccReader;
-(id)accessReader;
-(id)stringsReaderForCC:(id)arg1 ;
-(void)_cleanupOldCacheFiles;
-(id)uncompressedFilePathForCC:(id)arg1 zippedFileExtension:(id)arg2 fileExtension:(id)arg3 ;
-(id)init;
@end

