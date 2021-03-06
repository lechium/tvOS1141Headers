/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject {

	NSDate* _startTime;
	NSString* _messageName;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * messageName;               //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSString *)messageName;
-(NSDate *)startTime;
-(id)responseHandler;
-(id)initWithMessageName:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
@end

