/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject*<OS_dispatch_queue> _writerQueue;

}
+(id)sharedInstance;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(void)performBlockOnWriterQueue:(/*^block*/id)arg1 ;
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 exists:(BOOL*)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_performOnWriterQueueWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
@end

