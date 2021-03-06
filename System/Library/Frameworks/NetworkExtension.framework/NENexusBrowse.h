/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWBrowseDescriptor, NWParameters, NSUUID;

@interface NENexusBrowse : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NWBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) NWParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(NSUUID *)clientIdentifier;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(void)setDescriptor:(NWBrowseDescriptor *)arg1 ;
-(NWBrowseDescriptor *)descriptor;
@end

