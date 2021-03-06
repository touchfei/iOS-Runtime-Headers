/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager {
    BOOL  __canceled;
    PHFetchResult * __collectionListFetchResult;
    PXPhotosDetailsContext * __context;
    unsigned int  __initialBatchSize;
    unsigned int  __loadBatchSize;
    PHFetchResult * __preparedRelatedCollections;
    PHFetchResult * __relatedCollections;
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    BOOL  _didLoadInitialDataSource;
    BOOL  _didStartLoading;
    unsigned int  _fetchLimit;
    unsigned int  _initialBatchSize;
    unsigned int  _loadBatchSize;
    NSDate * _loadStartDate;
    PXRelatedSettings * _settings;
    BOOL  _shouldCancelLoading;
}

@property (getter=_isCanceled, setter=_setCanceled:, nonatomic) BOOL _canceled;
@property (nonatomic, readonly) PHFetchResult *_collectionListFetchResult;
@property (nonatomic, readonly) PXPhotosDetailsContext *_context;
@property (setter=_setPreparedRelatedCollections:, nonatomic, retain) PHFetchResult *_preparedRelatedCollections;
@property (setter=_setRelatedCollections:, nonatomic, retain) PHFetchResult *_relatedCollections;
@property (nonatomic, readonly) PXRelatedDataSource *dataSource;
@property (nonatomic) unsigned int initialBatchSize;
@property (nonatomic) unsigned int loadBatchSize;

- (void).cxx_destruct;
- (id)_collectionListFetchResult;
- (id)_collectionListRelatedToObject:(id)arg1;
- (id)_collectionsRelatedToReferenceObject:(id)arg1;
- (id)_context;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(int)arg2;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;
- (BOOL)_isCanceled;
- (id)_keyAssetForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;
- (id)_preparedRelatedCollections;
- (id)_referenceAssetForReferenceObject:(id)arg1;
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;
- (id)_relatedCollections;
- (void)_setCanceled:(BOOL)arg1;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)_setPreparedRelatedCollections:(id)arg1;
- (void)_setRelatedCollections:(id)arg1;
- (void)_startBackgroundLoad;
- (void)cancelLoading;
- (id)init;
- (id)initWithPhotosDetailsContext:(id)arg1;
- (unsigned int)initialBatchSize;
- (unsigned int)loadBatchSize;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)setInitialBatchSize:(unsigned int)arg1;
- (void)setLoadBatchSize:(unsigned int)arg1;
- (void)startLoading;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;

@end
