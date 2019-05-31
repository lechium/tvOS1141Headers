/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMKTimelapseDiskUtilities : NSObject
+(id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)arg1 ;
+(id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(BOOL)arg2 ;
+(id)timelapseUUIDsOnDisk;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(BOOL)arg2 ;
+(id)timelapseDirectoryPath;
+(id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3 ;
+(BOOL)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(BOOL)arg2 ;
+(id)readFrameFilePathsForTimelapseUUID:(id)arg1 ;
+(id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(BOOL)arg2 ;
+(id)directoryPathForTimelapseUUID:(id)arg1 ;
+(id)readSecondaryStateForTimelapseUUID:(id)arg1 ;
+(BOOL)removeDummyFileForTimelapseUUID:(id)arg1 ;
+(id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1 ;
+(BOOL)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3 ;
+(id)fileNameForImageFrameIndex:(long long)arg1 ;
+(BOOL)hasPendingWork;
+(BOOL)hasPendingIrisWork;
+(id)timelapseDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
+(id)stateFileName;
+(id)stateFilePathForTimelapseUUID:(id)arg1 ;
+(id)secondaryStateFileName;
+(id)secondaryStateFilePathForTimelapseUUID:(id)arg1 ;
+(BOOL)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2 ;
+(long long)frameIndexFromImageFileName:(id)arg1 ;
+(id)dummyFileName;
+(id)dummyFilePathForTimelapseUUID:(id)arg1 ;
@end

