/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceClientState.h>

@class SACalendar, NSString;

@interface SADynamiteClientState : SAAceClientState

@property (nonatomic,retain) SACalendar * expirationDate; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,copy) NSString * xpAbCookie; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setExpirationDate:(SACalendar *)arg1 ;
-(SACalendar *)expirationDate;
-(id)groupIdentifier;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)status;
-(id)encodedClassName;
-(NSString *)xpAbCookie;
-(void)setXpAbCookie:(NSString *)arg1 ;
-(void)setUserToken:(NSString *)arg1 ;
-(NSString *)userToken;
@end

