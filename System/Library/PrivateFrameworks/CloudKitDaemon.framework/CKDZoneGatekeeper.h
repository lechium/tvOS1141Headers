/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject {

	NSMutableDictionary* _zoneIDsToGateHolders;
	NSMutableArray* _waiterWrappers;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDsToGateHolders;              //@synthesize zoneIDsToGateHolders=_zoneIDsToGateHolders - In the implementation block
@property (nonatomic,retain) NSMutableArray * waiterWrappers;                         //@synthesize waiterWrappers=_waiterWrappers - In the implementation block
-(id)init;
-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(NSMutableDictionary *)zoneIDsToGateHolders;
-(NSMutableArray *)waiterWrappers;
-(void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)relinquishLocksForWaiter:(id)arg1 ;
-(void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg1 ;
-(void)setWaiterWrappers:(NSMutableArray *)arg1 ;
@end

