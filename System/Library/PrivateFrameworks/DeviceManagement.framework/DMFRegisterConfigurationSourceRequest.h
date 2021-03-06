/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSXPCListenerEndpoint, DMFStatusReportingRequirements;

@interface DMFRegisterConfigurationSourceRequest : CATTaskRequest {

	NSString* _configurationSourceName;
	NSString* _organizationIdentifier;
	NSString* _machServiceName;
	NSXPCListenerEndpoint* _listenerEndpoint;
	DMFStatusReportingRequirements* _statusReportingRequirements;

}

@property (nonatomic,copy) NSString * configurationSourceName;                                        //@synthesize configurationSourceName=_configurationSourceName - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                                         //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                                                //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) DMFStatusReportingRequirements * statusReportingRequirements;              //@synthesize statusReportingRequirements=_statusReportingRequirements - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(NSString *)machServiceName;
-(NSString *)organizationIdentifier;
-(DMFStatusReportingRequirements *)statusReportingRequirements;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)setStatusReportingRequirements:(DMFStatusReportingRequirements *)arg1 ;
-(void)setConfigurationSourceName:(NSString *)arg1 ;
-(NSString *)configurationSourceName;
@end

