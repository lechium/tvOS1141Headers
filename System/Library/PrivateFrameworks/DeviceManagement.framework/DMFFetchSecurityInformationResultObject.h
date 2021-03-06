/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class DMFSecurityInformation, NSDictionary;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject {

	DMFSecurityInformation* _securityInformation;
	NSDictionary* _valuesByPropertyKey;
	NSDictionary* _errorsByPropertyKey;

}

@property (nonatomic,copy,readonly) DMFSecurityInformation * securityInformation;              //@synthesize securityInformation=_securityInformation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * valuesByPropertyKey;                        //@synthesize valuesByPropertyKey=_valuesByPropertyKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * errorsByPropertyKey;                        //@synthesize errorsByPropertyKey=_errorsByPropertyKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)errorsByPropertyKey;
-(NSDictionary *)valuesByPropertyKey;
-(id)initWithValuesByPropertyKey:(id)arg1 errorsByPropertyKey:(id)arg2 ;
-(DMFSecurityInformation *)securityInformation;
-(id)initWithSecurityInformation:(id)arg1 ;
@end

