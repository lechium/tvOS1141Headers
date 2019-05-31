/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeSharing/HomeSharing-Structs.h>
@interface HSResponseDataParser : NSObject
+(id)parseResponseData:(id)arg1 ;
+(id)_parseErrorResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(/*^block*/id)arg2 ;
+(id)_parseResponseCode:(unsigned)arg1 bytes:(const char*)arg2 length:(unsigned long long)arg3 usingHandler:(/*^block*/id)arg4 ;
+(unsigned long long)_parseItemPropertyCountWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(unsigned long long)parseItemWithBytes:(const char*)arg1 length:(unsigned long long)arg2 valuesOut:(SCD_Struct_HS2*)arg3 valuesCapacity:(unsigned long long)arg4 ;
+(void)parseItemWithBytes:(const char*)arg1 length:(unsigned long long)arg2 usingHandler:(/*^block*/id)arg3 ;
+(id)_parseDeletedIDListingWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseLoginResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseItemsResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 usingHandler:(/*^block*/id)arg3 ;
+(id)_parseUpdateResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseAuthorizedAccountTokenWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseCloudArtworkInfoResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseCloudLyricsInfoResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseEditCommandResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseControlInterfacesResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseControlPromptResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parsePlayStatusResponseWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseListingCollectionWithBytes:(const char*)arg1 length:(unsigned long long)arg2 usingHandler:(/*^block*/id)arg3 ;
+(id)_parseDictionaryCollectionWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseUpdateTypeWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseBrowseListingWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)_parseListingItemWithBytes:(const char*)arg1 length:(unsigned)arg2 usingHandler:(/*^block*/id)arg3 ;
+(id)parseErrorInResponseData:(id)arg1 ;
+(void)enumerateItemsInResponseData:(id)arg1 usingHandler:(/*^block*/id)arg2 ;
+(void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(/*^block*/id)arg2 ;
+(id)_parseItemIDArrayWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
@end

