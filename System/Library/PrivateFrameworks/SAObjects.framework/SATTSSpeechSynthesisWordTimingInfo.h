/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long offset; 
@property (nonatomic,copy) NSNumber * sampleIndex; 
@property (assign,nonatomic) float timestamp; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechSynthesisWordTimingInfo;
+(id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(float)timestamp;
-(long long)length;
-(void)setTimestamp:(float)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)setLength:(long long)arg1 ;
-(id)encodedClassName;
-(NSNumber *)sampleIndex;
-(void)setSampleIndex:(NSNumber *)arg1 ;
-(NSString *)word;
-(void)setWord:(NSString *)arg1 ;
@end

