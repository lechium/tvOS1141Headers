/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSXPCListenerEndpoint, NSString;

@interface DMFRegisterUserAgentRequest : CATTaskRequest {

	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _appleID;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                      //@synthesize appleID=_appleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSString *)appleID;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)setAppleID:(NSString *)arg1 ;
@end

