//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class TVCKDataClient, TVCKDataQuery, TVSiCloudAccountManager, UIView;

@interface TVPDataQueryController : UIViewController
{
    _Bool _showLaunchImageOnLoad;	// 8 = 0x8
    id _serverID;	// 16 = 0x10
    TVCKDataQuery *_dataQuery;	// 24 = 0x18
    unsigned long long _dataClientType;	// 32 = 0x20
    TVCKDataClient *_dataClient;	// 40 = 0x28
    TVCKDataQuery *_preDataQuery;	// 48 = 0x30
    TVCKDataQuery *_previewDataQuery;	// 56 = 0x38
    TVSiCloudAccountManager *_accountManager;	// 64 = 0x40
    UIView *_loadingView;	// 72 = 0x48
}

@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) TVCKDataQuery *previewDataQuery; // @synthesize previewDataQuery=_previewDataQuery;
@property(retain, nonatomic) TVCKDataQuery *preDataQuery; // @synthesize preDataQuery=_preDataQuery;
@property(retain, nonatomic) TVCKDataClient *dataClient; // @synthesize dataClient=_dataClient;
@property(nonatomic) unsigned long long dataClientType; // @synthesize dataClientType=_dataClientType;
@property(retain, nonatomic) TVCKDataQuery *dataQuery; // @synthesize dataQuery=_dataQuery;
@property(nonatomic) _Bool showLaunchImageOnLoad; // @synthesize showLaunchImageOnLoad=_showLaunchImageOnLoad;
@property(nonatomic) id serverID; // @synthesize serverID=_serverID;
- (void).cxx_destruct;	// IMP=0x000000010002b494
- (void)previewQueryComplete:(id)arg1;	// IMP=0x000000010002b358
- (void)dataQueryComplete:(id)arg1;	// IMP=0x000000010002b354
- (_Bool)updateWithDataClientNotification:(id)arg1;	// IMP=0x000000010002b34c
- (void)dataClientConnectionFailed;	// IMP=0x000000010002b340
- (void)dataClientConnected;	// IMP=0x000000010002b33c
- (id)newPreviewDataQuery;	// IMP=0x000000010002b334
- (id)newDataQuery;	// IMP=0x000000010002b32c
- (_Bool)isQueryResultValid:(id)arg1;	// IMP=0x000000010002b2d8
- (void)_removeLoadingView;	// IMP=0x000000010002b28c
- (void)_connectDataClient;	// IMP=0x000000010002b170
- (void)_dataQueryComplete:(id)arg1;	// IMP=0x000000010002b108
- (void)setDataClientForUpdateNotifications;	// IMP=0x000000010002b070
- (void)dataClientDataUpdated:(id)arg1;	// IMP=0x000000010002b064
- (void)dataClientDidChangeStatus:(id)arg1;	// IMP=0x000000010002afa8
- (void)dataClientWillChangeStatus:(id)arg1;	// IMP=0x000000010002afa4
@property(readonly, nonatomic) _Bool isProcessingQuery;
- (void)executePreviewQuery;	// IMP=0x000000010002ad38
- (void)executeDataQuery;	// IMP=0x000000010002ab44
- (void)connectDataClient;	// IMP=0x000000010002a8ac
- (void)showLoadingSpinnerView;	// IMP=0x000000010002a734
- (void)removePhotoStreamEmptyView;	// IMP=0x000000010002a5a4
- (void)displayPhotoStreamEmptyView;	// IMP=0x000000010002a3f8
- (void)dealloc;	// IMP=0x000000010002a380
- (id)initWithDataClient:(id)arg1 dataClientOfType:(unsigned long long)arg2;	// IMP=0x000000010002a244
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002a208

@end

