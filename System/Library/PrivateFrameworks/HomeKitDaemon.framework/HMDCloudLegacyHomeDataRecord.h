/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudRecord.h>

@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic,retain) NSData * dataVersion2; 
+(id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)recordType;
-(unsigned long long)objectEncoding;
-(id)extractObjectChange;
-(BOOL)encodeObjectChange:(id)arg1 ;
-(void)clearData;
-(NSData *)dataVersion2;
-(void)setDataVersion2:(NSData *)arg1 ;
@end

