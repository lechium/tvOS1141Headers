/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPaymentMessage : NSObject <NSSecureCoding> {

	BOOL _allowDeepLink;
	BOOL _hasAssociatedPaymentApplication;
	BOOL _archived;
	NSString* _identifier;
	NSString* _serviceIdentifier;
	NSString* _content;
	NSDate* _messageDate;
	NSDate* _expirationDate;
	unsigned long long _messageType;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                        //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSDate * messageDate;                                //@synthesize messageDate=_messageDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long messageType;                    //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) BOOL allowDeepLink;                                //@synthesize allowDeepLink=_allowDeepLink - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedPaymentApplication;              //@synthesize hasAssociatedPaymentApplication=_hasAssociatedPaymentApplication - In the implementation block
@property (nonatomic,readonly) BOOL archiveOnNextTransaction; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,getter=isArchived,nonatomic) BOOL archived;                   //@synthesize archived=_archived - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentMessageWithDictionary:(id)arg1 ;
-(void)setMessageType:(unsigned long long)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(unsigned long long)messageType;
-(void)setContent:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(NSString *)identifier;
-(NSString *)content;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setAllowDeepLink:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentMessage:(id)arg1 ;
-(BOOL)archiveOnNextTransaction;
-(NSDate *)messageDate;
-(BOOL)allowDeepLink;
-(BOOL)hasAssociatedPaymentApplication;
-(void)setHasAssociatedPaymentApplication:(BOOL)arg1 ;
-(BOOL)isArchived;
-(void)setArchived:(BOOL)arg1 ;
-(NSString *)serviceIdentifier;
@end

