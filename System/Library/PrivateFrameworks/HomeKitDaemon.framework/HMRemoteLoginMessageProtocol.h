/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol HMRemoteLoginMessageProtocol <NSObject,NSSecureCoding>
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@required
+(id)messageName;
+(id)objWithDict:(id)arg1;
+(id)objWithMessage:(id)arg1;
+(id)xpcMessageName;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;

@end

