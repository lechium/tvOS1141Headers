/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AFSpeechRecognition;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding> {

	AFSpeechRecognition* _recognition;
	AFSpeechRecognition* _rawRecognition;

}

@property (nonatomic,readonly) AFSpeechRecognition * recognition;                 //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,readonly) AFSpeechRecognition * rawRecognition;              //@synthesize rawRecognition=_rawRecognition - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AFSpeechRecognition *)recognition;
-(AFSpeechRecognition *)rawRecognition;
-(id)initWithRecognition:(id)arg1 rawRecognition:(id)arg2 ;
@end

