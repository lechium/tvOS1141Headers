/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject {

	NSData* _screenshotData;

}

@property (nonatomic,readonly) NSData * screenshotData;              //@synthesize screenshotData=_screenshotData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)screenshotData;
@end

