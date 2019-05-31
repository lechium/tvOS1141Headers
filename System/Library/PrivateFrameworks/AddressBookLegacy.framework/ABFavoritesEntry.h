/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABFavoritesEntry : NSObject {

	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;

}
+(void)_runLookup;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)nonLocalizedLabel;
-(void*)ABPerson;
-(int)_abUid;
-(void)recheckAddressBook;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)identifier;
-(int)type;
-(id)value;
-(id)label;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)_unqueueLookup;
-(void)_postEntryChanged;
-(void)_queueLookup;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(int)property;
@end
