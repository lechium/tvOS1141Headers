/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNGroup, CNChangeHistoryAnchor;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding> {

	NSString* _groupIdentifier;
	long long _changeType;
	CNGroup* _group;
	CNChangeHistoryAnchor* _changeAnchor;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNGroup * group;                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)groupIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setGroup:(CNGroup *)arg1 ;
-(CNGroup *)group;
-(CNChangeHistoryAnchor *)changeAnchor;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
@end

