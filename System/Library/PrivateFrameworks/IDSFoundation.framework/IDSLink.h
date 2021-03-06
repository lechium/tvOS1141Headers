/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * cbuuid; 
@property (retain) NSString * deviceUniqueID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned long long state; 
@property (readonly) unsigned long long headerOverhead; 
@property (__weak) id<IDSLinkDelegate> delegate; 
@property (__weak) id<IDSLinkDelegate> alternateDelegate; 
@optional
-(void)start;

@required
-(id<IDSLinkDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)state;
-(unsigned long long)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
-(id)copyLinkStatsDict;
-(NSString *)cbuuid;
-(void)setCbuuid:(id)arg1;
-(NSString *)deviceUniqueID;
-(NSString *)linkTypeString;
-(unsigned long long)headerOverhead;
-(id<IDSLinkDelegate>)alternateDelegate;
-(void)setAlternateDelegate:(id)arg1;
-(void)setDeviceUniqueID:(id)arg1;

@end

