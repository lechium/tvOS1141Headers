/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CUINamedData, NSString, NSData;

@interface NSDataAsset : NSObject <NSCopying> {

	CUINamedData* _namedData;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)typeIdentifier;
-(id)initWithName:(id)arg1 ;
@end

