/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSArray;

@interface DMFSetDeclarationsRequest : CATTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _syncToken;
	NSArray* _declarations;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * syncToken;                           //@synthesize syncToken=_syncToken - In the implementation block
@property (nonatomic,copy) NSArray * declarations;                         //@synthesize declarations=_declarations - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(NSArray *)declarations;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(void)setDeclarations:(NSArray *)arg1 ;
@end

