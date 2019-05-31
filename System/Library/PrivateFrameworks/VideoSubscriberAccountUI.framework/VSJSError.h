/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSError.h>
@class NSString;


@protocol VSJSError <JSExport>
@property (assign,nonatomic) unsigned long long code; 
@property (nonatomic,copy) NSString * message; 
@required
-(void)setCode:(unsigned long long)arg1;
-(id)init;
-(unsigned long long)code;
-(void)setMessage:(id)arg1;
-(NSString *)message;

@end


@class NSString;

@interface VSJSError : IKJSObject <VSJSError> {

	unsigned long long _code;
	NSString* _message;

}

@property (assign,nonatomic) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                     //@synthesize message=_message - In the implementation block
-(void)setCode:(unsigned long long)arg1 ;
-(id)error;
-(id)init;
-(id)description;
-(unsigned long long)code;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

