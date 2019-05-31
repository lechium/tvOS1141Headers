/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSNumber, NSDate;

@interface FAFamilyMember : NSObject <NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * appleID; 
@property (nonatomic,copy,readonly) NSNumber * dsid; 
@property (nonatomic,copy,readonly) NSString * hashedDSID; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,readonly) unsigned long long age; 
@property (nonatomic,copy,readonly) NSString * memberTypeDisplayString; 
@property (nonatomic,copy,readonly) NSString * memberTypeString; 
@property (nonatomic,copy,readonly) NSDate * joinedDate; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * inviteEmail; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) BOOL hasParentalControlsEnabled; 
@property (nonatomic,readonly) BOOL hasAskToBuyEnabled; 
@property (nonatomic,readonly) BOOL isParent; 
@property (nonatomic,readonly) BOOL hasLinkediTunesAccount; 
@property (nonatomic,readonly) NSNumber * iTunesAccountDSID; 
@property (nonatomic,copy,readonly) NSString * iTunesAccountUsername; 
+(BOOL)supportsSecureCoding;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)age;
-(BOOL)isMe;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionary;
-(NSString *)statusString;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isChildAccount;
-(NSString *)hashedDSID;
-(NSString *)memberTypeString;
-(BOOL)hasParentalControlsEnabled;
-(BOOL)isParent;
-(NSString *)memberTypeDisplayString;
-(NSDate *)joinedDate;
-(NSString *)inviteEmail;
-(BOOL)hasAskToBuyEnabled;
-(NSNumber *)iTunesAccountDSID;
-(NSString *)iTunesAccountUsername;
-(BOOL)hasLinkediTunesAccount;
-(void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSNumber *)dsid;
@end

