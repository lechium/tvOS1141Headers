/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloUniverse.h>
@class CLSilo, CLServiceVendor;


@protocol CLIntersiloUniverse <NSObject>
@property (nonatomic,readonly) CLSilo * silo; 
@property (nonatomic,readonly) CLServiceVendor * vendor; 
@required
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;

@end


@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;              //@synthesize vendor=_vendor - In the implementation block
+(id)newIsolatedUniverseWithOnlySilo:(id)arg1 ;
+(id)newSharedVendorUniverseWithSilo:(id)arg1 ;
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;
-(id)initWithKey:(id)arg1 silo:(id)arg2 vendor:(id)arg3 ;
@end

