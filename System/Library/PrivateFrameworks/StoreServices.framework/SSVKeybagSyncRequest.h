/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSVKeybagSyncRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;

}

@property (nonatomic,readonly) NSNumber * accountIdentifier;              //@synthesize accountID=_accountID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

