/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface C3DBinding : NSObject {

	id sourceObject;
	NSString* keyPathSrc;
	NSString* keyPathDst;
	NSDictionary* options;

}

@property (nonatomic,retain) id sourceObject; 
@property (nonatomic,retain) NSString * keyPathSrc; 
@property (nonatomic,retain) NSString * keyPathDst; 
@property (nonatomic,retain) NSDictionary * options; 
-(void)dealloc;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)sourceObject;
-(void)setSourceObject:(id)arg1 ;
-(void)setKeyPathDst:(NSString *)arg1 ;
-(void)setKeyPathSrc:(NSString *)arg1 ;
-(NSString *)keyPathSrc;
-(NSString *)keyPathDst;
@end

