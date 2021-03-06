/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MBFileSystemManager : NSObject {

	BOOL _supportsLocalSnapshots;
	BOOL _supportsSparseFiles;
	NSString* _currentSnapshotPath;
	NSString* _currentSnapshotName;
	NSString* _fileSystemType;

}

@property (nonatomic,retain) NSString * fileSystemType;                     //@synthesize fileSystemType=_fileSystemType - In the implementation block
@property (nonatomic,readonly) BOOL supportsLocalSnapshots;                 //@synthesize supportsLocalSnapshots=_supportsLocalSnapshots - In the implementation block
@property (nonatomic,readonly) BOOL supportsSparseFiles;                    //@synthesize supportsSparseFiles=_supportsSparseFiles - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotPath;              //@synthesize currentSnapshotPath=_currentSnapshotPath - In the implementation block
@property (nonatomic,readonly) NSString * currentSnapshotName;              //@synthesize currentSnapshotName=_currentSnapshotName - In the implementation block
+(id)sharedManager;
+(unsigned long long)fileSystemCapacity;
+(unsigned long long)availableCacheSize;
-(id)init;
-(id)description;
-(BOOL)_fileSystemSupportsSnapshots;
-(BOOL)_fileSystemSupportsSparseFiles;
-(id)_snapshotName:(id)arg1 ;
-(BOOL)snapshotFilesystemWithSnapshotName:(id)arg1 withError:(id*)arg2 ;
-(BOOL)supportsLocalSnapshots;
-(id)listAllSnapshotsWithError:(id*)arg1 ;
-(BOOL)removeSnapshot:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)removeRestorePrefetchCacheWithEarliestDate:(id)arg1 ;
-(BOOL)snapshotFilesystem:(id)arg1 withError:(id*)arg2 ;
-(BOOL)removeAllMobileBackupSnapshots:(id*)arg1 ;
-(BOOL)removeAllMobileBackupInternalSnapshots:(id*)arg1 ;
-(unsigned long long)removeRestorePrefetchCache;
-(BOOL)mountSnapshot:(id)arg1 withError:(id*)arg2 ;
-(BOOL)unmountCurrentSnapshotAndRemove:(BOOL)arg1 withError:(id*)arg2 ;
-(BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(id*)arg1 ;
-(BOOL)supportsSparseFiles;
-(NSString *)currentSnapshotPath;
-(NSString *)currentSnapshotName;
-(NSString *)fileSystemType;
-(void)setFileSystemType:(NSString *)arg1 ;
@end

