/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBasePhotoFaceView : NTKBackgroundImageFaceView <NPTOImageViewDelegate, UIGestureRecognizerDelegate> {
    UIView * _blackView;
    NTKUtilityComplicationFactory * _complicationFactory;
    UIView * _cornerView;
    UIView * _currentGradientView;
    unsigned int  _dateAlignment;
    UIColor * _foregroundColor;
    unsigned int  _isContentLoaded;
    unsigned int  _isInteractive;
    unsigned int  _isUsingLegibility;
    BOOL  _lastLongPressGestureWasCancelled;
    UILongPressGestureRecognizer * _longPressGesture;
    NTKAlbumEmptyView * _noPhotosView;
    BOOL  _noPhotosViewVisible;
    BOOL  _paused;
    NSTimer * _playOnWakeTimeout;
    NPTOImageView * _posterImageView;
    BOOL  _preLoadingPhotoOnSleep;
    BOOL  _preloadedPhotoOnSleep;
    int  _previousDataMode;
    UIColor * _shadowColor;
    BOOL  _shouldPlayIntro;
    BOOL  _shouldPlayOnWake;
    NTKTaskScheduler * _taskScheduler;
    id /* block */  _unpauseFromSwitcherBlock;
}

@property (nonatomic, readonly) unsigned int dateAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isInteractive;
@property (getter=isNoPhotosViewVisible, nonatomic) BOOL noPhotosViewVisible;
@property (nonatomic, readonly) NPTOImageView *posterImageView;
@property (readonly) Class superclass;

+ (id)_analysisForPhoto:(id)arg1 dateAlignment:(unsigned int)arg2;
+ (id)_analyzeSidecarPhoto:(id)arg1 dateAlignment:(unsigned int)arg2;
+ (id)_saveSidecarPhotoAnalysis:(id)arg1;
+ (id)_temporaryDirectory;

- (void).cxx_destruct;
- (void)_animateIn;
- (void)_applyAlignment;
- (void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)arg1;
- (void)_applyDataMode;
- (void)_applyForegroundAlphaForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (void)_applySlow;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (float)_backgroundImageAlphaForEditMode:(int)arg1;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterOrb:(BOOL)arg1;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (BOOL)_curtainViewVisible;
- (id)_digitalTimeLabelStyle;
- (float)_editSpeedForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(id /* block */)arg2;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (void)_handleLongPress:(id)arg1;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_invalidatePreloadedPhoto;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newGradientViewWithColor:(id)arg1;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_playPhoto;
- (void)_playStill;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)arg1;
- (BOOL)_preloadNextPhoto;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(float)arg2 maxDiameter:(float)arg3;
- (void)_scheduleSleepPreloadTask;
- (BOOL)_screenOn;
- (id)_selectedContentView;
- (void)_setComplicationsHidden:(BOOL)arg1;
- (void)_setDateAttributes:(id)arg1 animated:(BOOL)arg2;
- (void)_setZoomFraction:(float)arg1 iconDiameter:(float)arg2;
- (void)_showCurtainView;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (float)_timeLabelAlphaForEditMode:(int)arg1;
- (BOOL)_timeLabelUsesLegibility;
- (float)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updatePaused;
- (BOOL)_usesCustomZoom;
- (int)_utilitySlotForSlot:(id)arg1;
- (unsigned int)dateAlignment;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)imageViewDidBeginPlaying:(id)arg1;
- (void)imageViewDidEndPlaying:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isInteractive;
- (BOOL)isNoPhotosViewVisible;
- (void)layoutSubviews;
- (id)posterImageView;
- (void)setNoPhotosViewVisible:(BOOL)arg1;

@end