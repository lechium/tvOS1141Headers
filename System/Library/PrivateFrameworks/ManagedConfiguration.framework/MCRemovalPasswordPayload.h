/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {

	NSString* _removalPasscode;

}

@property (nonatomic,retain) NSString * removalPasscode;              //@synthesize removalPasscode=_removalPasscode - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSString *)removalPasscode;
-(void)setRemovalPasscode:(NSString *)arg1 ;
@end

