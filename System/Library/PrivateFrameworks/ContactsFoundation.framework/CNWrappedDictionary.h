/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface CNWrappedDictionary : NSDictionary {

	NSDictionary* _underlyingDictionary;

}
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
@end
