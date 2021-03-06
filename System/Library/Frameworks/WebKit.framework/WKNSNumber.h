/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSNumber.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {

	int _type;
	SCD_Union_WK190 _number;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(char)charValue;
-(double)doubleValue;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)objCType;
-(void)getValue:(void*)arg1 ;
-(unsigned long long)unsignedLongLongValue;
-(Object*)_apiObject;
@end

