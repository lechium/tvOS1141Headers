/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloServiceProtocol.h>
#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, CLIntersiloInterface, NSString;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;
	BOOL _valid;
	CLIntersiloInterface* _inboundInterface;
	CLIntersiloInterface* _outboundInterface;

}

@property (nonatomic,readonly) id<CLIntersiloUniverse> universe; 
@property (nonatomic,readonly) CLIntersiloInterface * inboundInterface;               //@synthesize inboundInterface=_inboundInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * outboundInterface;              //@synthesize outboundInterface=_outboundInterface - In the implementation block
@property (assign,nonatomic) BOOL valid;                                              //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;                              //@synthesize vendor=_vendor - In the implementation block
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(BOOL)isSupported;
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 ;
-(id<CLIntersiloUniverse>)universe;
-(CLIntersiloInterface *)inboundInterface;
-(CLIntersiloInterface *)outboundInterface;
-(void)setSilo:(CLSilo *)arg1 ;
-(void)setVendor:(CLServiceVendor *)arg1 ;
-(BOOL)isHydrated;
-(id)init;
-(NSString *)debugDescription;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
@end
