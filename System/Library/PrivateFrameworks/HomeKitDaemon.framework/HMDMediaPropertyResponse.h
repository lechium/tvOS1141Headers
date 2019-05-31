/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSError, NSNumber, NSDate;

@interface HMDMediaPropertyResponse : HMFObject {

	HMDMediaPropertyRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDMediaPropertyRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                         //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                      //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(NSArray*)responsesFromSerializedResponse:(NSDictionary*)arg1 requests:(id)arg2 home:(id)arg3 ;
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2 ;
+(NSDictionary*)serializeResponses:(id)arg1 ;
+(id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
+(NSArray*)groupedProfileResponses:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(HMDMediaPropertyRequest *)request;
-(void)setValue:(id)arg1 ;
-(id)value;
-(NSNumber *)stateNumber;
-(NSDate *)valueUpdatedTime;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
@end

