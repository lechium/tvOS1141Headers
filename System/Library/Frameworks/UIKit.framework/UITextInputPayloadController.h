/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputPayloadDelegate;
@class NSArray;

@interface UITextInputPayloadController : NSObject {

	NSArray* _supportedPayloadIds;
	id<UITextInputPayloadDelegate> _payloadDelegate;

}

@property (nonatomic,copy) NSArray * supportedPayloadIds;                                 //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (assign,nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;              //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(NSArray *)supportedPayloadIds;
-(id<UITextInputPayloadDelegate>)payloadDelegate;
-(void)setPayloadDelegate:(id<UITextInputPayloadDelegate>)arg1 ;
@end

