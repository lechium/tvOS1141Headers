/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNVCardWriting : NSObject
+(id)stringWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)serializePerson:(id)arg1 withSerializer:(id)arg2 options:(id)arg3 ;
+(id)dataWithPerson:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)blacklistedMeCardFields;
+(id)blacklistFieldsForPerson:(id)arg1 options:(id)arg2 ;
+(id)scopeForPerson:(id)arg1 options:(id)arg2 ;
+(void)makevCardWithBuilder:(id)arg1 serializer:(id)arg2 options:(id)arg3 ;
+(id)stringWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)dataWithPeople:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end
