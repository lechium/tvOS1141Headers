/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(id)init;
-(void)dealloc;
-(id)initReadOnly;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)_initReadOnly:(BOOL)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)arg1 ;
@end

