/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSString, NSDate;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSString* _reason;
	NSDate* _creationDate;

}

@property (nonatomic,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(id)_currentAssertions;
+(id)assertionDescriptions;
+(id)_dateFormatter;
-(NSDate *)creationDate;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
@end

