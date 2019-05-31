/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVServices/TVServices-Structs.h>
@class NSString;

@interface TVSNetworkInterface : NSObject {

	SCNetworkServiceRef _serviceRef;
	SCNetworkInterfaceRef _interfaceRef;
	BOOL _active;
	BOOL _hasChanges;
	NSString* _name;
	NSString* _IPAddress;
	NSString* _hardwareAddress;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * hardwareAddress;                   //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * IPAddress;                //@synthesize IPAddress=_IPAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges;                          //@synthesize hasChanges=_hasChanges - In the implementation block
+(BOOL)_supportsInterface:(SCNetworkInterfaceRef)arg1 ;
+(id)_interfaceType;
+(id)preferredInterface;
-(id)init;
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)hasChanges;
-(void)_setNeedsUpdate;
-(id)_initWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(NSString *)hardwareAddress;
-(void)_updateWithServiceRef:(SCNetworkServiceRef)arg1 interfaceRef:(SCNetworkInterfaceRef)arg2 ;
-(BOOL)_commitChangesWithServiceRef:(SCNetworkServiceRef)arg1 ;
-(void)_objectDidChange;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(void)_discardChanges;
-(void)commitChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)discardChanges;
-(NSString *)IPAddress;
@end
