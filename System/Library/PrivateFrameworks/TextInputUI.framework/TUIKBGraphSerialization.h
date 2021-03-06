/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputUI/TextInputUI-Structs.h>
@class NSMapTable, NSDictionary, NSData, NSMutableDictionary, NSMutableData;

@interface TUIKBGraphSerialization : NSObject {

	NSMapTable* _serializedOffsets;
	NSDictionary* _keyboardOffsets;
	NSData* _keyboardOffsetsData;
	NSData* _graphData;
	NSData* _serializedData;
	NSMutableDictionary* _minEdgeWidths;
	NSMutableDictionary* _maxEdgeWidths;
	BOOL _disableOffsets;
	NSMutableDictionary* _deserializationCache;

}

@property (nonatomic,readonly) NSMutableData * graphData; 
@property (nonatomic,readonly) NSMutableDictionary * keyboardOffsets; 
@property (nonatomic,retain) NSData * serializedData; 
@property (nonatomic,retain) NSMutableDictionary * deserializationCache;              //@synthesize deserializationCache=_deserializationCache - In the implementation block
-(void)serializeObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)keyboardPrefixForWidth:(float)arg1 andEdge:(BOOL)arg2 ;
-(NSData *)serializedData;
-(NSMutableData *)graphData;
-(void)setSerializedData:(NSData *)arg1 ;
-(NSMutableDictionary *)keyboardOffsets;
-(id)mutableDataForObjectType:(unsigned char)arg1 ;
-(id)dataForFlags:(unsigned char)arg1 ;
-(id)dataForInt:(int)arg1 ;
-(id)dataForFloat:(float)arg1 ;
-(id)dataForReference:(int)arg1 ;
-(id)dataForString:(id)arg1 ;
-(id)dataForArray:(id)arg1 ;
-(id)dataForSet:(id)arg1 ;
-(id)sanitizedDictionary:(id)arg1 ;
-(id)dataForDictionary:(id)arg1 ;
-(id)dataForUIKBValue:(SCD_Struct_TU0)arg1 ;
-(id)dataForGeometry:(id)arg1 ;
-(id)dataForCGRect:(CGRect)arg1 ;
-(id)dataForShape:(id)arg1 ;
-(id)dataForMergeAction:(id)arg1 ;
-(id)dataForUIKBTree:(id)arg1 ;
-(id)dataForOffsetObject:(id)arg1 ;
-(id)dataForObject:(id)arg1 ;
-(void)persistData:(id)arg1 forObject:(id)arg2 ;
-(int)_serializedOffsetForObject:(id)arg1 ;
-(id)_objectAtSerializedOffset:(int)arg1 ;
-(id)keyboardForName:(id)arg1 ;
-(unsigned char)flagsForOffset:(int)arg1 length:(int*)arg2 ;
-(int)intValueForOffset:(int)arg1 length:(int*)arg2 ;
-(float)floatValueForOffset:(int)arg1 length:(int*)arg2 ;
-(id)stringForOffset:(int)arg1 length:(int*)arg2 ;
-(id)arrayForOffset:(int)arg1 length:(int*)arg2 ;
-(id)setForOffset:(int)arg1 length:(int*)arg2 ;
-(id)dictionaryForOffset:(int)arg1 length:(int*)arg2 ;
-(SCD_Struct_TU0)UIKBValueForOffset:(int)arg1 length:(int*)arg2 ;
-(id)geometryForOffset:(int)arg1 length:(int*)arg2 ;
-(CGRect)CGRectForOffset:(int)arg1 length:(int*)arg2 ;
-(id)shapeForOffset:(int)arg1 length:(int*)arg2 ;
-(id)mergeActionForOffset:(int)arg1 length:(int*)arg2 ;
-(id)UIKBTreeForOffset:(int)arg1 length:(int*)arg2 ;
-(id)objectForOffset:(int)arg1 length:(int*)arg2 ;
-(void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(BOOL)arg3 ;
-(NSMutableDictionary *)deserializationCache;
-(void)setDeserializationCache:(NSMutableDictionary *)arg1 ;
@end

