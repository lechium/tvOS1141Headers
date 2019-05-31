/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFManagedStore.h>

@class NSXPCConnection, NSString;

@interface AFManagedStorageConnection : NSObject <AFManagedStore> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_clearConnection;
-(id)_managedStoreServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_managedStoreService;
-(id)domainObjectForKey:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 inKnowledgeStoreWithName:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 inKnowledgeStoreWithName:(id)arg3 ;
-(void)resetKnowledgeStoreWithName:(id)arg1 ;
-(id)_connection;
@end
