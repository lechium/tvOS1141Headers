/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOEnvironmentsControllerDelegate;
@class NSArray;

@interface GEOEnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	id<GEOEnvironmentsControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOEnvironmentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(void)reloadEnvironments;
-(void)reloadEnvironments:(/*^block*/id)arg1 ;
-(id)environmentInfosForSection:(long long)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(id<GEOEnvironmentsControllerDelegate>)delegate;
-(void)setDelegate:(id<GEOEnvironmentsControllerDelegate>)arg1 ;
-(void)dealloc;
@end

