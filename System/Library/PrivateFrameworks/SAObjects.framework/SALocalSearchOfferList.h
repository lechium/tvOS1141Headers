/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * providerId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)offerList;
+(id)offerListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setOffers:(NSArray *)arg1 ;
-(NSArray *)offers;
@end

