/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetDownloadStorageManagementPolicy.h>

@class NSString, NSDate;

@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSDate * expirationDate; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)priority;
@end
