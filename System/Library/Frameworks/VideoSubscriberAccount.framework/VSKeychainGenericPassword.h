/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSString, NSDate, NSNumber;

@interface VSKeychainGenericPassword : VSKeychainItem

@property (nonatomic,copy) NSString * accessGroup; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * itemDescription; 
@property (nonatomic,copy) NSString * comment; 
@property (nonatomic,copy) NSNumber * creatorCode; 
@property (nonatomic,copy) NSNumber * typeCode; 
@property (nonatomic,copy) NSString * label; 
@property (assign,getter=isSynchronizable,nonatomic) BOOL synchronizable; 
@property (assign,getter=isInvisible,nonatomic) BOOL invisible; 
@property (assign,getter=isNegative,nonatomic) BOOL negative; 
@property (nonatomic,copy) NSString * account; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * generic; 
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setNegative:(BOOL)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSNumber *)creatorCode;
-(void)setCreatorCode:(NSNumber *)arg1 ;
-(BOOL)isNegative;
-(id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1 ;
-(void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isSynchronizable;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(BOOL)isInvisible;
-(void)setInvisible:(BOOL)arg1 ;
-(NSNumber *)typeCode;
-(void)setTypeCode:(NSNumber *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)generic;
-(void)setGeneric:(NSString *)arg1 ;
-(void)setSynchronizable:(BOOL)arg1 ;
@end

