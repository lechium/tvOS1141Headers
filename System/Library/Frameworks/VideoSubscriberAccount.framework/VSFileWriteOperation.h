/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSError;

@interface VSFileWriteOperation : VSAsyncOperation {

	VSOptional* _data;
	VSOptional* _destination;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VSOptional * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) VSOptional * destination;              //@synthesize destination=_destination - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(VSOptional *)data;
-(void)setData:(VSOptional *)arg1 ;
-(VSOptional *)destination;
-(void)setDestination:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

