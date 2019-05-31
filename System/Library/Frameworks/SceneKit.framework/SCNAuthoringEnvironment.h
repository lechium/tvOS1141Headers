/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNSceneRenderer;
#import <SceneKit/SceneKit-Structs.h>
@class NSSet, NSMutableOrderedSet, NSArray, NSMutableArray, SCNManipulator, SCNAuthoringEnvironment2;

@interface SCNAuthoringEnvironment : NSObject {

	C3DEngineContextRef _engineContext;
	id<SCNSceneRenderer> _sceneRenderer;
	_C3DFXProgram* _noColorProgram;
	_C3DFXProgram* _colorOnlyProgram;
	_C3DFXProgram* _colorAndTextureProgram;
	_C3DFXProgram* _lightProbesProgram;
	_C3DFXProgram* _wireframeProgram;
	SCD_Struct_SC126* _logsInfo;
	SCD_Struct_SC126* _boldLogsInfo;
	SCD_Struct_SC126* _upArrowInfo;
	SCD_Struct_SC126* _xyQuadrantInfo;
	SCD_Struct_SC126* _xyQuadrantRingInfo;
	SCD_Struct_SC126* _dynamicLinesInfo;
	SCD_Struct_SC126* _dynamicLinesNoDepthTestInfo;
	SCD_Struct_SC126* _dynamicTrianglesInfo;
	SCD_Struct_SC126* _overlayDynamicLinesInfo;
	SCD_Struct_SC126* _overlayDynamicTriangleInfo;
	SCD_Struct_SC126* _textInfo;
	SCD_Struct_SC126* _lightProbesInfo;
	SCD_Struct_SC128* _normalTextInfo;
	SCD_Struct_SC128* _boldTextInfo;
	C3DRasterizerStatesRef _depthOnCullOnStates;
	C3DRasterizerStatesRef _depthOffCullOnStates;
	C3DRasterizerStatesRef _depthOnCullOffStates;
	C3DRasterizerStatesRef _depthOffCullOffStates;
	const void* _arrowIndicesOffset;
	unsigned short _arrowIndicesCount;
	const void* _quadrantIndicesOffset;
	unsigned short _quadrantIndicesCount;
	const void* _quadrantRingIndicesOffset;
	unsigned short _quadrantRingIndicesCount;
	long long _authoringDisplayMask;
	unsigned _hasLighting : 1;
	BOOL _shouldSnapOnGrid;
	BOOL _shouldSnapToAlign;
	BOOL _selectionIsReadonly;
	long long _editingSpace;
	BOOL _graphicalSelectionEnabled;
	 _selectionP0;
	 _selectionP1;
	BOOL _selecting;
	BOOL _surroundToSelect;
	NSSet* _initialSelection;
	NSMutableOrderedSet* _selection;
	NSArray* _selectedNodes;
	float _lastGridDistance;
	double _gridUnit;
	NSMutableArray* _visibleManipulableItems;
	void* _wireframeRenderer;
	SCD_Struct_SC130* _statisticsInfo;
	float _drawScale;
	SCNManipulator* _manipulator;
	id _delegate;
	SCNAuthoringEnvironment2* _authEnv2;

}

@property (readonly) id<SCNSceneRenderer> sceneRenderer; 
@property (nonatomic,readonly) NSArray * selectedNodes; 
@property (assign,nonatomic) BOOL selectionIsReadonly; 
@property (nonatomic,readonly) SCNManipulator * manipulator; 
@property (assign,nonatomic) BOOL shouldSnapOnGrid;                                            //@synthesize shouldSnapOnGrid=_shouldSnapOnGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapToAlign;                                           //@synthesize shouldSnapToAlign=_shouldSnapToAlign - In the implementation block
@property (assign,nonatomic) BOOL graphicalSelectionEnabled;                                   //@synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL surroundToSelect;                                            //@synthesize surroundToSelect=_surroundToSelect - In the implementation block
@property (assign,nonatomic) long long authoringDisplayMask; 
@property (nonatomic,readonly) double gridUnit;                                                //@synthesize gridUnit=_gridUnit - In the implementation block
@property (assign,nonatomic) long long editingSpace;                                           //@synthesize editingSpace=_editingSpace - In the implementation block
@property (nonatomic,readonly) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic,__weak) id<SCNAuthoringEnvironmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)authoringEnvironmentForSceneRenderer:(id)arg1 ;
+(long long)defaultAuthoringDisplayMask;
-(id)init;
-(id<SCNAuthoringEnvironmentDelegate>)delegate;
-(void)setDelegate:(id<SCNAuthoringEnvironmentDelegate>)arg1 ;
-(void)dealloc;
-(void)update;
-(long long)editingSpace;
-(double)gridUnit;
-(BOOL)shouldSnapToAlign;
-(BOOL)shouldSnapOnGrid;
-(id<SCNSceneRenderer>)sceneRenderer;
-(SCNMatrix4)viewMatrix;
-(long long)authoringDisplayMask;
-(void)setAuthoringDisplayMask:(long long)arg1 ;
-(BOOL)didTapAtPoint:(CGPoint)arg1 ;
-(id)_initWithEngineContext:(C3DEngineContextRef)arg1 ;
-(id)selectedItems;
-(void)beginEditingNodes:(id)arg1 ;
-(void)_updateManipulatorTargets;
-(NSArray *)selectedNodes;
-(BOOL)selectionIsReadonly;
-(void)setSelectionIsReadonly:(BOOL)arg1 ;
-(SCNManipulator *)manipulator;
-(void)cancelEdition;
-(void)beginEditingNode:(id)arg1 ;
-(void)saveInitialSelection;
-(void)drawLineFromPoint:(SCNVector3)arg1 toPoint:(SCNVector3)arg2 color:(id)arg3 ;
-(void)drawString:(id)arg1 atPoint:(CGPoint)arg2 color:(id)arg3 ;
-(BOOL)isEditingSubComponent;
-(void)setShouldSnapOnGrid:(BOOL)arg1 ;
-(void)setShouldSnapToAlign:(BOOL)arg1 ;
-(void)setEditingSpace:(long long)arg1 ;
-(BOOL)graphicalSelectionEnabled;
-(void)setGraphicalSelectionEnabled:(BOOL)arg1 ;
-(BOOL)surroundToSelect;
-(void)setSurroundToSelect:(BOOL)arg1 ;
@end

