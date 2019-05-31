/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding> {

	NSNumber* _accountIdentifier;
	NSArray* _attachments;
	BOOL _attributed;
	NSString* _authorIdentifier;
	NSString* _authorType;
	NSArray* _contentItems;
	NSArray* _externalServiceDestinations;
	NSString* _sourceApplicationIdentifier;
	NSString* _text;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                               //@synthesize attachments=_attachments - In the implementation block
@property (assign,getter=isAttributed,nonatomic) BOOL attributed;               //@synthesize attributed=_attributed - In the implementation block
@property (nonatomic,copy) NSString * authorIdentifier;                         //@synthesize authorIdentifier=_authorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * authorType;                               //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSArray * contentItems;                              //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,copy) NSArray * externalServiceDestinations;               //@synthesize externalServiceDestinations=_externalServiceDestinations - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationIdentifier;              //@synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * text;                                     //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAttributed;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSArray *)attachments;
-(NSString *)sourceApplicationIdentifier;
-(void)setAttributed:(BOOL)arg1 ;
-(void)setAuthorIdentifier:(NSString *)arg1 ;
-(void)setAuthorType:(NSString *)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(void)setExternalServiceDestinations:(NSArray *)arg1 ;
-(void)setSourceApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)authorIdentifier;
-(NSString *)authorType;
-(NSArray *)contentItems;
-(NSArray *)externalServiceDestinations;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
@end

