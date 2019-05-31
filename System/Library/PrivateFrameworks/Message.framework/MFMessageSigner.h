/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, NSArray, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	SecTrustRef _trust;
	NSString* _sender;
	NSString* _uncommentedSender;

}

@property (nonatomic,readonly) NSString * sender;                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSString * commonName; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) int action; 
@property (nonatomic,readonly) NSArray * certificates; 
@property (nonatomic,readonly) MFError * error; 
-(MFError *)error;
-(void)dealloc;
-(int)action;
-(NSString *)sender;
-(id)initWithSender:(id)arg1 trust:(SecTrustRef)arg2 verification:(int)arg3 ;
-(NSString *)commonName;
-(SecTrustRef)copyTrust;
-(void)addTrustException;
-(void)removeTrustException;
-(BOOL)hasTrustException;
-(NSArray *)certificates;
-(NSString *)emailAddress;
@end

