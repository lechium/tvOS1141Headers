/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TimeSync/TimeSync-Structs.h>
@class NSMutableArray;

@interface TSClockManager : NSObject {

	unsigned _connection;
	NSMutableArray* _clockPersonalities;
	mach_timebase_info _timebaseInfo;
	unsigned long long _machAbsoluteNanosecondClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long machAbsoluteNanosecondClockIdentifier;              //@synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier - In the implementation block
+(id)sharedClockManager;
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)clockManager;
+(id)defaultClockPersonalities;
+(id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1 ;
+(id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1 ;
+(id)diagnosticDescriptionForClockService:(unsigned)arg1 withIndent:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)addgPTPServicesWithError:(id*)arg1 ;
-(BOOL)removegPTPServicesWithError:(id*)arg1 ;
-(BOOL)getMachAbsoluteClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(void)addClockPersonality:(id)arg1 ;
-(void)removeClockPersonality:(id)arg1 ;
-(BOOL)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)availableClockIdentifiers;
-(id)clockWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1 ;
-(unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1 ;
-(unsigned long long)machAbsoluteNanosecondClockIdentifier;
@end

