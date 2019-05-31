/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, NSUUID;

@interface CSUserAction : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	NSString* _contentAction;
	NSDictionary* _userInfo;
	NSSet* _keywords;
	unsigned long long _eligibility;
	NSUUID* _uaIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpc_dictionary; 
@property (copy) NSString * itemIdentifier;                                          //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * contentAction;                                           //@synthesize contentAction=_contentAction - In the implementation block
@property (retain) NSDictionary * userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSSet * keywords;                                                 //@synthesize keywords=_keywords - In the implementation block
@property (assign) unsigned long long eligibility;                                   //@synthesize eligibility=_eligibility - In the implementation block
@property (nonatomic,retain) NSUUID * uaIdentifier;                                  //@synthesize uaIdentifier=_uaIdentifier - In the implementation block
+(id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_propertiesDescription;
-(NSString *)contentAction;
-(unsigned long long)eligibility;
-(NSUUID *)uaIdentifier;
-(void)setContentAction:(NSString *)arg1 ;
-(void)setEligibility:(unsigned long long)arg1 ;
-(void)setUaIdentifier:(NSUUID *)arg1 ;
-(NSObject*<OS_xpc_object>)xpc_dictionary;
-(id)initWithXPCDict:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setKeywords:(NSSet *)arg1 ;
-(NSSet *)keywords;
@end

