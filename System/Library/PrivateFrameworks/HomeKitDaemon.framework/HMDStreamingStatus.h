/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDStreamingStatus : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	unsigned long long _streamingStatus;

}

@property (nonatomic,readonly) unsigned long long streamingStatus;              //@synthesize streamingStatus=_streamingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)streamingStatus;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
@end

