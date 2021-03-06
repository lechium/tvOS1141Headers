/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _methodName;
	NSString* _bagKey;
	NSDictionary* _parameters;
	VSAuditToken* _auditToken;

}

@property (nonatomic,copy) NSString * methodName;                    //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                        //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(VSAuditToken *)auditToken;
-(NSString *)bagKey;
-(NSString *)methodName;
-(void)setMethodName:(NSString *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
@end

