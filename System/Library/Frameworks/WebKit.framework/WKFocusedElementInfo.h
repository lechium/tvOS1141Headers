/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFocusedElementInfo.h>

@class NSString;

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {

	long long _type;
	RetainPtr<NSString>* _value;
	BOOL _isUserInitiated;
	RetainPtr<NSObject<NSSecureCoding> >* _userObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
-(long long)type;
-(NSString *)value;
-(NSObject*<NSSecureCoding>)userObject;
-(id)initWithAssistedNodeInformation:(const AssistedNodeInformation*)arg1 isUserInitiated:(BOOL)arg2 userObject:(id)arg3 ;
-(BOOL)isUserInitiated;
@end

