/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UNSKeyedDataStoreRepository : NSObject {

	NSString* _directory;
	NSString* _pathExtension;
	long long _maxObjectsPerKey;

}
-(id)allKeys;
-(id)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObjects:(id)arg1 forKey:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)_objectsAtPath:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(BOOL)_saveObjects:(id)arg1 atPath:(id)arg2 ;
-(id)_removeObjectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(void)_setObjects:(id)arg1 atPath:(id)arg2 ;
-(id)addObject:(id)arg1 replaceObjectUsingTest:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(id)_addObject:(id)arg1 replaceObjectUsingTest:(/*^block*/id)arg2 atPath:(id)arg3 ;
-(void)_removeItemAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 pathExtension:(id)arg2 maxObjectsPerKey:(long long)arg3 ;
-(void)removeAllObjectsForKey:(id)arg1 ;
-(id)removeObjectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)removeStoreForKey:(id)arg1 ;
-(void)removeDataStoreRepository;
@end

