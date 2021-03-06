/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {

	C3DLODRef _lod;
	long long _mode;
	SCNGeometry* _geometry;

}

@property (readonly) SCNGeometry * geometry; 
@property (readonly) double screenSpaceRadius; 
@property (readonly) double worldSpaceDistance; 
+(BOOL)supportsSecureCoding;
+(id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2 ;
+(id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2 ;
-(id)copy;
-(SCNGeometry *)geometry;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)__CFObject;
-(long long)thresholdMode;
-(id)thresholdValue;
-(double)screenSpaceRadius;
-(double)worldSpaceDistance;
-(void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(C3DLODRef)arg3 ;
-(void)_customEncodingOfSCNLevelOfDetail:(id)arg1 ;
-(void)_didDecodeSCNLevelOfDetail:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3 ;
@end

