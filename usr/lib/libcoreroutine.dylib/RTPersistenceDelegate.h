/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTPersistenceDelegate <NSObject>
@optional
-(void)persistenceStore:(id)arg1 failedWithError:(id)arg2;
-(void)persistenceStore:(id)arg1 encounteredCriticalError:(id)arg2;
-(BOOL)backupPersistenceStore:(id)arg1 error:(id*)arg2;

@required
-(BOOL)store:(id)arg1 validateAppleIDs:(id)arg2;
-(id)appleIDsForStore:(id)arg1;
-(BOOL)prepareStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
-(void)persistenceManagerWillStartResetSync:(id)arg1;
-(void)persistenceManagerDidFinishResetSync:(id)arg1;
-(id)optionsForStoreWithType:(unsigned long long)arg1 error:(id*)arg2;
-(id)mirroringOptionsForStoreWithType:(unsigned long long)arg1;

@end

