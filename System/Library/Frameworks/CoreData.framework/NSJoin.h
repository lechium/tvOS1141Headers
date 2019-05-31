/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {

	NSString* _sourceAttributeName;
	NSString* _destinationAttributeName;

}
+(id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)sourceAttributeName;
-(id)destinationAttributeName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
