/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICStorePlatformResponse.h>

@class NSNumber, NSDate, NSArray, NSDictionary, NSString;

@interface ICStorePlatformResponse : NSObject <ICStorePlatformResponse> {

	NSNumber* _accountIdentifier;
	NSNumber* _enqueuerAccountIdentifier;
	NSDate* _expirationDate;
	NSArray* _requestedItemIdentifiers;
	NSDictionary* _responseDictionary;
	NSString* _storefrontIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier;              //@synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
-(NSDate *)expirationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURLResponse:(id)arg1 requestedItemIdentifiers:(id)arg2 ;
-(id)initWithResponseDictionary:(id)arg1 requestedItemIdentifiers:(id)arg2 ;
-(void)_enumerateResultDictionariesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)allItems;
-(NSNumber *)accountIdentifier;
-(NSString *)storefrontIdentifier;
-(NSNumber *)enqueuerAccountIdentifier;
-(id)itemForIdentifier:(id)arg1 ;
@end

