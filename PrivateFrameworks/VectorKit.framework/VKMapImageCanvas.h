/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap, VKMapModelDelegate> {
    VKMapModel * _mapModel;
}

@property (nonatomic, retain) NSArray *customFeatureDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (readonly) Class superclass;

- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancelTileRequests;
- (void)clearScene;
- (id)customFeatureDataSources;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 localizeLabels:(BOOL)arg6 mapType:(int)arg7;
- (id)initWithTarget:(id)arg1 device:(struct Device { }*)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 mapPurpose:(unsigned int)arg6;
- (BOOL)isShowingNoDataPlaceholders;
- (unsigned char)labelScaleFactor;
- (BOOL)localizeLabels;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelWillBecomeFullyDrawn:(id)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)setCustomFeatureDataSources:(id)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)setMapType:(int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (void)update;

@end
