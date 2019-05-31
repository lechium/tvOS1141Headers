/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContactPredicate.h>

@class NSString, NSURL;

@interface CNiOSABEKParticipantPredicate : CNPredicate <CNiOSContactPredicate> {

	NSString* _name;
	NSURL* _URL;
	NSString* _emailAddress;
	NSString* _customDescription;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * customDescription;              //@synthesize customDescription=_customDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CFArrayRef)cn_copyPeopleInAddressBook:(void*)arg1 fetchRequest:(id)arg2 matchInfos:(id*)arg3 environment:(id)arg4 error:(_CFError*)arg5 ;
-(BOOL)cn_supportsNativeSorting;
-(BOOL)cn_supportsNativeBatchFetch;
-(BOOL)cn_supportsEncodedFetching;
-(id)cn_cursorForEncodedPeopleFromAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id*)arg4 ;
-(id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4 ;
-(void)setCustomDescription:(NSString *)arg1 ;
-(NSString *)customDescription;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
@end

