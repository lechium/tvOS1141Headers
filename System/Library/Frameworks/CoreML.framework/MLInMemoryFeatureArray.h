/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLFeatureArray.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MLInMemoryFeatureArray : MLFeatureArray <NSCopying> {

	NSArray* _values;

}

@property (readonly) NSArray * valueArray;              //@synthesize values=_values - In the implementation block
+(id)featureArrayWithArray:(id)arg1 error:(id*)arg2 ;
+(id)convertToFeatureValues:(id)arg1 ofType:(long long)arg2 error:(id*)arg3 ;
+(id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_ML33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFeatureValues:(id)arg1 ;
-(NSArray *)valueArray;
@end

