/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSMutableSet, SCNNode, SCNRenderer, SCNGeometry, UIColor;

@interface SCNAuthoringEnvironment2 : NSObject {

	NSMutableSet* _selection;
	C3DSceneRef _scene;
	SCNNode* _layerRoot;
	SCNNode* _lightRoot;
	SCNNode* _cameraRoot;
	SCNNode* _particlesRoot;
	SCNNode* _physicsFieldsRoot;
	SCNNode* _cameraTarget;
	SCNNode* _pointsOfViewRoot;
	CFDictionaryRef _lightsDictionary;
	CFDictionaryRef _camerasDictionary;
	CFDictionaryRef _particlesDictionary;
	CFDictionaryRef _physicsFieldsDictionary;
	SCNRenderer* _renderer;
	SCNGeometry* _lightGeometry;
	SCNGeometry* _cameraFrustumGeometry;
	SCNGeometry* _cameraGeometry;
	SCNGeometry* _cameraNearPlaneGeometry;
	SCNGeometry* _particlesGeometry;
	SCNGeometry* _fieldGeometry;
	long long _displayMask;
	long long _readDepthMask;
	UIColor* _paleGreen;
	UIColor* _paleBlue;
	UIColor* _red;
	UIColor* _green;
	UIColor* _blue;
	UIColor* _cyan;
	UIColor* _yellow;
	UIColor* _orange;
	UIColor* _pink;
	UIColor* _grayLight;
	UIColor* _grayMedium;
	UIColor* _grayDark;
	UIColor* _white;

}

@property (assign) long long displayMask; 
@property (assign) long long readDepthMask; 
+(id)authoringEnvironmentForScene:(id)arg1 ;
-(void)dealloc;
-(void)selectNode:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)prepareScene:(id)arg1 ;
-(void)addedNode:(id)arg1 ;
-(void)setDisplayMask:(long long)arg1 ;
-(id)lightGeometry;
-(id)particlesGeometry;
-(id)cameraGeometry;
-(id)cameraFrustumGeometry;
-(id)cameraNearPlaneGeometry;
-(id)fieldGeometry;
-(void)addLightNode:(id)arg1 ;
-(void)addParticlesNode:(id)arg1 ;
-(void)addCameraNode:(id)arg1 ;
-(void)addPhysicsFieldNode:(id)arg1 ;
-(void)removeLightNode:(id)arg1 ;
-(void)removeParticlesNode:(id)arg1 ;
-(void)removeCameraNode:(id)arg1 ;
-(void)removePhysicsFieldNode:(id)arg1 ;
-(void)updateLightTypeForNode:(id)arg1 source:(id)arg2 light:(id)arg3 andRatio:(float)arg4 ;
-(id)authoringCameraNodes;
-(void)removedNode:(id)arg1 ;
-(void)addNodeToSelection:(id)arg1 ;
-(void)selectNodes:(id)arg1 ;
-(void)cancelSelection;
-(void)updateLightNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateParticlesNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateCameraNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateFieldNode:(id)arg1 withSourceNode:(id)arg2 ;
-(void)updateWithRenderer:(id)arg1 ;
-(long long)displayMask;
-(long long)readDepthMask;
-(void)setReadDepthMask:(long long)arg1 ;
-(BOOL)didTapAtPoint:(CGPoint)arg1 ;
-(void)setAuthoringCamera:(long long)arg1 forView:(id)arg2 ;
-(id)authoringCamera:(long long)arg1 ;
@end
