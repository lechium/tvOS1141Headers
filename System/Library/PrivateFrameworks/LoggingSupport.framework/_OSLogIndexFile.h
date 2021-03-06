/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class _OSLogChunkFileReference, _OSLogChunkStore, NSString;

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {

	_OSLogChunkFileReference* _cfr;
	_OSLogChunkStore* _cs;
	unsigned char _bootu[16];
	BOOL _catalogsScanned;
	unsigned long long _et;
	unsigned long long _ot;

}

@property (nonatomic,readonly) const char* bootUUID; 
@property (nonatomic,readonly) unsigned long long oldestTime;              //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                 //@synthesize et=_et - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)endTime;
-(const char*)bootUUID;
-(unsigned long long)oldestTime;
-(id)initWithTraceFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithChunkStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadHeaderMetadata:(id)arg1 ;
-(BOOL)_loadCatalogMetadata;
-(id)copyMappedChunkStore:(id*)arg1 ;
@end

