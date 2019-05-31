/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSRecognitionResult : NSObject
+(void)initialize;
+(id)recognitionResultWithModelIdentifier:(id)arg1 classIdentifiers:(id)arg2 values:(id)arg3 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(BOOL)getElementClassIdentifier:(id*)arg1 value:(id*)arg2 atIndex:(long long)arg3 ;
-(id)recognitionResultByReplacingValueForClassIdentifier:(id)arg1 withValue:(id)arg2 ;
-(id)valueOfFirstElementWithClassIdentifier:(id)arg1 ;
-(id)createHandler;
-(void)setRecognitionAction:(id)arg1 ;
-(id)recognitionAction;
-(long long)elementCount;
-(id)modelIdentifier;
@end
