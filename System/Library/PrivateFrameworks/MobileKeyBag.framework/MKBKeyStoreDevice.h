/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKBKeyStoreDevice : NSObject
+(id)sharedService;
-(int)passcodeUnlockStart;
-(int)passcodeUnlockSuccess;
-(int)passcodeUnlockFailed;
-(BOOL)getDeviceLockStateForUser:(int)arg1 extendedState:(BOOL)arg2 withLockStateInfo:(int*)arg3 ;
-(id)getLockStateForUser:(int)arg1 ;
-(int)stashCreateWithSecret:(id)arg1 withMode:(int)arg2 ;
-(int)stashCommit;
-(int)stashDestroy;
-(int)stashVerifywithValidity:(int*)arg1 ;
-(id)stashLoad;
-(int)changeSystemSecretFromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueData:(id)arg3 ;
-(id)copySytemSecretBlob;
-(int)registerOTABackup:(id)arg1 withSecret:(id)arg2 ;
-(int)ChangeSystemSecretWithEscrow:(id)arg1 FromOldPasscode:(id)arg2 ToNew:(id)arg3 withOpaqueDats:(id)arg4 withKeepState:(int)arg5 ;
-(int)startBackupSession;
-(int)stopBackupSession;
-(int)changeClassKeysGenerationWithSecret:(id)arg1 withGenerationOption:(int)arg2 ;
-(int)isKeyRollingWithKeyStatus:(int*)arg1 ;
-(int)migrateFS;
-(id)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 withreturnValue:(int*)arg2 ;
-(id)listAllUserSessionIDSWithReturnedError:(id*)arg1 ;
-(id)loadUserSession:(id)arg1 withSecret:(id)arg2 withreturnedError:(id*)arg3 ;
-(BOOL)unloadUserSession:(id)arg1 withreturnedError:(id*)arg2 ;
-(id)createUserSession:(id)arg1 withSecret:(id)arg2 withOpaqueData:(id)arg3 withreturnedError:(id*)arg4 ;
-(id)migrateUserSession:(id)arg1 fromPath:(id)arg2 withSecret:(id)arg3 withOpaqueData:(id)arg4 withreturnedError:(id*)arg5 ;
-(BOOL)removeUserSession:(id)arg1 withreturnedError:(id*)arg2 ;
-(id)retriveUserSessionBlobWithreturnedError:(id*)arg1 ;
-(BOOL)deleteUserSessionBlobWithReturnedError:(id*)arg1 ;
-(id)userSessionAttributesForSession:(id)arg1 WithReturnedError:(id*)arg2 ;
-(id)setuserSessionAttributes:(id)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)switchUserSession:(id)arg1 withOpaqueData:(id)arg2 withreturnedError:(id*)arg3 ;
-(BOOL)setUserSessionSecureBackupBlob:(id)arg1 WithReturnedError:(id*)arg2 ;
-(id)retriveUserSessionSecureBlobWithreturnedError:(id*)arg1 ;
-(BOOL)deleteUserSessionSecureBlobWithReturnedError:(id*)arg1 ;
-(BOOL)setUserSessionDeviceConfigurations:(int)arg1 WithReturnedError:(id*)arg2 ;
-(id)configureLoginUI:(int)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)switchToLoginUIWithReturnedError:(id*)arg1 ;
-(id)foregroundUserSessionAtrributesWithReturnedError:(id*)arg1 ;
-(int)currentSyncBubbledIDWithReturnedError:(id*)arg1 ;
-(BOOL)addSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3 ;
-(BOOL)removeSyncServiceSource:(id)arg1 ToUserSessionWithID:(int)arg2 WithReturnedError:(id*)arg3 ;
-(BOOL)startUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)stopUserSyncBubbleToSession:(int)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)MKBUserSessionSetInternalTest:(BOOL)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)mountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2 ;
-(BOOL)unmountUserSessionVolumeforID:(int)arg1 WithReturnedError:(id*)arg2 ;
-(id)listSyncServiceSourcesForUserSession:(id)arg1 WithReturnedError:(id*)arg2 ;
-(id)listAllUserSyncBubbleIDsWithReturnedError:(id*)arg1 ;
-(BOOL)removeAllUserSyncBubbleIDsWithReturnedError:(id*)arg1 ;
-(id)userSessionLRUInfoWithReturnedError:(id*)arg1 ;
-(id)switchBlockTasksInfoWithReturnedError:(id*)arg1 ;
-(int)limitNumberOfUserSessionsTo:(int)arg1 WithReturnedError:(id*)arg2 ;
-(id)_CreateMKBServerConnection;
-(id)getFileHandleForData:(id)arg1 ;
@end

