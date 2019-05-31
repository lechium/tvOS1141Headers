/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter {

	void* _person;
	CFArrayRef _properties;

}
+(CFArrayRef)supportedProperties;
-(CFArrayRef)foundProperties;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned)arg2 ;
-(void)dealloc;
-(void*)valueForProperty:(unsigned)arg1 ;
-(id)fullName;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(id)initWithPerson:(void*)arg1 ;
@end

