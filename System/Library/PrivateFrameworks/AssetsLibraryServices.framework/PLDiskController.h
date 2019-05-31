/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLDiskController : NSObject {

	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct {
		unsigned needToCheckDiskSpace : 1;
		unsigned probablyLowOnDiskSpace : 1;
		unsigned isAssetsd : 1;
		unsigned extra : 28;
	}  _flags;

}
+(id)sharedInstance;
+(long long)freeDiskSpaceThreshold;
+(long long)diskSpaceAvailableForUse;
-(id)init;
-(void)dealloc;
-(void)_actuallyUpdateCookie;
-(void)_updateCookie;
-(void)_diskSpaceDidBecomeLow;
-(BOOL)hasEnoughDiskToTakePicture;
-(long long)bytesToAutomaticallyClear;
-(void)updateAvailableDiskSpace;
@end

