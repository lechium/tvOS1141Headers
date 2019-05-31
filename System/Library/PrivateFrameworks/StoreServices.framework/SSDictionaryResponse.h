/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSNumber * failureType; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (getter=isSupportedProtocolVersion,nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(id)init;
-(NSArray *)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)pingURLs;
-(id)_valueForProtocolKey:(id)arg1 ;
-(id)_copyAccount;
-(id)actionsWithActionType:(id)arg1 ;
-(NSNumber *)failureType;
-(BOOL)isSupportedProtocolVersion;
-(NSURL *)versionMismatchURL;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
@end
