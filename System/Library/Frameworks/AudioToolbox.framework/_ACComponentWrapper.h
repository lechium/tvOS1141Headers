/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ACComponentWrapper : NSObject <NSSecureCoding> {

	shared_ptr<APComponent>* mComponent;

}
+(BOOL)supportsSecureCoding;
-(id)initWithComponent:(shared_ptr<APComponent>*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

