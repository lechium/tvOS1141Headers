/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSJSONSerialization : NSObject {

	void** reserved[6];

}
+(long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)isValidJSONObject:(id)arg1 ;
+(id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)init;
@end
