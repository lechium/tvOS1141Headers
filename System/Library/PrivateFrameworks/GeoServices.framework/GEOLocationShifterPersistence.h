/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, GEOSQLiteDB;

@interface GEOLocationShifterPersistence : NSObject {

	NSString* _dbPath;
	GEOSQLiteDB* _db;

}
+(id)sharedPersister;
-(void)tearDown;
-(void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2 ;
-(void)storeResponse:(id)arg1 ;
-(void)findResponseForCoordinate:(SCD_Struct_GE29)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllEntries;
-(id)initWithDBFilePath:(id)arg1 ;
-(BOOL)_setup:(id)arg1 ;
-(void)findExactResponseForCoordinate:(SCD_Struct_GE29)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_findResponseForCoordinate:(SCD_Struct_GE29)arg1 usingStatement:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

