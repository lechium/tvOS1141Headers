/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {

	_OSLogCollectionReference* _oslcr;
	const char* _path;

}
-(void)dealloc;
-(id)initWithCollection:(id)arg1 subpath:(const char*)arg2 ;
-(id)copyMappedChunkFile:(id*)arg1 ;
@end

