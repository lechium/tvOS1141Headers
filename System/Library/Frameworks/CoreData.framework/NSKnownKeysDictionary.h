/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (nonatomic,readonly) NSKnownKeysMappingStrategy * mapping; 
+(id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)getKeys:(id*)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(const id*)values;
-(void)setValues:(id*)arg1 ;
-(id)initForKeys:(id)arg1 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSKnownKeysMappingStrategy *)mapping;
@end

