/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerView : UIView <ISBasePlayerDelegate, ISChangeObserver> {
    NSMutableSet * __activeGestures;
    UIGestureRecognizer * __gestureRecognizer;
    ISPlayerItem * __playerItem;
    ISBasePlayerUIView * __playerView;
    ISWrappedAVPlayer * __videoPlayer;
    BOOL  _audioMuted;
    <ISPlayerViewDelegate> * _delegate;
    struct { 
        BOOL playbackStateDidChange; 
        BOOL interactingDidChange; 
        BOOL gestureRecognizerDidChange; 
    }  _delegateRespondsTo;
    struct CGSize { 
        float width; 
        float height; 
    }  _dimensionsOfReservedVideoMemory;
    NSError * _error;
    BOOL  _isInteracting;
    BOOL  _isReadyForDisplay;
    struct { 
        BOOL playerItemLoadingTarget; 
        BOOL playerPlayerItem; 
        BOOL playerView; 
        BOOL playerMuted; 
        BOOL status; 
        BOOL readyForDisplay; 
        BOOL playbackState; 
    }  _isValid;
    int  _playbackState;
    unsigned int  _playbackStyle;
    BOOL  _readyForDisplay;
    int  _status;
}

@property (nonatomic, readonly) NSMutableSet *_activeGestures;
@property (setter=_setGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *_gestureRecognizer;
@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (setter=_setPlayerView:, nonatomic, retain) ISBasePlayerUIView *_playerView;
@property (nonatomic, readonly) ISWrappedAVPlayer *_videoPlayer;
@property (nonatomic) BOOL audioMuted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISPlayerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { float x1; float x2; } dimensionsOfReservedVideoMemory;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isInteracting;
@property (nonatomic, readonly) BOOL isReadyForDisplay;
@property (setter=_setPlaybackState:, nonatomic) int playbackState;
@property (nonatomic) unsigned int playbackStyle;
@property (setter=_setReadyForDisplay:, nonatomic) BOOL readyForDisplay;
@property (setter=_setStatus:, nonatomic) int status;
@property (readonly) Class superclass;

+ (void)setAllowPlayerReuse:(BOOL)arg1;

- (void).cxx_destruct;
- (id)_activeGestures;
- (id)_gestureRecognizer;
- (void)_handleGesture:(id)arg1;
- (void)_invalidatePlaybackState;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidateReadyForDisplay;
- (void)_invalidateStatus;
- (BOOL)_needsUpdate;
- (id)_playerItem;
- (id)_playerView;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_setInteracting:(BOOL)arg1;
- (void)_setPlaybackState:(int)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_setPlayerView:(id)arg1;
- (void)_setReadyForDisplay:(BOOL)arg1;
- (void)_setStatus:(int)arg1;
- (void)_updateIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;
- (void)_updateStatusIfNeeded;
- (id)_videoPlayer;
- (BOOL)audioMuted;
- (id)delegate;
- (struct CGSize { float x1; float x2; })dimensionsOfReservedVideoMemory;
- (id)error;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (BOOL)isInteracting;
- (BOOL)isReadyForDisplay;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (int)playbackState;
- (unsigned int)playbackStyle;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPlayerItem:(id)arg1;
- (BOOL)readyForDisplay;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setContentMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { float x1; float x2; })arg1;
- (void)setPlaybackStyle:(unsigned int)arg1;
- (int)status;
- (id)videoPlayerForPlayer:(id)arg1;

@end
