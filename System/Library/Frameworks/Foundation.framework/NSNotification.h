/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (copy,readonly) NSString * name; 
@property (retain,readonly) id object; 
@property (copy,readonly) NSDictionary * userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
@end

