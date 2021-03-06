/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {

	NSDictionary* _defaultsByDomain;

}
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(BOOL)isAllowedToWriteDefaults;
-(id)defaultsForDomain:(id)arg1 ;
-(id)domains;
-(id)description;
-(id)title;
@end

