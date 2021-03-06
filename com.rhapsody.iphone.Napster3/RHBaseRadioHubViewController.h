//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "_TtP7Napster20DynamicMetricsSource_-Protocol.h"

@class NSArray, NSString, RHButton, RHDataController, RHLayoutManagerView, RHLoadingOverlay, RHStackLayoutManager, UIButton, UIScrollView, _TtC7Napster12Dependencies;

@interface RHBaseRadioHubViewController : RHViewController <_TtP7Napster20DynamicMetricsSource_, NSFetchedResultsControllerDelegate>
{
    NSArray *_buttonRowsArray;
    _TtC7Napster12Dependencies *_dependencies;
    NSString *_dynamicMetricsSource;
    UIScrollView *_scrollView;
    RHLayoutManagerView *_buttonSection;
    UIButton *_addStationButton;
    UIButton *_myStationsButton;
    UIButton *_historyButton;
    RHButton *_myFavoritesButton;
    RHButton *_genreStationsButton;
    RHLoadingOverlay *_loadingOverlay;
    RHDataController *_dataController;
    RHStackLayoutManager *_stackLayoutManager;
}

@property(retain, nonatomic) RHStackLayoutManager *stackLayoutManager; // @synthesize stackLayoutManager=_stackLayoutManager;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak RHLoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(nonatomic) __weak RHButton *genreStationsButton; // @synthesize genreStationsButton=_genreStationsButton;
@property(nonatomic) __weak RHButton *myFavoritesButton; // @synthesize myFavoritesButton=_myFavoritesButton;
@property(nonatomic) __weak UIButton *historyButton; // @synthesize historyButton=_historyButton;
@property(nonatomic) __weak UIButton *myStationsButton; // @synthesize myStationsButton=_myStationsButton;
@property(nonatomic) __weak UIButton *addStationButton; // @synthesize addStationButton=_addStationButton;
@property(nonatomic) __weak RHLayoutManagerView *buttonSection; // @synthesize buttonSection=_buttonSection;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSString *dynamicMetricsSource; // @synthesize dynamicMetricsSource=_dynamicMetricsSource;
@property(retain, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) NSArray *buttonRowsArray; // @synthesize buttonRowsArray=_buttonRowsArray;
- (void).cxx_destruct;
- (void)setMetricsSource:(id)arg1;
- (id)metricsSource;
- (id)metricsScreenEvent;
- (id)metricsScreenName;
- (id)appDelegate;
- (void)updateInterfaceForAvailableData;
- (void)showGenreStations:(id)arg1;
- (void)showMyFavorites:(id)arg1;
- (void)historyButtonTapped:(id)arg1;
- (void)showMyStations:(_Bool)arg1;
- (void)myStationsButtonTapped:(id)arg1;
- (void)addStationButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupButtonRows;
- (void)updateLayout;
- (void)layoutButtonsSection;
- (void)arangeButtonsInOneRow:(id)arg1 yOrigin:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

