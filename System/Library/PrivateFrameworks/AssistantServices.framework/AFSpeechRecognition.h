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

@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _phrases;
	NSArray* _utterances;

}

@property (nonatomic,copy,readonly) NSArray * phrases;                 //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy,readonly) NSArray * utterances;              //@synthesize utterances=_utterances - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeOneBestFromPhrases:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)phrases;
-(id)initWithPhrases:(id)arg1 ;
-(NSArray *)utterances;
-(id)initWithPhrases:(id)arg1 utterances:(id)arg2 ;
-(id)aceRecognition;
@end

