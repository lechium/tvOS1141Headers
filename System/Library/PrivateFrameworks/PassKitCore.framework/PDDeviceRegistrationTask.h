/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject {

	NSMutableArray* _completionHandlers;
	NSString* _reason;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
-(id)init;
-(NSString *)reason;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end
