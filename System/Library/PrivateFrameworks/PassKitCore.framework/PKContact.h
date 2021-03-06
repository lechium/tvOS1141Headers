/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, NSString;

@interface PKContact : NSObject <NSSecureCoding> {

	NSPersonNameComponents* _name;
	id _postalAddress;
	id _phoneNumber;
	NSString* _emailAddress;
	NSString* _supplementarySubLocality;

}

@property (nonatomic,retain) NSPersonNameComponents * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id postalAddress;                                 //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,retain) id phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * supplementarySubLocality;              //@synthesize supplementarySubLocality=_supplementarySubLocality - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
-(id)phoneNumber;
-(void)setPhoneNumber:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)name;
-(id)dictionaryRepresentation;
-(NSString *)emailAddress;
-(id)postalAddress;
-(id)cnMutableContact;
-(id)initWithCNContact:(id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPostalAddress:(id)arg1 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSString *)supplementarySubLocality;
-(void)setSupplementarySubLocality:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end

