/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <ATVLegacyContentKit/TVLJSNode.h>

@class TVLXMLSchema, TVLXMLDocument;

@interface TVLJSDocument : TVLJSNode {

	TVLXMLSchema* xmlSchema;

}

@property (nonatomic,retain) TVLXMLSchema * xmlSchema; 
@property (nonatomic,retain,readonly) TVLXMLDocument * xmlDocument; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)documentInContext:(OpaqueJSContextRef)arg1 withDocument:(id)arg2 withSchema:(id)arg3 ;
+(id)documentFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
-(void)dealloc;
-(TVLXMLDocument *)xmlDocument;
-(void)setXmlSchema:(TVLXMLSchema *)arg1 ;
-(TVLXMLSchema *)xmlSchema;
@end

