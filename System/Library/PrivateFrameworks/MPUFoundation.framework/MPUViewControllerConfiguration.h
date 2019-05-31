/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUDataSourceConfiguration;

@interface MPUViewControllerConfiguration : NSObject {

	BOOL _wantsModalPresentation;
	BOOL _wantsNavigationController;
	Class _cellConfigurationClass;
	Class _viewControllerClass;
	MPUDataSourceConfiguration* _dataSourceConfiguration;
	/*^block*/id _configurationBlock;
	Class _navigationControllerClass;

}

@property (nonatomic,readonly) Class cellConfigurationClass;                                    //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;                                       //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
@property (nonatomic,retain) MPUDataSourceConfiguration * dataSourceConfiguration;              //@synthesize dataSourceConfiguration=_dataSourceConfiguration - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                               //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (assign,nonatomic) BOOL wantsModalPresentation;                                       //@synthesize wantsModalPresentation=_wantsModalPresentation - In the implementation block
@property (assign,nonatomic) BOOL wantsNavigationController;                                    //@synthesize wantsNavigationController=_wantsNavigationController - In the implementation block
@property (nonatomic,retain) Class navigationControllerClass;                                   //@synthesize navigationControllerClass=_navigationControllerClass - In the implementation block
+(id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
+(id)configurationWithViewControllerClass:(Class)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(Class)viewControllerClass;
-(id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)initWithViewControllerClass:(Class)arg1 ;
-(Class)cellConfigurationClass;
-(MPUDataSourceConfiguration *)dataSourceConfiguration;
-(void)setDataSourceConfiguration:(MPUDataSourceConfiguration *)arg1 ;
-(BOOL)wantsModalPresentation;
-(void)setWantsModalPresentation:(BOOL)arg1 ;
-(BOOL)wantsNavigationController;
-(void)setWantsNavigationController:(BOOL)arg1 ;
-(Class)navigationControllerClass;
-(void)setNavigationControllerClass:(Class)arg1 ;
@end

