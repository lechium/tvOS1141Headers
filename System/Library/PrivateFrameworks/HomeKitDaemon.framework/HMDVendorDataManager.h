/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSURLSession, HMFTimer, NSString;

@interface HMDVendorDataManager : HMFObject <HMFTimerDelegate> {

	NSDictionary* _vendorModelEntries;
	long long _dataVersion;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSURLSession* _urlSession;
	HMFTimer* _fetchTimer;

}

@property (assign,nonatomic) long long dataVersion;                                     //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                               //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSDictionary * vendorModelEntries;                         //@synthesize vendorModelEntries=_vendorModelEntries - In the implementation block
@property (nonatomic,readonly) HMFTimer * fetchTimer;                                   //@synthesize fetchTimer=_fetchTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedVendorDataManager;
+(id)dbURL;
-(long long)dataVersion;
-(void)setDataVersion:(long long)arg1 ;
-(NSURLSession *)urlSession;
-(id)init;
-(void)start;
-(void)timerDidFire:(id)arg1 ;
-(id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(HMFTimer *)fetchTimer;
-(void)_fetchDataFromServer;
-(void)_initWithLocalFile;
-(id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2 ;
-(void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(BOOL)_parseDatabaseFromDictionary:(id)arg1 ;
-(void)_handleData:(id)arg1 fromServerWithError:(id)arg2 ;
-(id)_parseManufacturersList:(id)arg1 ;
-(void)setVendorModelEntries:(NSDictionary *)arg1 ;
-(NSDictionary *)vendorModelEntries;
-(void)_saveToLocalFile:(id)arg1 ;
-(BOOL)_isSameVendorList:(id)arg1 ;
@end

