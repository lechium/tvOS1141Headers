/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactUpdate.h>

@class CNMultiValuePropertyDescription, CNMultiValueDiff;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate {

	CNMultiValuePropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) CNMultiValuePropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) CNMultiValueDiff * diff;                                 //@synthesize diff=_diff - In the implementation block
-(id)description;
-(CNMultiValueDiff *)diff;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(CNMultiValuePropertyDescription *)property;
@end

