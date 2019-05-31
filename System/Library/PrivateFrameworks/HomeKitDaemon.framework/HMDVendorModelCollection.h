/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, HMDVendorModelEntry;

@interface HMDVendorModelCollection : HMFObject {

	NSMutableArray* _vendorModelCollection;
	HMDVendorModelEntry* _defaultEntry;

}

@property (nonatomic,readonly) NSMutableArray * vendorModelCollection;              //@synthesize vendorModelCollection=_vendorModelCollection - In the implementation block
@property (nonatomic,retain) HMDVendorModelEntry * defaultEntry;                    //@synthesize defaultEntry=_defaultEntry - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)addEntry:(id)arg1 ;
-(NSMutableArray *)vendorModelCollection;
-(HMDVendorModelEntry *)defaultEntry;
-(id)lookupModel:(id)arg1 ;
-(void)setDefaultEntry:(HMDVendorModelEntry *)arg1 ;
@end

