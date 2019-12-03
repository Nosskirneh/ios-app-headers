//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHBaseRadioHubViewController.h"

@class RHLayoutManagerView, RHRadioHubRecentViewController, RHStationsByGenreCollectionViewController, UIView;

@interface RHRadioTierRadioHubViewController_iPad : RHBaseRadioHubViewController
{
    RHStationsByGenreCollectionViewController *_genreCollectionViewController;
    RHRadioHubRecentViewController *_recentViewController;
    UIView *_separatorLine;
}

@property(nonatomic) __weak UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) RHRadioHubRecentViewController *recentViewController; // @synthesize recentViewController=_recentViewController;
@property(retain, nonatomic) RHStationsByGenreCollectionViewController *genreCollectionViewController; // @synthesize genreCollectionViewController=_genreCollectionViewController;
- (void).cxx_destruct;
- (void)notifyViewControllerDidUpdateLayout;
@property(readonly, nonatomic) RHLayoutManagerView *layoutManagerView;
- (void)initialSetupGenreStationsController;
- (void)setupButtonRows;
- (void)viewApplicationWillEnterForeground:(id)arg1;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDependencies:(id)arg1;

@end
