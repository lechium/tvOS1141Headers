/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCaptureDeviceControlRequest : NSObject {

	/*^block*/id _completionBlock;
	int _requestID;
	int _errorCode;

}

@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) int requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) int errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
+(id)deviceControlRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(int)errorCode;
-(void)dealloc;
-(id)completionBlock;
-(int)requestID;
@end

