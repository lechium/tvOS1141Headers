/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject> {

	ObjectStorage<API::ExperimentalFeature> _experimentalFeature;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * details; 
@property (nonatomic,readonly) BOOL defaultValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(NSString *)details;
-(NSString *)key;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(BOOL)defaultValue;
-(Object*)_apiObject;
@end
