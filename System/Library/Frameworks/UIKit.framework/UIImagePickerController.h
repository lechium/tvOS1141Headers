/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSObject, UIViewController, NSExtension, NSString, UIView;

@interface UIImagePickerController : UINavigationController <NSCoding> {

	long long _sourceType;
	id _image;
	CGRect _cropRect;
	NSArray* _mediaTypes;
	NSMutableDictionary* _properties;
	int _previousStatusBarStyle;
	BOOL _previousStatusBarHidden;
	NSObject*<OS_dispatch_queue> _photosExtensionDiscoveryQueue;
	Class _photoPickerRequestOptionsClass;
	/*^block*/id _photoPickerDisplayCompletion;
	/*^block*/id _photoPickerPreviewDisplayCompletion;
	BOOL _photoPickerDidStartDelayingPresentation;
	BOOL _photoPickerDidEndDelayingPresentation;
	BOOL _photoPickerIsPreheating;
	UIViewController* _photoPickerPreheatedViewController;
	SCD_Struct_UI47 _imagePickerFlags;
	unsigned long long _savingOptions;
	NSExtension* _photosExtension;
	id _photosExtensionDiscoveryDriver;
	NSString* _initialViewControllerClassName;

}

@property (nonatomic,retain) NSExtension * photosExtension;                                                                    //@synthesize photosExtension=_photosExtension - In the implementation block
@property (nonatomic,retain) id photosExtensionDiscoveryDriver;                                                                //@synthesize photosExtensionDiscoveryDriver=_photosExtensionDiscoveryDriver - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> photosExtensionDiscoveryQueue; 
@property (nonatomic,copy) NSString * initialViewControllerClassName;                                                          //@synthesize initialViewControllerClassName=_initialViewControllerClassName - In the implementation block
@property (nonatomic,readonly) Class photoPickerRequestOptionsClass; 
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSArray * mediaTypes; 
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL allowsImageEditing; 
@property (assign,nonatomic) long long imageExportPreset; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) long long videoQuality; 
@property (nonatomic,copy) NSString * videoExportPreset; 
@property (assign,nonatomic) BOOL showsCameraControls; 
@property (nonatomic,retain) UIView * cameraOverlayView; 
@property (assign,nonatomic) CGAffineTransform cameraViewTransform; 
@property (assign,nonatomic) long long cameraCaptureMode; 
@property (assign,nonatomic) long long cameraDevice; 
@property (assign,nonatomic) long long cameraFlashMode; 
+(BOOL)isSourceTypeAvailable:(long long)arg1 ;
+(BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2 ;
+(BOOL)isCameraDeviceAvailable:(long long)arg1 ;
+(BOOL)_reviewCapturedItems;
+(id)availableMediaTypesForSourceType:(long long)arg1 ;
+(id)availableCaptureModesForCameraDevice:(long long)arg1 ;
+(BOOL)isFlashAvailableForCameraDevice:(long long)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(void)viewWillUnload;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)_viewControllerPresentationDidInitiate;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(long long)sourceType;
-(void)_setAllowsImageEditing:(BOOL)arg1 ;
-(BOOL)_allowsImageEditing;
-(void)setCameraCaptureMode:(long long)arg1 ;
-(void)_setupControllersForCurrentSourceTypeWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateCameraCaptureMode;
-(void)_setupControllersForCurrentMediaTypes;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(BOOL)_sourceTypeIsCamera;
-(id)_cameraViewController;
-(BOOL)_isCameraCaptureModeValid:(long long)arg1 ;
-(BOOL)_shouldDelayPresentation;
-(void)_removeAllChildren;
-(void)_handleTopViewControllerReadyForDisplay:(id)arg1 ;
-(BOOL)_isPhotoPickerExtensionEnabled;
-(id)photosExtensionDiscoveryDriver;
-(void)setPhotosExtensionDiscoveryDriver:(id)arg1 ;
-(void)_invalidatePhotoPickerServices;
-(void)_setPhotoPickerDisplayCompletion:(/*^block*/id)arg1 ;
-(void)_setPhotoPickerPreviewDisplayCompletion:(/*^block*/id)arg1 ;
-(void)setPhotosExtension:(NSExtension *)arg1 ;
-(void)setInitialViewControllerClassName:(NSString *)arg1 ;
-(id)_properties;
-(void)_serializeHandlingMatchingExtensions:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSourceType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)photosExtensionDiscoveryQueue;
-(void)_handleMatchingExtensions:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSExtension *)photosExtension;
-(id)_propertiesForPhotoPickerExtension;
-(Class)photoPickerRequestOptionsClass;
-(NSString *)initialViewControllerClassName;
-(void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleEndingPhotoPickerPresentationDelay;
-(NSArray *)mediaTypes;
-(BOOL)_allowsMultipleSelection;
-(unsigned long long)_imagePickerSavingOptions;
-(void)_imagePickerDidCancel;
-(void)_handlePushViewController:(id)arg1 ;
-(/*^block*/id)_photoPickerDisplayCompletion;
-(/*^block*/id)_photoPickerPreviewDisplayCompletion;
-(void)_imagePickerDidCompleteWithInfo:(id)arg1 ;
-(void)_imagePickerDidCompleteWithInfoArray:(id)arg1 ;
-(void)_createInitialControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_autoDismiss;
-(id)_initWithSourceImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(void)_setAllowsMultipleSelection:(BOOL)arg1 ;
-(unsigned long long)_multipleSelectionLimit;
-(void)_setMultipleSelectionLimit:(unsigned long long)arg1 ;
-(BOOL)_onlyShowAutoloops;
-(void)_setOnlyShowAutoloops:(BOOL)arg1 ;
-(BOOL)_convertAutoloopsToGIF;
-(void)_setConvertAutoloopsToGIF:(BOOL)arg1 ;
-(BOOL)_showsPrompt;
-(void)_setShowsPrompt:(BOOL)arg1 ;
-(id)_staticPrompt;
-(void)_setStaticPrompt:(id)arg1 ;
-(id)_targetForPrompt;
-(void)_setTargetForPrompt:(id)arg1 ;
-(BOOL)_allowsIris;
-(void)_setAllowsIris:(BOOL)arg1 ;
-(BOOL)allowsImageEditing;
-(void)setAllowsImageEditing:(BOOL)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(long long)imageExportPreset;
-(void)setImageExportPreset:(long long)arg1 ;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(long long)videoQuality;
-(void)setVideoQuality:(long long)arg1 ;
-(NSString *)videoExportPreset;
-(void)setVideoExportPreset:(NSString *)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(void)_setImagePickerSavingOptions:(unsigned long long)arg1 ;
-(BOOL)showsCameraControls;
-(void)setShowsCameraControls:(BOOL)arg1 ;
-(UIView *)cameraOverlayView;
-(void)setCameraOverlayView:(UIView *)arg1 ;
-(CGAffineTransform)cameraViewTransform;
-(void)setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)takePicture;
-(BOOL)startVideoCapture;
-(void)stopVideoCapture;
-(long long)cameraDevice;
-(void)setCameraDevice:(long long)arg1 ;
-(long long)cameraCaptureMode;
-(long long)cameraFlashMode;
-(void)setCameraFlashMode:(long long)arg1 ;
-(BOOL)_didRevertStatusBar;
-(void)_testPerformPreviewOfFirstPhoto;
-(void)cancelPhotoPicker;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1 ;
-(void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1 ;
-(void)setPhotoPickerViewControllerTitle:(id)arg1 ;
-(void)didDisplayPhotoPickerSourceType:(id)arg1 ;
-(void)didDisplayPhotoPickerPreview;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1 ;
@end

