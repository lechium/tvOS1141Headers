/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBWebsiteDataRecord : NSObject {

	NSString* _domain;
	unsigned long long _usage;

}

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> XPCDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                                                 //@synthesize usage=_usage - In the implementation block
+(id)websiteDataRecordWithDomain:(id)arg1 ;
+(id)websiteDataRecordFromXPCDictionary:(id)arg1 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(NSString *)domain;
-(id)_initWithDomain:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 ;
-(NSObject*<OS_xpc_object>)XPCDictionaryRepresentation;
-(unsigned long long)usage;
@end
