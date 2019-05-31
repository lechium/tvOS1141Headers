/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class NSMutableArray, NSArray;

@interface PAHIDEvent : NSObject {

	NSMutableArray* _steps;
	unsigned _hidEventType;
	unsigned long long _hidEventMachAbs;
	double _hidEventTimestamp;

}

@property (readonly) unsigned long long hidEventMachAbs;              //@synthesize hidEventMachAbs=_hidEventMachAbs - In the implementation block
@property (readonly) double hidEventTimestamp;                        //@synthesize hidEventTimestamp=_hidEventTimestamp - In the implementation block
@property (readonly) unsigned hidEventType;                           //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) NSArray * steps;                                 //@synthesize steps=_steps - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)hidEventWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
+(void)parseKTrace:(ktrace_sessionRef)arg1 findingHIDEvents:(/*^block*/id)arg2 ;
-(NSArray *)steps;
-(id)debugDescription;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithHIDEventType:(unsigned)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3 ;
-(void)addKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(double)hidEventTimestamp;
-(unsigned long long)hidEventMachAbs;
-(unsigned)hidEventType;
-(id)initWithSerializedHIDEvent:(const SCD_Struct_PA8*)arg1 ;
@end
