/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, MDLMatrix4x4Array;

@interface MDLSkeleton : MDLObject <NSCopying> {

	NSString* _name;
	NSArray* _jointPaths;
	MDLMatrix4x4Array* _jointBindTransforms;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                 //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLMatrix4x4Array * jointBindTransforms;              //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
-(NSArray *)jointPaths;
-(MDLMatrix4x4Array *)jointBindTransforms;
@end
